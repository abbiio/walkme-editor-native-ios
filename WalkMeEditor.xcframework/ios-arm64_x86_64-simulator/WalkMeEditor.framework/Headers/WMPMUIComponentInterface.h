//
//  WMPMUIComponentInterface.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 10/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#ifndef WMPMUIComponentInterface_h
#define WMPMUIComponentInterface_h

#import "WMPMUIVisitorInterface.h"

@protocol WMPMUIComponentInterface <NSObject>

@required
- (void)accept:(id<WMPMUIVisitorInterface>)visitor;

@end

#endif /* WMPMUIComponentInterface_h */
