/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package virtualbox;
import java.util.ArrayList;
import java.util.List;
import org.virtualbox_6_1.*;

/**
 *
 * @author Hector
 */
public class Virtualbox {
    
    private static VirtualBoxManager boxManager;
    private static IVirtualBox vbox;
    public static VirtualBoxManager vboxclient = null;
    private static IProgress progress;

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        // cd C:\Program Files\Oracle\VirtualBox
        // vboxwebsrv -H 127.0.0.1 -A null
        boxManager = VirtualBoxManager.createInstance(null);
        boxManager.connect("http://127.0.0.1:18083", null, null);
        vbox = boxManager.getVBox();
        // System.out.println(getVBoxVersion());
        // System.out.println(machineExists("Fedora Server"));
        // createMachine();
    }

    public static String getVBoxVersion() {
        return vbox.getVersion();
    }
    
    public static void createMachine() {
        IMachine mac = null;
        mac = vbox.createMachine(null, "test", null, null, null);
        mac.saveSettings();
        vbox.registerMachine(mac);
        System.out.println("Machine created");
    }
    
    public static List<IMachine> getMachines(MachineState state) {
        List<IMachine> iMachines = new ArrayList<>();
        for (IMachine machine : vbox.getMachines()) {
            if (machine.getState() == state) {
                iMachines.add(machine);
            }
        }
        return iMachines;
    }
    
    private static boolean machineExists(String machineName) {
        if (machineName == null) {
            return false;
        }
        List<IMachine> machines = vbox.getMachines();
        for (IMachine machine : machines) {
            if (machine.getName().equals(machineName)) {
                return true;
            }
        }
        return false;
    }
    
    public static boolean launchMachine(String machineName, LaunchMode mode) {
        if (!machineExists(machineName)) {
            return false;
        }
        IMachine machine = vbox.findMachine(machineName);
        ISession session = boxManager.getSessionObject();
        try {
            IProgress progress = machine.launchVMProcess(session, mode.name(), null);
            wait(progress);
        } finally {
            session.unlockMachine();
        }
        //TODO add a timeout
        try {
            String ipv4 = null;
            do {
                Thread.sleep(3000);
                ipv4 = getMachineIPv4(machineName);
            } while (ipv4 == null);
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
        return true;
    }
    
    private static void shutdownMachine(String machineName) {
        if (!machineExists(machineName)) {
            return;
        }
        IMachine machine = vbox.findMachine(machineName);
        MachineState state = machine.getState();
        ISession session = boxManager.getSessionObject();
        machine.lockMachine(session, LockType.Shared);
        try {
            if (state.value() >= MachineState.FirstOnline.value() && state.value() <= MachineState.LastOnline.value()) {
                IProgress progress = session.getConsole().powerDown();
                wait(progress);
            }
        } finally {
            waitToUnlock(session, machine);
        }
    }
    
    private static void wait(IProgress progress1) {
        progress = progress1;
        progress.waitForCompletion(-1);
        if (progress.getResultCode() != 0) {
            System.err.println("Operation failed: " + progress.getErrorInfo().getText());
        }
    }
    
    private static void waitToUnlock(ISession session, IMachine machine) {
        session.unlockMachine();
        SessionState sessionState = machine.getSessionState();
        while (!SessionState.Unlocked.equals(sessionState)) {
            sessionState = machine.getSessionState();
            try {
                System.err.println("Waiting for session unlock...[" + sessionState.name() + "][" + machine.getName() + "]");
                Thread.sleep(1000L);
            } catch (InterruptedException e) {
                System.err.println("Interrupted while waiting for session to be unlocked");
            }
        }
    }
    
    public static String getMachineIPv4(String machineName) {
        if (!machineExists(machineName)) {
            return null;
        }
        IMachine machine = vbox.findMachine(machineName);
        Holder<List<String>> keys = new Holder<>();
        Holder<List<String>> values = new Holder<>();
        Holder<List<Long>> timestamps = new Holder<>();
        Holder<List<String>> flags = new Holder<>();
        machine.enumerateGuestProperties(null, keys, values, timestamps, flags);
        String ipv4 = null;
        for (int i = 0; i < keys.value.size(); i++) {
            String key = keys.value.get(i);
            String val = values.value.get(i);
            if (key.contains("GuestInfo/Net/0/V4/IP") && val.startsWith("10.0")) {
                ipv4 = val;
                break;
            }
        }
        return ipv4;
    }
    
}
