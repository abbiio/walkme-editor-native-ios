//
//  WMPMUIController.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 07/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMPMUIComponentInterface.h"

@class WMPMWindowController, WMPMCaptureController, WMPMWindowViewModel, WMPMStatusBarViewController, WMPMWidgetView, WMPMWindow, WMPMMinimizedPanelHostView;

@protocol WMPMStatusBarDelegate <NSObject>
@end

@protocol WMPMWidgetDelegate <NSObject>

@optional
- (void)didUserTapWidget;
- (void)didUserTapPreciseCaptureButton;
- (void)didUserTapCancelPreciseCaptureButton;
- (void)didUserTapDonePreciseCaptureButton;
- (void)didUserTapPromotionInfoButton;
- (void)didUserTapCancelCaptureElementButton;
- (void)didUserTapNarrowPreciseCaptureButton;
- (void)didUserTapExpandPreciseCaptureButton;
- (void)didUserTapNavigateButton;
- (void)didUserTapCaptureButton;
- (void)didUserTapContinueCaptureOnScreen;
- (void)didUserTapSaveAndFinishSWT;

@end

@protocol WMPMWindowControllerDelegate <WMPMWidgetDelegate, WMPMStatusBarDelegate>

@optional
- (WMPMCaptureController *)captureController;

@end

@interface WMPMWindowController : NSObject <WMPMUIComponentInterface>

@property (nonatomic,readonly) WMPMWindowViewModel *viewModel;
@property (nonatomic,weak) id<WMPMWindowControllerDelegate> delegate;
@property (nonatomic,strong) WMPMWindow *view;
@property (nonatomic,readonly) UIView *popoverSourceView;
@property (nonatomic,strong,readonly) WMPMStatusBarViewController *statusBarVC;
@property (nonatomic,strong,readonly) WMPMWidgetView *widgetView;
@property (nonatomic,strong,readonly) WMPMMinimizedPanelHostView *minimizedPanelHostView;

- (instancetype)initWithViewModel:(WMPMWindowViewModel*)viewModel;

@end
