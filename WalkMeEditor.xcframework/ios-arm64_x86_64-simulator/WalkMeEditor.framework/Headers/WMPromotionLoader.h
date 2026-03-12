//
//  WMPromotionLoader.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 04/10/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMPromotionLoaderInterface.h"
#import "WMPromotionLoadableInterface.h"

@class WMBasicPromotionObject;

@interface WMPromotionLoader : NSObject <WMPromotionLoaderProtocol>

@property (nonatomic, strong, readonly) id<WMPromotionLoadable> promotion;

- (instancetype)initWithPromotion:(id<WMPromotionLoadable>)promotion;

@end
