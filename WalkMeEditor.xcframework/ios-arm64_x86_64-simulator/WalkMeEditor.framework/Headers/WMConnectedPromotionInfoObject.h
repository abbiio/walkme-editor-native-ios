//
//  WMConnectedPromotionInfoObject.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 22/09/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WMConnectedPromotionInfoObject : NSObject

@property (nonatomic, strong) NSString *connectingPromoName;
@property (nonatomic, strong) NSString *connectedPromoName;
@property (nonatomic, strong) NSNumber *currStepId;
@property (nonatomic, assign) BOOL isConnected;


@end

NS_ASSUME_NONNULL_END
