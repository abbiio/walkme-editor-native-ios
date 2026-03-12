//
//  WMConditionTree.h
//  WalkMeSDK
//
//  Created by Yair Barak on 19/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

@class WMConditionTree, WMConditionNode;

@protocol WMConditionableObject <NSObject>

@required
@property (nonatomic,readonly) WMConditionTree *conditionTree;

@optional
@property (nonatomic,readonly) BOOL stopOnTrue; // Stop evaluating the condition once it becomes TRUE (default FALSE)
@property (nonatomic,readonly) BOOL onResultChange; // Send only results that were changed between consecutive operations (default TRUE)
@property (nonatomic,readonly) NSNumber *iterations; // Send only last result after completing x consecutive iterations and automatically untrack (default nil)
@property (nonatomic,readonly) NSNumber *retries; // Max number of ritries

@end

@interface WMConditionTree : WMObject

@property (nonatomic, strong, readonly) WMConditionNode *rootNode;
@property (nonatomic, strong, readonly) NSDictionary *settings;

@end

NS_ASSUME_NONNULL_END
