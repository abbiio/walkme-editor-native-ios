//
//  WMFEBatchOperation.h
//  WalkMeSDKCommon
//
//  Created by Haim Ben Chimol on 06/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMFEBaseOperation.h"

NS_ASSUME_NONNULL_BEGIN

@class WMFEBatchOperation;
@protocol WMFEBatchOperationDelegate <WMFEBaseOperationDelegate>

- (void)feOperation:(WMFEBatchOperation*)feOperation willStartBatchOperationWithOperations:(NSArray<WMFEBaseOperation*>*)operations;
- (void)feOperation:(WMFEBatchOperation*)feOperation didStartBatchOperationWithOperations:(NSArray<WMFEBaseOperation*>*)operations;
- (void)feOperation:(WMFEBatchOperation*)feOperation didFinishBatchOperationWith:(NSArray<WMFEBaseOperation*>*)successOperations failedOperations:(NSArray<WMFEBaseOperation*>*)failedOperations;

// Called on each operaiton in the batch operations array
- (void)feOperation:(WMFEBatchOperation*)feOperation didOperationSuccess:(WMFEBaseOperation*)baseOperation result:(NSDictionary<NSString*,id<WMFEResultInterface>>*)result;
- (void)feOperation:(WMFEBatchOperation*)feOperation didOperationFail:(WMFEBaseOperation*)baseOperation error:(NSError*)error;

@end

@interface WMFEBatchOperation : WMFEBaseOperation

@property (nonatomic,weak) id<WMFEBatchOperationDelegate> delegate;
@property (nonatomic,readonly) NSArray<WMFEBaseOperation*> *operations;

- (instancetype)initWithConfig:(WMFEConfiguration*)config operations:(NSArray<WMFEBaseOperation*>*)operations;

// Helper methods to avoid the hassle of configuring an operation
+ (instancetype)operationWithElements:(NSDictionary<NSString*,id<WMElementModel>>*)elements config:(WMFEConfiguration*)config;
+ (instancetype)matchOperation:(UIView*)view
                   pointInView:(CGPoint)pointInView
                 pointInWindow:(CGPoint)pointInWindow
                      elements:(NSDictionary<NSString*,id<WMElementModel>>*)elements
                        config:(WMFEConfiguration*)config;

@end

NS_ASSUME_NONNULL_END
