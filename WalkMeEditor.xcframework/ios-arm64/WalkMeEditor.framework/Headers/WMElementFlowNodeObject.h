//
//  WMElementFlowNodeObject.h
//  WalkMeSDK
//
//  Created by Yair Barak on 21/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMFlowNodeObject.h"
#import "WMVisualDesignObject.h"
#import "WMFEDefines.h"

NS_ASSUME_NONNULL_BEGIN

@class WMTooltipObject, WMTriggerObject, WMElementDescription, WMUIElementObject, WMFEFlagsObject;

@protocol WMElementFlowNodeObject <WMFlowNodeObject>
@end

@interface WMElementFlowNodeObject : WMFlowNodeObject <WMElementModel, WMUIVisualDesignInterface, WMElementFlowNodeObject>

@property (nonatomic, strong, readonly) WMTooltipObject *tooltipObject;
@property (nonatomic, strong) NSArray<WMTriggerObject *> *triggers;
@property (nonatomic, strong) NSArray<WMUIElementObject *> *uiElements;

@property (nonatomic, strong) WMElementDescription *data;
@property (nonatomic, strong) WMFEFlagsObject *feFlags;

@end

NS_ASSUME_NONNULL_END
