//
//  WMPMCaptureAlertController.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 14/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WMPMCaptureAlertViewModel;

typedef void (^CaptureAlertOKBlock)(NSString *userInputValue);
typedef void (^CaptureAlertCancelBlock)(void);

@interface WMPMCaptureAlertController : NSObject

@property (nonatomic,readonly) WMPMCaptureAlertViewModel *viewModel;

- (instancetype)initWithViewModel:(WMPMCaptureAlertViewModel *)viewModel sourceView:(UIView *)sourceView;

- (void)presentCaptureAlert:(CaptureAlertOKBlock)onOK cancel:(CaptureAlertCancelBlock)onCancel;
- (void)presentCaptureFailureAlert:(CaptureAlertOKBlock)onRetry cancel:(CaptureAlertCancelBlock)onCancel;
- (void)presentCaptureBlockedAlert:(CaptureAlertOKBlock)onOK;

- (void)dismiss;

@end
