//
//  WMConditionNodeExecuter.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 03/10/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WMConditionNodeExecuter, WMConditionNode;

@protocol WMConditionNodeExecuter <NSObject>

- (BOOL)eval;
+ (nullable __kindof  WMConditionNodeExecuter*)concreteExecuterForNode:(WMConditionNode*)conditionNode;

@end

@interface WMConditionNodeExecuter : NSObject <WMConditionNodeExecuter>

@property (nonatomic, readonly) WMConditionNode *conditionNode;

- (BOOL)eval;
- (void)asyncEval:(void (^)(BOOL result))completion;

- (instancetype)initWithConditionNode:(WMConditionNode *)conditionNode;
+ (nullable __kindof WMConditionNodeExecuter *)createExecuterForNode:(WMConditionNode *)conditionNode;

@end

NS_ASSUME_NONNULL_END
