//
//  WMPromotionLoaderInterface.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 18/10/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#ifndef WMPromotionLoaderInterface_h
#define WMPromotionLoaderInterface_h

@class WMPromotionLoader;

@protocol WMPromotionLoaderProtocol <NSObject>

@required
- (void)load:(void (^)(void))completion;

@end

#endif /* WMPromotionLoaderInterface_h */
