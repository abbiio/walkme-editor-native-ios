//
//  WMPMWidgetView.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 10/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMPMCaptureVisitor.h"

@protocol WMPMDynamicAccessoryButtonViewDelegate <NSObject>

@required
- (void)didTapPreciseCaptureButton;
- (void)didTapCancelButton;
- (void)didTapDoneButton;
- (void)didTapNarrowButton;
- (void)didTapExpandButton;
- (void)didTapNavigateButton;
- (void)didTapCaptureButton;

@optional
- (void)didTapDoneSWTButton;
- (void)didTapContinueCaptureOnScreen;

@end

@class WMPMBubbleView, WMPMEditsBadgeView, WMPMInfoView, WMPMCaptureActionBarHostView, WMPMCaptureSWTWidgetHostView;

@interface WMPMWidgetView : UIView

@property (nonatomic,weak) id<WMPMDynamicAccessoryButtonViewDelegate> delegate;

@property (nonatomic, strong, readonly) WMPMEditsBadgeView *editsBadgeView;
@property (nonatomic, strong, readonly) WMPMBubbleView *bubbleView;

@property (nonatomic, strong, readonly) WMPMInfoView *infoView;
@property (nonatomic, strong, readonly) WMPMCaptureActionBarHostView *captureActionBarHostView;
@property (nonatomic, strong, readonly) WMPMCaptureSWTWidgetHostView *captureSWTWidgetHostView;

@property (nonatomic, assign, readonly) WMPMCaptureVisitorState captureVisitorState;
@property (nonatomic, copy) void (^onChangedPosition)(void);

- (void)presentAccessoriesWithState:(WMPMCaptureVisitorState)state approveEnabled:(BOOL)approveEnabled isWT:(BOOL)isWT;
- (void)presentPreviewInfoAccessory;
- (void)presentEditInfoAccessory;
- (void)hideActiveAccessories;

- (void)showCaptureSWTWidgetRelativeToElementFrame:(CGRect)elementFrame;
- (void)hideCaptureSWTWidget;

@end
