#pragma warning(push) /* -Wall and windows.h */
#pragma warning(disable:4668 4255)
#if _MSC_VER >= 1800 /* RT_MSC_VER_VC120 */
# pragma warning(disable:4005)
#endif



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu Jan  7 16:45:44 2021
 */
/* Compiler settings for Z:\home\vbox\tinderbox\6.1-sdk\out\linux.amd64\release\bin\sdk\bindings\mscom\idl\VirtualBox.idl:
    Oicf, W4, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IVirtualBoxErrorInfo,0xc1bcc6d5,0x7966,0x481d,0xab,0x0b,0xd0,0xed,0x73,0xe2,0x81,0x35);


MIDL_DEFINE_GUID(IID, IID_INATNetwork,0x4fdebbf0,0xbe30,0x49c0,0xb3,0x15,0xe9,0x74,0x9e,0x1b,0xde,0xd1);


MIDL_DEFINE_GUID(IID, IID_ICloudNetwork,0xd8e3496e,0x735f,0x4fde,0x8a,0x54,0x42,0x7d,0x49,0x40,0x9b,0x5f);


MIDL_DEFINE_GUID(IID, IID_IDHCPServer,0xcadef0a2,0xa1a9,0x4ac2,0x8e,0x80,0xc0,0x49,0xaf,0x69,0xda,0xc8);


MIDL_DEFINE_GUID(IID, IID_IDHCPConfig,0x00f4a8dc,0x0002,0x4b81,0x00,0x77,0x1d,0xcb,0x00,0x45,0x71,0xba);


MIDL_DEFINE_GUID(IID, IID_IDHCPGlobalConfig,0x46735de7,0xf4c4,0x4020,0xa1,0x85,0x0d,0x28,0x81,0xbc,0xfa,0x8b);


MIDL_DEFINE_GUID(IID, IID_IDHCPGroupCondition,0x5ca9e537,0x5a1d,0x43f1,0x6f,0x27,0x6a,0x0d,0xb2,0x98,0xa9,0xa8);


MIDL_DEFINE_GUID(IID, IID_IDHCPGroupConfig,0x537707f7,0xebf9,0x4d5c,0x7a,0xea,0x87,0x7b,0xfc,0x42,0x56,0xba);


MIDL_DEFINE_GUID(IID, IID_IDHCPIndividualConfig,0xc40c2b86,0x73a5,0x46cc,0x82,0x27,0x93,0xfe,0x57,0xd0,0x06,0xa6);


MIDL_DEFINE_GUID(IID, IID_IVirtualBox,0xd0a0163f,0xe254,0x4e5b,0xa1,0xf2,0x01,0x1c,0xf9,0x91,0xc3,0x8d);


MIDL_DEFINE_GUID(IID, IID_IVFSExplorer,0xfb220201,0x2fd3,0x47e2,0xa5,0xdc,0x2c,0x24,0x31,0xd8,0x33,0xcc);


MIDL_DEFINE_GUID(IID, IID_ICertificate,0x392f1de4,0x80e1,0x4a8a,0x93,0xa1,0x67,0xc5,0xf9,0x2a,0x83,0x8a);


MIDL_DEFINE_GUID(IID, IID_IAppliance,0x86a98347,0x7619,0x41aa,0xae,0xce,0xb2,0x1a,0xc5,0xc1,0xa7,0xe6);


MIDL_DEFINE_GUID(IID, IID_IVirtualSystemDescription,0x01510f40,0xc196,0x4d26,0xb8,0xdb,0x4c,0x8c,0x38,0x9f,0x1f,0x82);


MIDL_DEFINE_GUID(IID, IID_IUnattended,0x6f89464f,0x7193,0x426c,0xa4,0x1f,0x52,0x2e,0x8f,0x53,0x7f,0xa0);


MIDL_DEFINE_GUID(IID, IID_IInternalMachineControl,0x0075FD6C,0x00C2,0x4484,0x00,0x77,0xC0,0x57,0x00,0x3D,0x9C,0x90);


MIDL_DEFINE_GUID(IID, IID_IGraphicsAdapter,0xf692806f,0xfebe,0x4049,0xb4,0x76,0x12,0x92,0xa8,0xe4,0x5b,0x09);


MIDL_DEFINE_GUID(IID, IID_IBIOSSettings,0x73af4152,0x7e67,0x4144,0xbf,0x34,0x41,0xc3,0x8e,0x8b,0x4c,0xc7);


MIDL_DEFINE_GUID(IID, IID_IRecordingScreenSettings,0x678fbd9a,0x93af,0x42a7,0x7f,0x13,0x79,0xad,0x6e,0xf1,0xa1,0x8d);


MIDL_DEFINE_GUID(IID, IID_IRecordingSettings,0xD88F2A5A,0x47C7,0x4A3F,0xAA,0xE1,0x1B,0x51,0x68,0x17,0xDB,0x41);


MIDL_DEFINE_GUID(IID, IID_IPCIAddress,0xc984d15f,0xe191,0x400b,0x84,0x0e,0x97,0x0f,0x3d,0xad,0x72,0x96);


MIDL_DEFINE_GUID(IID, IID_IPCIDeviceAttachment,0x91f33d6f,0xe621,0x4f70,0xa7,0x7e,0x15,0xf0,0xe3,0xc7,0x14,0xd5);


MIDL_DEFINE_GUID(IID, IID_IMachine,0x85632c68,0xb5bb,0x4316,0xa9,0x00,0x5e,0xb2,0x8d,0x34,0x13,0xdf);


MIDL_DEFINE_GUID(IID, IID_IEmulatedUSB,0x6e253ee8,0x477a,0x2497,0x67,0x59,0x88,0xb8,0x29,0x2a,0x5a,0xf0);


MIDL_DEFINE_GUID(IID, IID_IVRDEServerInfo,0xc39ef4d6,0x7532,0x45e8,0x96,0xda,0xeb,0x59,0x86,0xae,0x76,0xe4);


MIDL_DEFINE_GUID(IID, IID_IConsole,0x872da645,0x4a9b,0x1727,0xbe,0xe2,0x55,0x85,0x10,0x5b,0x9e,0xed);


MIDL_DEFINE_GUID(IID, IID_IHostNetworkInterface,0x455f8c45,0x44a0,0xa470,0xba,0x20,0x27,0x89,0x0b,0x96,0xdb,0xa9);


MIDL_DEFINE_GUID(IID, IID_IHostVideoInputDevice,0xe8c25d4d,0xac97,0x4c16,0xb3,0xe2,0x81,0xbd,0x8a,0x57,0xcc,0x27);


MIDL_DEFINE_GUID(IID, IID_IHostUpdate,0x6fa2671b,0x0547,0x448e,0xbc,0x7c,0x94,0xe9,0xe1,0x73,0xbf,0x57);


MIDL_DEFINE_GUID(IID, IID_IHost,0x16ced992,0x5fdc,0x4aba,0xaf,0xf5,0x6a,0x39,0xbb,0xd7,0xc3,0x8b);


MIDL_DEFINE_GUID(IID, IID_ISystemProperties,0x027bc463,0x929c,0x40e8,0xbf,0x16,0xfe,0xa5,0x57,0xcd,0x8e,0x7e);


MIDL_DEFINE_GUID(IID, IID_IGuestOSType,0xd0d6c6d8,0xe5db,0x4d2c,0xba,0xaa,0xc7,0x10,0x53,0xa6,0x23,0x6d);


MIDL_DEFINE_GUID(IID, IID_IAdditionsFacility,0xf2f7fae4,0x4a06,0x81fc,0xa9,0x16,0x78,0xb2,0xda,0x1f,0xa0,0xe5);


MIDL_DEFINE_GUID(IID, IID_IDnDBase,0x4132147b,0x42f8,0xcd96,0x75,0x70,0x6a,0x88,0x00,0xe3,0x34,0x2c);


MIDL_DEFINE_GUID(IID, IID_IDnDSource,0xd23a9ca3,0x42da,0xc94b,0x8a,0xec,0x21,0x96,0x8e,0x08,0x35,0x5d);


MIDL_DEFINE_GUID(IID, IID_IGuestDnDSource,0xdedfb5d9,0x4c1b,0xedf7,0xfd,0xf3,0xc1,0xbe,0x68,0x27,0xdc,0x28);


MIDL_DEFINE_GUID(IID, IID_IDnDTarget,0xff5befc3,0x4ba3,0x7903,0x2a,0xa4,0x43,0x98,0x8b,0xa1,0x15,0x54);


MIDL_DEFINE_GUID(IID, IID_IGuestDnDTarget,0x50ce4b51,0x0ff7,0x46b7,0xa1,0x38,0x3c,0x6e,0x5a,0xc9,0x46,0xb4);


MIDL_DEFINE_GUID(IID, IID_IGuestSession,0x3E14C189,0x4A75,0x437E,0xB0,0xBB,0x7E,0x7C,0x90,0xD0,0xDF,0x2A);


MIDL_DEFINE_GUID(IID, IID_IProcess,0xbc68370c,0x8a02,0x45f3,0xa0,0x7d,0xa6,0x7a,0xa7,0x27,0x56,0xaa);


MIDL_DEFINE_GUID(IID, IID_IGuestProcess,0x35cf4b3f,0x4453,0x4f3e,0xc9,0xb8,0x56,0x86,0x93,0x9c,0x80,0xb6);


MIDL_DEFINE_GUID(IID, IID_IDirectory,0x758d7eac,0xe4b1,0x486a,0x8f,0x2e,0x74,0x7a,0xe3,0x46,0xc3,0xe9);


MIDL_DEFINE_GUID(IID, IID_IGuestDirectory,0xcc830458,0x4974,0xa19c,0x4d,0xc6,0xcc,0x98,0xc2,0x26,0x96,0x26);


MIDL_DEFINE_GUID(IID, IID_IFile,0x59a235ac,0x2f1a,0x4d6c,0x81,0xfc,0xe3,0xfa,0x84,0x3f,0x49,0xae);


MIDL_DEFINE_GUID(IID, IID_IGuestFile,0x92f21dc0,0x44de,0x1653,0xb7,0x17,0x2e,0xbf,0x0c,0xa9,0xb6,0x64);


MIDL_DEFINE_GUID(IID, IID_IFsObjInfo,0x081fc833,0xc6fa,0x430e,0x60,0x20,0x6a,0x50,0x5d,0x08,0x63,0x87);


MIDL_DEFINE_GUID(IID, IID_IGuestFsObjInfo,0x6620db85,0x44e0,0xca69,0xe9,0xe0,0xd4,0x90,0x7c,0xec,0xcb,0xe5);


MIDL_DEFINE_GUID(IID, IID_IGuest,0x13a11514,0x402e,0x022e,0x61,0x80,0xc3,0x94,0x4d,0xe3,0xf9,0xc8);


MIDL_DEFINE_GUID(IID, IID_IProgress,0xd7b98d2b,0x30e8,0x447e,0x99,0xcb,0xe3,0x1b,0xec,0xae,0x6a,0xe4);


MIDL_DEFINE_GUID(IID, IID_IInternalProgressControl,0x41a033b8,0xcc87,0x4f6e,0xa0,0xe9,0x47,0xbb,0x7f,0x2d,0x4b,0xe5);


MIDL_DEFINE_GUID(IID, IID_ISnapshot,0x6cc49055,0xdad4,0x4496,0x85,0xcf,0x3f,0x76,0xbc,0xb3,0xb5,0xfa);


MIDL_DEFINE_GUID(IID, IID_IMediumAttachment,0x8d095cb0,0x0126,0x43e0,0xb0,0x5d,0x32,0x6e,0x74,0xab,0xb3,0x56);


MIDL_DEFINE_GUID(IID, IID_IMedium,0xad47ad09,0x787b,0x44ab,0xb3,0x43,0xa0,0x82,0xa3,0xf2,0xdf,0xb1);


MIDL_DEFINE_GUID(IID, IID_IMediumFormat,0x11be93c7,0xa862,0x4dc9,0x8c,0x89,0xbf,0x4b,0xa7,0x4a,0x88,0x6a);


MIDL_DEFINE_GUID(IID, IID_IDataStream,0xa338ed20,0x58d9,0x43ae,0x8b,0x03,0xc1,0xfd,0x70,0x88,0xef,0x15);


MIDL_DEFINE_GUID(IID, IID_IMediumIO,0xe4b301a9,0x5f86,0x4d65,0xad,0x1b,0x87,0xca,0x28,0x4f,0xb1,0xc8);


MIDL_DEFINE_GUID(IID, IID_IToken,0x20479eaf,0xd8ed,0x44cf,0x85,0xac,0xc8,0x3a,0x26,0xc9,0x5a,0x4d);


MIDL_DEFINE_GUID(IID, IID_IKeyboard,0x755e6bdf,0x1640,0x41f9,0xbd,0x74,0x3e,0xf5,0xfd,0x65,0x32,0x50);


MIDL_DEFINE_GUID(IID, IID_IMousePointerShape,0x1e775ea3,0x9070,0x4f9c,0xb0,0xd5,0x53,0x05,0x44,0x96,0xdb,0xe0);


MIDL_DEFINE_GUID(IID, IID_IMouse,0x10cd08d0,0xe8b8,0x4838,0xb1,0x0c,0x45,0xba,0x19,0x37,0x34,0xc1);


MIDL_DEFINE_GUID(IID, IID_IDisplaySourceBitmap,0x5094f67a,0x8084,0x11e9,0xb1,0x85,0xdb,0xe2,0x96,0xe5,0x47,0x99);


MIDL_DEFINE_GUID(IID, IID_IFramebuffer,0x1e8d3f27,0xb45c,0x48ae,0x8b,0x36,0xd3,0x5e,0x83,0xd2,0x07,0xaa);


MIDL_DEFINE_GUID(IID, IID_IFramebufferOverlay,0xaf398a9a,0x6b76,0x4805,0x8f,0xab,0x00,0xa9,0xdc,0xf4,0x73,0x2b);


MIDL_DEFINE_GUID(IID, IID_IGuestScreenInfo,0x6b2f98f8,0x9641,0x4397,0x85,0x4a,0x04,0x04,0x39,0xd0,0x11,0x4b);


MIDL_DEFINE_GUID(IID, IID_IDisplay,0x4680b2de,0x8690,0x11e9,0xb8,0x3d,0x57,0x19,0xe5,0x3c,0xf1,0xde);


MIDL_DEFINE_GUID(IID, IID_INetworkAdapter,0xe9a0c183,0x7071,0x4894,0x93,0xd6,0xdc,0xbe,0xc0,0x10,0xfa,0x91);


MIDL_DEFINE_GUID(IID, IID_ISerialPort,0x5587d0f6,0xa227,0x4f23,0x82,0x78,0x2f,0x67,0x5e,0xea,0x1b,0xb2);


MIDL_DEFINE_GUID(IID, IID_IParallelPort,0x788b87df,0x7708,0x444b,0x9e,0xef,0xc1,0x16,0xce,0x42,0x3d,0x39);


MIDL_DEFINE_GUID(IID, IID_IMachineDebugger,0x00ae6af4,0x00a7,0x4104,0x00,0x09,0x49,0xbc,0x00,0xb2,0xda,0x80);


MIDL_DEFINE_GUID(IID, IID_IUSBDeviceFilters,0x9709db9b,0x3346,0x49d6,0x8f,0x1c,0x41,0xb0,0xc4,0x78,0x4f,0xf2);


MIDL_DEFINE_GUID(IID, IID_IUSBController,0xee206a6e,0x7ff8,0x4a84,0xbd,0x34,0x0c,0x65,0x1e,0x11,0x8b,0xb5);


MIDL_DEFINE_GUID(IID, IID_IUSBDevice,0x6dc83c2c,0x81a9,0x4005,0x9d,0x52,0xfc,0x45,0xa7,0x8b,0xf3,0xf5);


MIDL_DEFINE_GUID(IID, IID_IUSBDeviceFilter,0x45587218,0x4289,0xef4e,0x8e,0x6a,0xe5,0xb0,0x78,0x16,0xb6,0x31);


MIDL_DEFINE_GUID(IID, IID_IHostUSBDevice,0xc19073dd,0xcc7b,0x431b,0x98,0xb2,0x95,0x1f,0xda,0x8e,0xab,0x89);


MIDL_DEFINE_GUID(IID, IID_IHostUSBDeviceFilter,0x01adb2d6,0xaedf,0x461c,0xbe,0x2c,0x99,0xe9,0x1b,0xda,0xd8,0xa1);


MIDL_DEFINE_GUID(IID, IID_IUSBProxyBackend,0xdfe56449,0x6989,0x4002,0x80,0xcf,0x36,0x07,0xf3,0x77,0xd4,0x0c);


MIDL_DEFINE_GUID(IID, IID_IAudioAdapter,0x5155bfd3,0x7ba7,0x45a8,0xb2,0x6d,0xc9,0x1a,0xe3,0x75,0x4e,0x37);


MIDL_DEFINE_GUID(IID, IID_IVRDEServer,0x08e25756,0x08a2,0x41af,0xa0,0x5f,0xd7,0xc6,0x61,0xab,0xae,0xbe);


MIDL_DEFINE_GUID(IID, IID_ISharedFolder,0x9622225a,0x5409,0x414b,0xbd,0x16,0x77,0xdf,0x7b,0xa3,0x45,0x1e);


MIDL_DEFINE_GUID(IID, IID_IInternalSessionControl,0xf4638054,0xf1f8,0x4590,0x94,0x1a,0xcd,0xb6,0x60,0x75,0xc5,0xbf);


MIDL_DEFINE_GUID(IID, IID_ISession,0xc0447716,0xff5a,0x4795,0xb5,0x7a,0xec,0xd5,0xff,0xfa,0x18,0xa4);


MIDL_DEFINE_GUID(IID, IID_IStorageController,0xddca7247,0xbf98,0x47fb,0xab,0x2f,0xb5,0x17,0x75,0x33,0xf4,0x93);


MIDL_DEFINE_GUID(IID, IID_IPerformanceMetric,0x81314d14,0xfd1c,0x411a,0x95,0xc5,0xe9,0xbb,0x14,0x14,0xe6,0x32);


MIDL_DEFINE_GUID(IID, IID_IPerformanceCollector,0xb14290ad,0xcd54,0x400c,0xb8,0x58,0x79,0x7b,0xcb,0x82,0x57,0x0e);


MIDL_DEFINE_GUID(IID, IID_INATEngine,0x8faef61e,0x6e15,0x4f71,0xa6,0xa5,0x94,0xe7,0x07,0xfa,0xfb,0xcc);


MIDL_DEFINE_GUID(IID, IID_IExtPackPlugIn,0x78861431,0xd545,0x44aa,0x80,0x13,0x18,0x1b,0x8c,0x28,0x85,0x54);


MIDL_DEFINE_GUID(IID, IID_IExtPackBase,0xf25aca3d,0x0b79,0x4350,0xbd,0xd9,0xa0,0x37,0x6c,0xd6,0xe6,0xe3);


MIDL_DEFINE_GUID(IID, IID_IExtPack,0x431685da,0x3618,0x4ebc,0xb0,0x38,0x83,0x3b,0xa8,0x29,0xb4,0xb2);


MIDL_DEFINE_GUID(IID, IID_IExtPackFile,0x41304f1b,0x7e72,0x4f34,0xb8,0xf6,0x68,0x27,0x85,0x62,0x0c,0x57);


MIDL_DEFINE_GUID(IID, IID_IExtPackManager,0x70401eef,0xc8e9,0x466b,0x96,0x60,0x45,0xcb,0x3e,0x99,0x79,0xe4);


MIDL_DEFINE_GUID(IID, IID_IBandwidthGroup,0x31587f93,0x2d12,0x4d7c,0xba,0x6d,0xce,0x51,0xd0,0xd5,0xb2,0x65);


MIDL_DEFINE_GUID(IID, IID_IBandwidthControl,0x48c7f4c0,0xc9d6,0x4742,0x95,0x7c,0xa6,0xfd,0x52,0xe8,0xc4,0xae);


MIDL_DEFINE_GUID(IID, IID_IVirtualBoxClient,0xd2937a8e,0xcb8d,0x4382,0x90,0xba,0xb7,0xda,0x78,0xa7,0x45,0x73);


MIDL_DEFINE_GUID(IID, IID_IEventSource,0x9b6e1aee,0x35f3,0x4f4d,0xb5,0xbb,0xed,0x0e,0xce,0xfd,0x85,0x38);


MIDL_DEFINE_GUID(IID, IID_IEventListener,0x67099191,0x32e7,0x4f6c,0x85,0xee,0x42,0x23,0x04,0xc7,0x1b,0x90);


MIDL_DEFINE_GUID(IID, IID_IEvent,0x0ca2adba,0x8f30,0x401b,0xa8,0xcd,0xfe,0x31,0xdb,0xe8,0x39,0xc0);


MIDL_DEFINE_GUID(IID, IID_IReusableEvent,0x69bfb134,0x80f6,0x4266,0x8e,0x20,0x16,0x37,0x1f,0x68,0xfa,0x25);


MIDL_DEFINE_GUID(IID, IID_IMachineEvent,0x92ed7b1a,0x0d96,0x40ed,0xae,0x46,0xa5,0x64,0xd4,0x84,0x32,0x5e);


MIDL_DEFINE_GUID(IID, IID_IMachineStateChangedEvent,0x5748F794,0x48DF,0x438D,0x85,0xEB,0x98,0xFF,0xD7,0x0D,0x18,0xC9);


MIDL_DEFINE_GUID(IID, IID_IMachineDataChangedEvent,0xabe94809,0x2e88,0x4436,0x83,0xd7,0x50,0xf3,0xe6,0x4d,0x05,0x03);


MIDL_DEFINE_GUID(IID, IID_IMediumRegisteredEvent,0x53fac49a,0xb7f1,0x4a5a,0xa4,0xef,0xa1,0x1d,0xd9,0xc2,0xa4,0x58);


MIDL_DEFINE_GUID(IID, IID_IMediumConfigChangedEvent,0xdd3e2654,0xa161,0x41f1,0xb5,0x83,0x48,0x92,0xf4,0xa9,0xd5,0xd5);


MIDL_DEFINE_GUID(IID, IID_IMachineRegisteredEvent,0xc354a762,0x3ff2,0x4f2e,0x8f,0x09,0x07,0x38,0x2e,0xe2,0x50,0x88);


MIDL_DEFINE_GUID(IID, IID_ISessionStateChangedEvent,0x714a3eef,0x799a,0x4489,0x86,0xcd,0xfe,0x8e,0x45,0xb2,0xff,0x8e);


MIDL_DEFINE_GUID(IID, IID_IGuestPropertyChangedEvent,0x3f63597a,0x26f1,0x4edb,0x8d,0xd2,0x6b,0xdd,0xd0,0x91,0x23,0x68);


MIDL_DEFINE_GUID(IID, IID_ISnapshotEvent,0x21637b0e,0x34b8,0x42d3,0xac,0xfb,0x7e,0x96,0xda,0xf7,0x7c,0x22);


MIDL_DEFINE_GUID(IID, IID_ISnapshotTakenEvent,0xd27c0b3d,0x6038,0x422c,0xb4,0x5e,0x6d,0x4a,0x05,0x03,0xd9,0xf1);


MIDL_DEFINE_GUID(IID, IID_ISnapshotDeletedEvent,0xc48f3401,0x4a9e,0x43f4,0xb7,0xa7,0x54,0xbd,0x28,0x5e,0x22,0xf4);


MIDL_DEFINE_GUID(IID, IID_ISnapshotRestoredEvent,0xf4d803b4,0x9b2d,0x4377,0xbf,0xe6,0x97,0x02,0xe8,0x81,0x51,0x6b);


MIDL_DEFINE_GUID(IID, IID_ISnapshotChangedEvent,0x07541941,0x8079,0x447a,0xa3,0x3e,0x47,0xa6,0x9c,0x79,0x80,0xdb);


MIDL_DEFINE_GUID(IID, IID_IMousePointerShapeChangedEvent,0xa6dcf6e8,0x416b,0x4181,0x8c,0x4a,0x45,0xec,0x95,0x17,0x7a,0xef);


MIDL_DEFINE_GUID(IID, IID_IMouseCapabilityChangedEvent,0x70e7779a,0xe64a,0x4908,0x80,0x4e,0x37,0x1c,0xad,0x23,0xa7,0x56);


MIDL_DEFINE_GUID(IID, IID_IKeyboardLedsChangedEvent,0x6DDEF35E,0x4737,0x457B,0x99,0xFC,0xBC,0x52,0xC8,0x51,0xA4,0x4F);


MIDL_DEFINE_GUID(IID, IID_IStateChangedEvent,0x4376693C,0xCF37,0x453B,0x92,0x89,0x3B,0x0F,0x52,0x1C,0xAF,0x27);


MIDL_DEFINE_GUID(IID, IID_IAdditionsStateChangedEvent,0xD70F7915,0xDA7C,0x44C8,0xA7,0xAC,0x9F,0x17,0x34,0x90,0x44,0x6A);


MIDL_DEFINE_GUID(IID, IID_INetworkAdapterChangedEvent,0x08889892,0x1EC6,0x4883,0x80,0x1D,0x77,0xF5,0x6C,0xFD,0x01,0x03);


MIDL_DEFINE_GUID(IID, IID_IAudioAdapterChangedEvent,0xD5ABC823,0x04D0,0x4DB6,0x8D,0x66,0xDC,0x2F,0x03,0x31,0x20,0xE1);


MIDL_DEFINE_GUID(IID, IID_ISerialPortChangedEvent,0x3BA329DC,0x659C,0x488B,0x83,0x5C,0x4E,0xCA,0x7A,0xE7,0x1C,0x6C);


MIDL_DEFINE_GUID(IID, IID_IParallelPortChangedEvent,0x813C99FC,0x9849,0x4F47,0x81,0x3E,0x24,0xA7,0x5D,0xC8,0x56,0x15);


MIDL_DEFINE_GUID(IID, IID_IStorageControllerChangedEvent,0x6BB335CC,0x1C58,0x440C,0xBB,0x7B,0x3A,0x13,0x97,0x28,0x4C,0x7B);


MIDL_DEFINE_GUID(IID, IID_IMediumChangedEvent,0x0FE2DA40,0x5637,0x472A,0x97,0x36,0x72,0x01,0x9E,0xAB,0xD7,0xDE);


MIDL_DEFINE_GUID(IID, IID_IClipboardModeChangedEvent,0xcac21692,0x7997,0x4595,0xa7,0x31,0x3a,0x50,0x9d,0xb6,0x04,0xe5);


MIDL_DEFINE_GUID(IID, IID_IClipboardFileTransferModeChangedEvent,0x00391758,0x00B1,0x4E9D,0x00,0x00,0x11,0xFA,0x00,0xF9,0xD5,0x83);


MIDL_DEFINE_GUID(IID, IID_IDnDModeChangedEvent,0xb55cf856,0x1f8b,0x4692,0xab,0xb4,0x46,0x24,0x29,0xfa,0xe5,0xe9);


MIDL_DEFINE_GUID(IID, IID_ICPUChangedEvent,0x4da2dec7,0x71b2,0x4817,0x9a,0x64,0x4e,0xd1,0x2c,0x17,0x38,0x8e);


MIDL_DEFINE_GUID(IID, IID_ICPUExecutionCapChangedEvent,0xdfa7e4f5,0xb4a4,0x44ce,0x85,0xa8,0x12,0x7a,0xc5,0xeb,0x59,0xdc);


MIDL_DEFINE_GUID(IID, IID_IGuestKeyboardEvent,0x88394258,0x7006,0x40d4,0xb3,0x39,0x47,0x2e,0xe3,0x80,0x18,0x44);


MIDL_DEFINE_GUID(IID, IID_IGuestMouseEvent,0x179f8647,0x319c,0x4e7e,0x81,0x50,0xc5,0x83,0x7b,0xd2,0x65,0xf6);


MIDL_DEFINE_GUID(IID, IID_IGuestMultiTouchEvent,0xbe8a0eb5,0xf4f4,0x4dd0,0x9d,0x30,0xc8,0x9b,0x87,0x32,0x47,0xec);


MIDL_DEFINE_GUID(IID, IID_IGuestSessionEvent,0xb9acd33f,0x647d,0x45ac,0x8f,0xe9,0xf4,0x9b,0x31,0x83,0xba,0x37);


MIDL_DEFINE_GUID(IID, IID_IGuestSessionStateChangedEvent,0x327e3c00,0xee61,0x462f,0xae,0xd3,0x0d,0xff,0x6c,0xbf,0x99,0x04);


MIDL_DEFINE_GUID(IID, IID_IGuestSessionRegisteredEvent,0xb79de686,0xeabd,0x4fa6,0x96,0x0a,0xf1,0x75,0x6c,0x99,0xea,0x1c);


MIDL_DEFINE_GUID(IID, IID_IGuestProcessEvent,0x2405f0e5,0x6588,0x40a3,0x9b,0x0a,0x68,0xc0,0x5b,0xa5,0x2c,0x4b);


MIDL_DEFINE_GUID(IID, IID_IGuestProcessRegisteredEvent,0x1d89e2b3,0xc6ea,0x45b6,0x9d,0x43,0xdc,0x6f,0x70,0xcc,0x9f,0x02);


MIDL_DEFINE_GUID(IID, IID_IGuestProcessStateChangedEvent,0xc365fb7b,0x4430,0x499f,0x92,0xc8,0x8b,0xed,0x81,0x4a,0x56,0x7a);


MIDL_DEFINE_GUID(IID, IID_IGuestProcessIOEvent,0x9ea9227c,0xe9bb,0x49b3,0xbf,0xc7,0xc5,0x17,0x1e,0x93,0xef,0x38);


MIDL_DEFINE_GUID(IID, IID_IGuestProcessInputNotifyEvent,0x0de887f2,0xb7db,0x4616,0xaa,0xc6,0xcf,0xb9,0x4d,0x89,0xba,0x78);


MIDL_DEFINE_GUID(IID, IID_IGuestProcessOutputEvent,0xd3d5f1ee,0xbcb2,0x4905,0xa7,0xab,0xcc,0x85,0x44,0x8a,0x74,0x2b);


MIDL_DEFINE_GUID(IID, IID_IGuestFileEvent,0xc8adb7b0,0x057d,0x4391,0xb9,0x28,0xf1,0x4b,0x06,0xb7,0x10,0xc5);


MIDL_DEFINE_GUID(IID, IID_IGuestFileRegisteredEvent,0xd0d93830,0x70a2,0x487e,0x89,0x5e,0xd3,0xfc,0x96,0x79,0xf7,0xb3);


MIDL_DEFINE_GUID(IID, IID_IGuestFileStateChangedEvent,0xd37fe88f,0x0979,0x486c,0xba,0xa1,0x3a,0xbb,0x14,0x4d,0xc8,0x2d);


MIDL_DEFINE_GUID(IID, IID_IGuestFileIOEvent,0xb5191a7c,0x9536,0x4ef8,0x82,0x0e,0x3b,0x0e,0x17,0xe5,0xbb,0xc8);


MIDL_DEFINE_GUID(IID, IID_IGuestFileOffsetChangedEvent,0xe8f79a21,0x1207,0x4179,0x94,0xcf,0xca,0x25,0x00,0x36,0x30,0x8f);


MIDL_DEFINE_GUID(IID, IID_IGuestFileSizeChangedEvent,0xd78374e9,0x486e,0x472f,0x48,0x1b,0x96,0x97,0x46,0xaf,0x24,0x80);


MIDL_DEFINE_GUID(IID, IID_IGuestFileReadEvent,0x4ee3cbcb,0x486f,0x40db,0x91,0x50,0xde,0xee,0x3f,0xd2,0x41,0x89);


MIDL_DEFINE_GUID(IID, IID_IGuestFileWriteEvent,0xe062a915,0x3cf5,0x4c0a,0xbc,0x90,0x9b,0x8d,0x4c,0xc9,0x4d,0x89);


MIDL_DEFINE_GUID(IID, IID_IVRDEServerChangedEvent,0xa06fd66a,0x3188,0x4c8c,0x87,0x56,0x13,0x95,0xe8,0xcb,0x69,0x1c);


MIDL_DEFINE_GUID(IID, IID_IVRDEServerInfoChangedEvent,0xdd6a1080,0xe1b7,0x4339,0xa5,0x49,0xf0,0x87,0x81,0x15,0x59,0x6e);


MIDL_DEFINE_GUID(IID, IID_IRecordingChangedEvent,0xB5DDB370,0x08A7,0x4C8F,0x91,0x0D,0x47,0xAA,0xBD,0x67,0x25,0x3A);


MIDL_DEFINE_GUID(IID, IID_IUSBControllerChangedEvent,0x93BADC0C,0x61D9,0x4940,0xA0,0x84,0xE6,0xBB,0x29,0xAF,0x3D,0x83);


MIDL_DEFINE_GUID(IID, IID_IUSBDeviceStateChangedEvent,0x806da61b,0x6679,0x422a,0xb6,0x29,0x51,0xb0,0x6b,0x0c,0x6d,0x93);


MIDL_DEFINE_GUID(IID, IID_ISharedFolderChangedEvent,0xB66349B5,0x3534,0x4239,0xB2,0xDE,0x8E,0x15,0x35,0xD9,0x4C,0x0B);


MIDL_DEFINE_GUID(IID, IID_IRuntimeErrorEvent,0x883DD18B,0x0721,0x4CDE,0x86,0x7C,0x1A,0x82,0xAB,0xAF,0x91,0x4C);


MIDL_DEFINE_GUID(IID, IID_IEventSourceChangedEvent,0xe7932cb8,0xf6d4,0x4ab6,0x9c,0xbf,0x55,0x8e,0xb8,0x95,0x9a,0x6a);


MIDL_DEFINE_GUID(IID, IID_IExtraDataChangedEvent,0x024F00CE,0x6E0B,0x492A,0xA8,0xD0,0x96,0x84,0x72,0xA9,0x4D,0xC7);


MIDL_DEFINE_GUID(IID, IID_IVetoEvent,0x7c5e945f,0x2354,0x4267,0x88,0x3f,0x2f,0x41,0x7d,0x21,0x65,0x19);


MIDL_DEFINE_GUID(IID, IID_IExtraDataCanChangeEvent,0x245d88bd,0x800a,0x40f8,0x87,0xa6,0x17,0x0d,0x02,0x24,0x9a,0x55);


MIDL_DEFINE_GUID(IID, IID_ICanShowWindowEvent,0xadf292b0,0x92c9,0x4a77,0x9d,0x35,0xe0,0x58,0xb3,0x9f,0xe0,0xb9);


MIDL_DEFINE_GUID(IID, IID_IShowWindowEvent,0xB0A0904D,0x2F05,0x4D28,0x85,0x5F,0x48,0x8F,0x96,0xBA,0xD2,0xB2);


MIDL_DEFINE_GUID(IID, IID_INATRedirectEvent,0x24eef068,0xc380,0x4510,0xbc,0x7c,0x19,0x31,0x4a,0x73,0x52,0xf1);


MIDL_DEFINE_GUID(IID, IID_IHostPCIDevicePlugEvent,0xa0bad6df,0xd612,0x47d3,0x89,0xd4,0xdb,0x39,0x92,0x53,0x39,0x48);


MIDL_DEFINE_GUID(IID, IID_IVBoxSVCAvailabilityChangedEvent,0x97c78fcd,0xd4fc,0x485f,0x86,0x13,0x5a,0xf8,0x8b,0xfc,0xfc,0xdc);


MIDL_DEFINE_GUID(IID, IID_IBandwidthGroupChangedEvent,0x334df94a,0x7556,0x4cbc,0x8c,0x04,0x04,0x30,0x96,0xb0,0x2d,0x82);


MIDL_DEFINE_GUID(IID, IID_IGuestMonitorChangedEvent,0x0f7b8a22,0xc71f,0x4a36,0x8e,0x5f,0xa7,0x7d,0x01,0xd7,0x60,0x90);


MIDL_DEFINE_GUID(IID, IID_IGuestUserStateChangedEvent,0x39b4e759,0x1ec0,0x4c0f,0x85,0x7f,0xfb,0xe2,0xa7,0x37,0xa2,0x56);


MIDL_DEFINE_GUID(IID, IID_IStorageDeviceChangedEvent,0x232e9151,0xae84,0x4b8e,0xb0,0xf3,0x5c,0x20,0xc3,0x5c,0xaa,0xc9);


MIDL_DEFINE_GUID(IID, IID_INATNetworkChangedEvent,0x101ae042,0x1a29,0x4a19,0x92,0xcf,0x02,0x28,0x57,0x73,0xf3,0xb5);


MIDL_DEFINE_GUID(IID, IID_INATNetworkStartStopEvent,0x269d8f6b,0xfa1e,0x4cee,0x91,0xc7,0x6d,0x84,0x96,0xbe,0xa3,0xc1);


MIDL_DEFINE_GUID(IID, IID_INATNetworkAlterEvent,0xd947adf5,0x4022,0xdc80,0x55,0x35,0x6f,0xb1,0x16,0x81,0x56,0x04);


MIDL_DEFINE_GUID(IID, IID_INATNetworkCreationDeletionEvent,0x8d984a7e,0xb855,0x40b8,0xab,0x0c,0x44,0xd3,0x51,0x5b,0x45,0x28);


MIDL_DEFINE_GUID(IID, IID_INATNetworkSettingEvent,0x9db3a9e6,0x7f29,0x4aae,0xa6,0x27,0x5a,0x28,0x2c,0x83,0x09,0x2c);


MIDL_DEFINE_GUID(IID, IID_INATNetworkPortForwardEvent,0x2514881b,0x23d0,0x430a,0xa7,0xff,0x7e,0xd7,0xf0,0x55,0x34,0xbc);


MIDL_DEFINE_GUID(IID, IID_IHostNameResolutionConfigurationChangeEvent,0xf9b9e1cf,0xcb63,0x47a1,0x84,0xfb,0x02,0xc4,0x89,0x4b,0x89,0xa9);


MIDL_DEFINE_GUID(IID, IID_IProgressEvent,0xdaaf9016,0x1f04,0x4191,0xaa,0x2f,0x1f,0xac,0x96,0x46,0xae,0x4c);


MIDL_DEFINE_GUID(IID, IID_IProgressPercentageChangedEvent,0xf05d7e60,0x1bcf,0x4218,0x98,0x07,0x04,0xe0,0x36,0xcc,0x70,0xf1);


MIDL_DEFINE_GUID(IID, IID_IProgressTaskCompletedEvent,0xa5bbdb7d,0x8ce7,0x469f,0xa4,0xc2,0x64,0x76,0xf5,0x81,0xff,0x72);


MIDL_DEFINE_GUID(IID, IID_ICursorPositionChangedEvent,0x6f302674,0xc927,0x11e7,0xb7,0x88,0x33,0xc2,0x48,0xe7,0x1f,0xc7);


MIDL_DEFINE_GUID(IID, IID_IGuestAdditionsStatusChangedEvent,0xa443da5b,0xaa82,0x4720,0xbc,0x84,0xbd,0x09,0x7b,0x2b,0x13,0xb8);


MIDL_DEFINE_GUID(IID, IID_IGuestMonitorInfoChangedEvent,0x0b3cdeb2,0x808e,0x11e9,0xb7,0x73,0x13,0x3d,0x93,0x30,0xf8,0x49);


MIDL_DEFINE_GUID(IID, IID_IStringArray,0x3890b2c8,0x604d,0x11e9,0x92,0xd3,0x53,0xcb,0x47,0x3d,0xb9,0xfb);


MIDL_DEFINE_GUID(IID, IID_IFormValue,0x67c50afe,0x3e78,0x11e9,0xb2,0x5e,0x77,0x68,0xf8,0x0c,0x0e,0x07);


MIDL_DEFINE_GUID(IID, IID_IBooleanFormValue,0x4f4adcf6,0x3e87,0x11e9,0x8a,0xf2,0x57,0x6e,0x84,0x22,0x39,0x53);


MIDL_DEFINE_GUID(IID, IID_IRangedIntegerFormValue,0xb31c4052,0x7bdc,0x11e9,0x8b,0xc2,0x8f,0xfd,0xb8,0xb1,0x92,0x19);


MIDL_DEFINE_GUID(IID, IID_IStringFormValue,0xcb6f0f2c,0x8384,0x11e9,0x92,0x1d,0x8b,0x98,0x4e,0x28,0xa6,0x86);


MIDL_DEFINE_GUID(IID, IID_IChoiceFormValue,0x7191cf38,0x3e8a,0x11e9,0x82,0x5c,0xab,0x7b,0x2c,0xab,0xce,0x23);


MIDL_DEFINE_GUID(IID, IID_IForm,0xd05c91e2,0x3e8a,0x11e9,0x80,0x82,0xdb,0x8a,0xe4,0x79,0xef,0x87);


MIDL_DEFINE_GUID(IID, IID_IVirtualSystemDescriptionForm,0x14c2db8a,0x3ee4,0x11e9,0xb8,0x72,0xcb,0x94,0x47,0xaa,0xd9,0x65);


MIDL_DEFINE_GUID(IID, IID_ICloudNetworkGatewayInfo,0x89a63ace,0x0c65,0x11ea,0xad,0x23,0x0f,0xf2,0x57,0xc7,0x1a,0x7f);


MIDL_DEFINE_GUID(IID, IID_ICloudNetworkEnvironmentInfo,0x181dfb55,0x394d,0x44d3,0x9e,0xdb,0xaf,0x2c,0x44,0x72,0xc4,0x0a);


MIDL_DEFINE_GUID(IID, IID_ICloudClient,0x435b66a2,0x0c60,0x11ea,0xa0,0xea,0x07,0xeb,0x0d,0x1c,0x4e,0xad);


MIDL_DEFINE_GUID(IID, IID_ICloudProfile,0xb1d978b8,0xf7b7,0x4b05,0x90,0x0e,0x2a,0x92,0x53,0xc0,0x0f,0x51);


MIDL_DEFINE_GUID(IID, IID_ICloudProvider,0x22363cfc,0x07da,0x41ec,0xac,0x4a,0x3d,0xd9,0x9d,0xb3,0x55,0x94);


MIDL_DEFINE_GUID(IID, IID_ICloudProviderManager,0x9128800f,0x762e,0x4120,0x87,0x1c,0xa2,0x01,0x42,0x34,0xa6,0x07);


MIDL_DEFINE_GUID(IID, LIBID_VirtualBox,0xd7569351,0x1750,0x46f0,0x93,0x6e,0xbd,0x12,0x7d,0x5b,0xc2,0x64);


MIDL_DEFINE_GUID(CLSID, CLSID_VirtualBox,0xB1A7A4F2,0x47B9,0x4A1E,0x82,0xB2,0x07,0xCC,0xD5,0x32,0x3C,0x3F);


MIDL_DEFINE_GUID(CLSID, CLSID_VirtualBoxClient,0xdd3fc71d,0x26c0,0x4fe1,0xbf,0x6f,0x67,0xf6,0x33,0x26,0x5b,0xba);


MIDL_DEFINE_GUID(CLSID, CLSID_Session,0x3C02F46D,0xC9D2,0x4F11,0xA3,0x84,0x53,0xF0,0xCF,0x91,0x72,0x14);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif




#pragma warning(pop)

