
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCustomComponentsSpec.h"

@interface CustomComponents : NSObject <NativeCustomComponentsSpec>
#else
#import <React/RCTBridgeModule.h>

@interface CustomComponents : NSObject <RCTBridgeModule>
#endif

@end
