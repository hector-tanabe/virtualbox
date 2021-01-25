/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package virtualbox;

/**
 *
 * @author Hector
 */
public enum LaunchMode {
    /**
     * VirtualBox Qt GUI front-end
     */
    gui,
    /**
     * VBoxHeadless (VRDE Server) front-end
     */
    headless,
    /**
     * VirtualBox SDL front-end
     */
    sdl
}
