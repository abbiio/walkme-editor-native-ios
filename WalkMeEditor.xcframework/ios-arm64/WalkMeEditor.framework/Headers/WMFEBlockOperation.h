//
//  WMFEBlockOperation.h
//  WalkMeSDKCommon
//
//  Created by Haim Ben Chimol on 05/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMFEBaseOperation.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^WMFEBlockOperationCompletion)(NSDictionary<NSString*,id<WMFEResultInterface>>* result);
typedef void (^WMFEBlockOperationError)(NSError *_Nullable error);

@interface WMFEBlockOperation : WMFEBaseOperation

@property (nonatomic,readonly) WMFEBaseOperation *operation;

- (instancetype)initWithUnderlyingOperation:(WMFEBaseOperation*)operation completion:(WMFEBlockOperationCompletion)completion error:(WMFEBlockOperationError)error;

// Helpers to avoid the hassle of creating an underlying operation
+ (instancetype)operationWithElements:(NSDictionary<NSString*,id<WMElementModel>>*)elements
                               config:(WMFEConfiguration*)config
                           completion:(WMFEBlockOperationCompletion _Nullable)completion
                                error:(WMFEBlockOperationError _Nullable)error;

+ (instancetype)matchOperation:(UIView*)view
                   pointInView:(CGPoint)pointInView
                 pointInWindow:(CGPoint)pointInWindow
                      elements:(NSDictionary<NSString*,id<WMElementModel>>*)elements
                        config:(WMFEConfiguration*)config
                    completion:(WMFEBlockOperationCompletion _Nullable)completion
                         error:(WMFEBlockOperationError _Nullable)error;

@end

NS_ASSUME_NONNULL_END
