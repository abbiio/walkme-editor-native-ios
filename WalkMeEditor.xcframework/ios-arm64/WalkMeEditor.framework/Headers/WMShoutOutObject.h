//
//  WMShoutOutObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 24/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMBasicPromotionObject.h"
#import "WMVisualDesignObject.h"
#import "WMConditionTree.h"
#import "WMCommonPlayerModelDefines.h"

@interface WMShoutOutObject : WMBasicPromotionObject <WMUIVisualDesignInterface, WMConditionableObject>

// New Model
@property (nonatomic,readonly) WMVisualDesignObject *visualDesign;

// WMConditionableObject
@property (nonatomic,readonly) WMConditionTree *conditionTree;

// Old model
@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) NSString *subtitle;

@end

// Categories for easy access to "settings" dictionary (Old Model)
@interface WMShoutOutObject (OldModelStyleSettings)

@property (nonatomic,readonly) UIColor *mainColor;
@property (nonatomic,readonly) UIColor *bgColor;
@property (nonatomic,readonly) WMPosition position;

@property (nonatomic,readonly) BOOL overlayEnabled;
@property (nonatomic,readonly) UIColor *overlayColor;
@property (nonatomic,readonly) NSNumber *overlayOpacity;
@property (nonatomic,readonly) BOOL isClassic;

@end

typedef NS_OPTIONS(NSUInteger,WMSODismissType) {
    WMSODismissTypeNone = 0,
    WMSODismissTypeAction = 1 << 0,
    WMSODismissTypeClose = 1 << 1,
    WMSODismissTypeXButton = 1 << 2,
    WMSODismissTypeRemindMeNextDay = 1 << 3,
    WMSODismissTypeRemindMeNextTime = 1 << 4,
    WMSODismissTypeRemindMeNextHour = 1 << 5
};

@interface WMShoutOutObject (EngagementSettings)

@property (nonatomic,readonly) WMSOASType asType;
@property (nonatomic,readonly) WMASReplayType asReplayType;
@property (nonatomic,readonly) WMSODismissType asCancelOnClickType;

@end

@interface WMShoutOutObject (InteractionSettings)

@property (nonatomic,readonly) BOOL hasActions;

@end

