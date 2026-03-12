//
//  WMGraphNodeObject.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 13/08/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMPMUIDefines.h"

NS_ASSUME_NONNULL_BEGIN

@class WMFlowNodeObject;

typedef NS_ENUM(NSUInteger, WMSWTGraphNodeType) {
    WMSWTGraphNodeTypeStep,
    WMSWTGraphNodeTypeAutomation,
    WMSWTGraphNodeTypePopup,
    WMSWTGraphNodeTypeWaitFor,
    WMSWTGraphNodeTypeData,
    WMSWTGraphNodeTypeAction,
    WMSWTGraphNodeTypeSplit,
    WMSWTGraphNodeTypePending,
    WMSWTGraphNodeTypeSplitRightAnswer,
    WMSWTGraphNodeTypeEmpty,
    WMSWTGraphNodeTypeConnected
};

typedef NS_ENUM(NSUInteger, WMSWTGraphNodeActionType) {
    WMSWTGraphNodeActionTypeNone,
    WMSWTGraphNodeActionTypeRecapture,
    WMSWTGraphNodeActionTypeCapture,
    WMSWTGraphNodeActionTypeGoToStep,
    WMSWTGraphNodeActionTypePreviewStep
};

@interface WMGraphNodeViewModel : NSObject

@property (nonatomic, assign)   BOOL isCurrent;
@property (nonatomic, assign)   BOOL isFocused;
@property (nonatomic, readonly) BOOL isModified;
@property (nonatomic, assign, readonly) BOOL isConnected;
@property (nonatomic, assign, readonly) BOOL isStartPoint;

@property (nonatomic, assign) WMPMSWTOptionsViewType state;
@property (nonatomic, assign, readonly) WMSWTGraphNodeType type;
@property (nonatomic, readonly) WMSWTGraphNodeActionType action;

@property (nonatomic, strong) NSNumber *stepIndex;
@property (nonatomic, strong) NSIndexPath *indexPath;

@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic, strong, readonly) NSString *imageName;
@property (nonatomic, strong, readonly) WMFlowNodeObject *step;

- (instancetype)initWithStep:(WMFlowNodeObject * _Nullable)step
                 atIndexPath:(NSIndexPath *)indexPath
      connectedPromotionType:(NSString * _Nullable)connectedPromotionType
          shouldAllowCapture:(BOOL)shouldAllowCapture;

@end

NS_ASSUME_NONNULL_END
