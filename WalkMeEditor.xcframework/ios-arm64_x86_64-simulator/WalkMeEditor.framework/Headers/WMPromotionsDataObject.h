//
//  WMPromotionsDataObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 19/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

@class WMBusinessSolutionObject, WMShoutOutObject, WMSiteConfig;

typedef NS_ENUM(NSInteger, WMPromotionRefreshPolicy) {
    WMPromotionRefreshPolicyWaitForRestart = 0,
    WMPromotionRefreshPolicyImmediate = 1
};

@protocol WMPromotionsDataObject <NSObject>
@end

@interface WMPromotionsDataObject : WMObject <WMPromotionsDataObject>

+ (WMSiteConfig*)siteConfigFrom:(NSDictionary*)json;
+ (WMPromotionRefreshPolicy)extractPromotionRefreshPolicy:(NSDictionary*)json;

@property (readonly,nonatomic,strong) NSArray<WMBusinessSolutionObject*> *businessSolutions;
@property (readonly,nonatomic,strong) NSArray<WMShoutOutObject*> *shoutOuts;
@property (readonly,nonatomic,assign) WMPromotionRefreshPolicy promotionRefreshPolicy;
@property (readonly, nonatomic, strong) WMSiteConfig * siteConfig;

@end
