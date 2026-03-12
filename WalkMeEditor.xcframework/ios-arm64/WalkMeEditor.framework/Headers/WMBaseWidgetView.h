//
//  WMBaseWidgetView.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 04/10/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMAnimatableView.h"

#ifndef WM_BASE_WIDGET_VIEW
#define WM_BASE_WIDGET_VIEW

NS_ASSUME_NONNULL_BEGIN

@class WMWidgetObject;

@interface WMBaseWidgetView : WMAnimatableView <WMViewStylingInterface, WMUIAccessibityModel>

@property (nonatomic) Boolean isFlexBackgroundConfigured;
@property (nonatomic,readonly,nullable) WMWidgetObject *model;
@property (nonatomic,strong,nullable) UIView *shadowView;

- (instancetype)initWithModel:(WMWidgetObject* _Nullable)model;

@end

NS_ASSUME_NONNULL_END

#endif
