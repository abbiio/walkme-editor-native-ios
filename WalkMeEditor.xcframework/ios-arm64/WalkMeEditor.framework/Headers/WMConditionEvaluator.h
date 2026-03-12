//
//  WMConditionTreeEvaluator.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 14/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMConditionTree.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^ConditionEvalBlock)(BOOL conditionResult);

@interface WMConditionEvaluator : NSObject

+ (WMConditionEvaluator*)sharedInstance;

- (void)trackCondition:(id<WMConditionableObject>)condition evalBlock:(ConditionEvalBlock)evalBlock;
- (void)untrackCondition:(id<WMConditionableObject>)condition;

@end

NS_ASSUME_NONNULL_END
