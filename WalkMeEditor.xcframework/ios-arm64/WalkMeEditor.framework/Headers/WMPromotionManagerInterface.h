//
//  WMPromotionManagerInterface.h
//  WalkMeSDKCommon
//
//  Created by Haim Ben Chimol on 08/11/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#ifndef WMPromotionManagerInterface_h
#define WMPromotionManagerInterface_h

@class WMPromotionsDataObject;
@protocol WMPromotionManager <NSObject>

@property (nonatomic,readonly) BOOL isReady;
@property (nonatomic,readonly, nullable) NSError* isReadyError;
- (void)setupWithPromotions:(__kindof WMPromotionsDataObject*_Nonnull)promotions;
- (void)clear;

@end

#endif /* WMPromotionManagerInterface_h */
