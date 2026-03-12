//
//  WMBusinessSolutionObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 20/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMBasicPromotionObject.h"

@class WMFlowObject;

@interface WMBusinessSolutionObject : WMBasicPromotionObject

@property (nonatomic, strong, readonly) WMFlowObject *flow;
@property (nonatomic, strong, readonly) NSDictionary *customSettings;

@end
