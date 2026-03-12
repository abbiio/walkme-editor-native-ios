//
//  WMTooltipObject.h
//  WalkMeSDK
//
//  Created by Yair Barak on 12/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMVisualDesignObject.h"

NS_ASSUME_NONNULL_BEGIN

@class WMTooltipActionObject, WMBalloonSettingsObject;

@interface WMTooltipObject : WMObject <WMUIVisualDesignInterface>

@property (nonatomic, assign, readonly) BOOL showTip;
@property (nonatomic, assign, readonly) int width;
@property (nonatomic, assign, readonly) int height;
@property (nonatomic, strong, readonly) UIColor *mainColor;
@property (nonatomic, strong, readonly) WMBalloonSettingsObject *settings;

@end



NS_ASSUME_NONNULL_END
