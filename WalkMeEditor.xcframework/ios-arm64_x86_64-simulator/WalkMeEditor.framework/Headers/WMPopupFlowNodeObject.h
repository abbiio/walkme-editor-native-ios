//
//  WMPopupFlowNodeObject.h
//  WalkMeSDK
//
//  Created by Yair Barak on 12/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMFlowNodeObject.h"
#import "WMVisualDesignObject.h"

NS_ASSUME_NONNULL_BEGIN

@class WMTriggerObject;

@protocol WMPopupFlowNodeObject <WMFlowNodeObject>
@end

@interface WMPopupFlowNodeObject : WMFlowNodeObject <WMUIVisualDesignInterface,WMPopupFlowNodeObject>

@property (nonatomic,readonly) NSArray<WMTriggerObject*>* triggers;
@property (nonatomic,readonly) WMVisualDesignObject *visualDesign;

@property (nonatomic,readonly) NSString *title;
@property (nonatomic,readonly) NSString *text;
@property (nonatomic,readonly) BOOL isClassic;

@end

@interface WMPopupFlowNodeObject (OldModel)

// Overlay
@property (nonatomic,readonly) BOOL overlayEnabled;
@property (nonatomic,readonly) UIColor *overlayColor;
@property (nonatomic,readonly) NSNumber *overlayOpacity;

// Buttons
@property (nonatomic,readonly) BOOL xButtonEnabled;
@property (nonatomic,readonly) BOOL nextButtonEnabled;
@property (nonatomic,readonly) BOOL startButtonEnabled;

@end

NS_ASSUME_NONNULL_END
