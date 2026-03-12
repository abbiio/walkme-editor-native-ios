//
//  WMFlowObject.h
//  WalkMeSDKEditor-macOS
//
//  Created by Yair Barak on 10/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMBasicPromotionObject.h"
#import "WMConditionTree.h"

NS_ASSUME_NONNULL_BEGIN

@class WMBusinessSolutionObject, WMFlowNodeObject;

@interface WMFlowObject : WMBasicPromotionObject <WMConditionableObject>

@property (nonatomic, strong) NSMutableDictionary<NSString*, WMFlowNodeObject *> *nodes;
@property (nonatomic, strong) NSNumber *rootFlowNodeId;
@property (nonatomic, strong) NSDictionary *settings;

/// Bussines solution ID
@property (nonatomic, weak)   WMBusinessSolutionObject *bs; // weak reference to container
@property (nonatomic, strong) NSNumber *bsID;
@property (nonatomic, strong) NSString *bsName;

// Business solution custom settings
@property (nonatomic, strong) NSDictionary *bsCustomSettings;
@property (nonatomic, strong) NSDictionary *bsSettings;


// WMConditionableObject
@property (nonatomic, strong) WMConditionTree *conditionTree;

@end

@interface WMFlowObject (AutoStartUtil)
@property (nonatomic, assign, readonly) BOOL autoPlay;
@property (nonatomic, assign, readonly) WMASReplayType asReplayType;
@property (nonatomic, assign, readonly) BOOL isASEnabled;

@end

NS_ASSUME_NONNULL_END
