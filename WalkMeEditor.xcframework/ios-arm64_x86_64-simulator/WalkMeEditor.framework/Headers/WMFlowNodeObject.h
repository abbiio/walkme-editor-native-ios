//
//  WMFlowNodeObject.h
//  WalkMeSDKEditor-macOS
//
//  Created by Yair Barak on 10/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, WMNodeType) {
    WMNodeTypeWaitForAction,
    WMNodeTypeFindElement ,
    WMNodeTypeSetDataAction,
    WMNodeTypeSplitAction,
    WMNodeTypeDelayAction,
    WMNodeTypeConnectToFlow,
    WMNodeTypePopup,
    WMNodeTypePending,
    WMNodeTypeAutoStep,
};

typedef NS_ENUM(NSUInteger, WMPMWTEditStepChangeType) {
    WMPMWTEditStepChangeTypeUnchanged,
    WMPMWTEditStepChangeTypeModified
};

// Node protocols definition for runtime binding
@protocol WMFlowNodeObject <NSObject>
@end

@interface WMFlowNodeObject : WMObject <WMFlowNodeObject>

@property (nonatomic, strong) NSNumber *ID;
@property (nonatomic, strong) NSString *guid;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *typeDescription;
@property (nonatomic, strong) NSDictionary *customSettings;

// Non model properties
@property (nonatomic, strong) NSString *elementId;
@property (nonatomic, strong) NSNumber *nextNodeId;
@property (nonatomic, assign) WMNodeType nodeType;
// TODO: Move editStepType out of the shared model — it's only used by the editor target.
// Replace with a Set<Int> of modified node IDs owned by WMPMSWTEditState, and inject
// an `isModified` flag into WMGraphNodeViewModel at construction time instead.
@property (nonatomic, assign) WMPMWTEditStepChangeType editStepType;

@end

NS_ASSUME_NONNULL_END
