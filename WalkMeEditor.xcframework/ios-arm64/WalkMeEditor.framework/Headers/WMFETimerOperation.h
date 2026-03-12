//
//  WMFETimerOperation.h
//  WalkMeSDKCommon
//
//  Created by Haim Ben Chimol on 05/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMFEBaseOperation.h"

NS_ASSUME_NONNULL_BEGIN

@class WMFETimerOperation, WMFEConfiguration;

@protocol WMFETimerOperationDelegate <WMFEBaseOperationDelegate>

@optional
- (void)feOperation:(WMFETimerOperation*)feOperation didFindElementTemporaryFail:(NSUInteger)retriesLeft;

@end

@interface WMFETimerOperation : WMFEBaseOperation

@property (nonatomic,weak) id<WMFETimerOperationDelegate> delegate;
@property (nonatomic,readonly) WMFEBaseOperation *operation;

- (instancetype)initWithOperation:(WMFEBaseOperation*)operation retries:(NSUInteger)retries retryInterval:(NSTimeInterval)retryInterval;

// Helper method to avoid the hassle of configuring an operation
+ (instancetype)operationWithElements:(NSDictionary<NSString*,id<WMElementModel>>*)elements config:(WMFEConfiguration*)config retries:(NSUInteger)retries retryInterval:(NSTimeInterval)retryInterval;

@end

NS_ASSUME_NONNULL_END
