//
//  WMPowerUserPromotionsVC.h
//  WalkMeSDK
//
//  Created by Or Elmaliah on 18/09/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import "WMPowerUserListVC.h"

@class WMBasicPromotionObject, WMPowerUserPromotionsVC, WMPMTrackedEventObject, WMCampaignLabelObject;

typedef NS_ENUM(NSInteger, WMPowerUserPromotionsVCType) {
    WMPowerUserPromotionsVCTypePreview,
    WMPowerUserPromotionsVCTypeSimulate
};

typedef NS_ENUM(NSInteger, WMPowerUserSimulateTabType) {
    WMPowerUserSimulateTabTypeCampaigns,
    WMPowerUserSimulateTabTypeGoals
};

@protocol WMPowerUserPromotionsVCDelegate <NSObject>

@optional
- (void)wmPowerUserPromotionsVC:(WMPowerUserPromotionsVC *)wmPowerUserPromotionsVC didSelectPromotion:(WMBasicPromotionObject *)promotion;
- (void)wmPowerUserPromotionsVC:(WMPowerUserPromotionsVC *)wmPowerUserPromotionsVC didSelectPromotionsAndGoalsIds:(NSMutableDictionary<NSString *,NSMutableArray *> *)chosenPromotionsAndGoalsIds;
- (void)wmPowerUserPromotionsVCDidDismissed:(WMPowerUserPromotionsVC *)wmPowerUserPromotionsVC;

@end

@interface WMPowerUserPromotionsVC : WMPowerUserListVC

@property (nonatomic, weak) id<WMPowerUserPromotionsVCDelegate> delegate;
@property (nonatomic, readonly) WMPowerUserPromotionsVCType type;

- (instancetype)initWithType:(WMPowerUserPromotionsVCType)type andCampaignLabels:(NSDictionary<NSString*, WMCampaignLabelObject *> *)campaignLabels;
- (void)setPromotions:(NSArray<WMBasicPromotionObject *> *)promotions andGoals:(NSArray<WMPMTrackedEventObject *> *)goals;

@end
