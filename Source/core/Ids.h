#pragma once

enum IDS {
    ID_UNKNOWN = 0x00000000,
    ID_REMOTEPROCESS = 0x00000001,
    ID_REMOTEPROCESS_NOTIFICATION = 0x00000002,
    ID_TRACEITERATOR = 0x00000003,
    ID_TRACECONTROLLER = 0x00000004,
    ID_RPC_STRINGITERATOR = 0x00000005,

    ID_ACCESSOROCDM = 0x00000010,
    ID_ACCESSOROCDM_NOTIFICATION = 0x00000011,
    ID_SESSION = 0x00000012,
    ID_SESSION_CALLBACK = 0x00000013,

    ID_PLAYER = 0x00000015,
    ID_STREAM = 0x00000016,
    ID_CALLBACK = 0x00000017,
    ID_CONTROL = 0x00000018,
    ID_CONTROL_GEOMETRY = 0x00000019,
    ID_CONTROL_CALLBACK = 0x0000001A,

    ID_PLUGIN = 0x00000020,
    ID_PLUGIN_NOTIFICATION = 0x00000021,
    ID_PLUGINEXTENDED = 0x00000022,
    ID_WEB = 0x00000023,
    ID_WEBSOCKET = 0x00000024,
    ID_TEXTSOCKET = 0x00000025,
    ID_CHANNEL = 0x00000026,
    ID_SECURITY = 0x00000027,

    ID_STRINGITERATOR = 0x00000027,
    ID_VALUEITERATOR = 0x00000028,
    ID_SHELL = 0x00000029,
    ID_STATECONTROL = 0x0000002A,
    ID_STATECONTROL_NOTIFICATION = 0x0000002B,
    ID_SUBSYSTEM = 0x0000002C,
    ID_SUBSYSTEM_NOTIFICATION = 0x0000002D,
    ID_SUBSYSTEM_INTERNET = 0x0000002E,
    ID_SUBSYSTEM_LOCATION = 0x0000002F,
    ID_SUBSYSTEM_IDENTIFIER = 0x00000030,
    ID_SUBSYSTEM_TIME = 0x00000031,

    ID_BROWSER = 0x00000040,
    ID_BROWSER_NOTIFICATION = 0x00000041,
    ID_POWER = 0x00000042,
    ID_PLAYGIGA = 0x00000043,
    ID_COMMAND = 0x00000044,
    ID_COMMAND_REGISTRATION = 0x00000045,
    ID_COMPOSITION = 0x00000046,
    ID_COMPOSITION_CLIENT = 0x00000047,
    ID_COMPOSITION_NOTIFICATION = 0x00000048,
    ID_DICTIONARY = 0x00000049,
    ID_DICTIONARY_NOTIFICATION = 0x0000004A,
    ID_DICTIONARY_ITERATOR = 0x0000004B,
    ID_EXTERNAL = 0x0000004C,
    ID_EXTERNAL_NOTIFICATION = 0x0000004D,
    ID_EXTERNAL_FACTORY = 0x0000004E,
    ID_EXTERNAL_FACTORY_NOTIFICATION = 0x0000004F,
    ID_KEYHANDLER = 0x00000050,
    ID_KEYPRODUCER = 0x00000051,
    ID_MEMORY = 0x00000052,
    ID_NETFLIX = 0x00000053,
    ID_NETFLIX_NOTIFICATION = 0x00000054,
    ID_CONTENTDECRYPTION = 0x00000055,
    ID_PROVISIONING = 0x00000056,
    ID_PROVISIONING_NOTIFICATION = 0x00000057,

    ID_SWITCHBOARD = 0x0000005A,
    ID_SWITCHBOARD_NOTIFICATION = 0x0000005B,
    ID_TIMESYNC = 0x0000005C,
    ID_TIMESYNC_NOTIFICATION = 0x0000005D,
    ID_IPNETWORK = 0x0000005E,
    ID_IPNETWORK_DNSSERVER = 0x0000005F,

    ID_GUIDE = 0x00000061,
    ID_GUIDE_NOTIFICATION = 0x00000062,
    ID_VOICEHANDLER = 0x00000063,
    ID_VOICEPRODUCER = 0x00000064,
    ID_WEBDRIVER = 0x00000065,
    ID_WEBSERVER = 0x00000066,
    ID_STREAMING = 0x00000067,
    ID_STREAMING_NOTIFICATION = 0x00000068,
    ID_CAPTURE = 0x00000069,
    ID_RPCLINK_NOTIFICATION = 0x0000006A,
    ID_RPCLINK = 0x0000006B,
    ID_AVNCLIENT = 0x0000006C,

    ID_POWER_NOTIFICATION = 0x0000006E,

    ID_BLUETOOTH = 0x00000070,
    ID_RTSPCLIENT= 0x00000071,

    ID_BROWSER_METADATA = 0x00000078,

    ID_BLUETOOTH_DEVICE = 0x0000007D,
    ID_BLUETOOTH_DEVICE_ITERATOR = 0x0000007E,
    ID_BLUETOOTH_NOTIFICATION = 0x0000007F,
    ID_SYSTEMCOMMAND = 0x00000082,
};
