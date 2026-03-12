//
//  WMPMCaptureController.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 15/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMCaptureModeDefines.h"
#import "WMPreciseCaptureSpotlightView.h"

@class WMPMWindow, WMElementDescription, WMPMCaptureController, WMPMCaptureViewModel, WMPMCaptureActionBarHostView;

@protocol WMPMCaptureControllerDelegate <NSObject>

@required
- (void)didUserSelectedViewWithElementDescription:(WMElementDescription*)elementDescription;
- (void)didSelectViewUsingMarker:(WMPMCaptureController*)captureController shouldShowExpandButton:(BOOL)shouldShowExpandButton;

@optional
- (void)didSelectView:(WMPMCaptureController*)captureController;

@end

@interface WMPMCaptureController : NSObject <WMPreciseCaptureSpotlightViewDelegate>

@property (nonatomic,weak) WMPMWindow *pmWindow;
@property (nonatomic,readonly) WMPMCaptureViewModel *viewModel;
@property (nonatomic,weak) id<WMPMCaptureControllerDelegate> delegate;
@property (nonatomic,weak) WMPMCaptureActionBarHostView *actionBarHostView;

@property (nonatomic,readonly) UIView *capturedView;
@property (nonatomic,readonly) WMElementDescription *capturedElementDescription;
@property (nonatomic,readonly) NSMutableArray<WMElementDescription*> *previousElements;

- (instancetype)initWithViewModel:(WMPMCaptureViewModel*)viewModel;

- (void)startCapturing;
- (void)stopCapturing;

- (void)presentPreciseCaptureView;
- (void)hidePreciseCaptureView;
- (void)dismissPreciseCaptureMarker;
- (void)setCaptureViewsHidden:(BOOL)hidden;

- (void)showAndFadeoutHighlighterOnView:(UIView*)view WithColor:(UIColor*)color;

- (void)didTapOnNarrowButton;
- (void)didTapOnExpandButtonWithCompletion:(void (^)(BOOL shouldShowExpandButton))completion;
- (BOOL)shouldShowNarrowButton;

@end
