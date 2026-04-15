#import <Flutter/Flutter.h>
#import <CoreBluetooth/CoreBluetooth.h>
// GSDK is a vendored non-modular framework; the diagnostic push/pop lets the
// plugin's framework module verification pass in strict Xcode setups without
// requiring consumers to add CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES
// to their Podfile.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#import <GSDK/BLEConnecter.h>
#pragma clang diagnostic pop

@interface BluetoothPrintPlusPlugin : NSObject<FlutterPlugin>

@property(nonatomic,copy) ConnectDeviceState state;

@end

@interface BluetoothPrintStreamHandler : NSObject<FlutterStreamHandler>

@property FlutterEventSink sink;

@end
