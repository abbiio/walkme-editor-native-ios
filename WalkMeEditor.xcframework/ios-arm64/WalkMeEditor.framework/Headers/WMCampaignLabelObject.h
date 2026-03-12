//
//  WMCampaignLabelObject.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 17/03/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMCampaignLabelObject : WMObject <WMSerializationProtocol>

@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *color;

@end

NS_ASSUME_NONNULL_END
