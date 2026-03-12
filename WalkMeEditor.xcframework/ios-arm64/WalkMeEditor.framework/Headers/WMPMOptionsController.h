//
//  WMPMOptionsController.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 10/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "WMAppInfoViewController.h"
//#import "WMAppInfoUserAttributesViewController.h"

@protocol WMAppInfoVCDelegate, WMAppInfoUserAttributesVCDelegate;

@protocol WMPMRootOptionsDelegate <NSObject>

- (void)didUserChooseCapture;
- (void)didUserChoosePreview;
- (void)didUserChooseCapturedItems;
- (void)didUserChooseAppInfo;
- (void)didUserChooseExitPM;
- (void)didUserChooseCancel;
- (BOOL)shouldDisplayCaptureOption;

@end

@protocol WMPMCaptureOptionsDelegate <NSObject>

- (void)didUserChooseCaptureElement;
- (void)didUserChooseCaptureSmartWT;
- (void)didUserChooseCancel;

@end


@protocol WMPMPreviewOptionsDelegate <NSObject>

@optional
- (void)didUserChooseEditWalkThru;
- (void)didUserChooseRefreshWTCampaign:(NSNumber *)startStep;
- (void)didUserChooseRefreshCampaign;
- (void)didUserChooseChangeLanguage;
- (void)didUserChooseSetStartingStep;
- (void)didUserChoosePreviewAnotherCampaign;
- (void)didUserChooseStopPreview;
- (void)didUserChooseExitPowerMode;
- (void)didUserChooseCancel;
- (NSNumber *)prewiewStartingStep;

@required
- (BOOL)shouldDisplayEditWTOption;
- (BOOL)shouldDisplayEditPublishedWTConfirmation;
- (NSString *)previewOptionsTitle;

@end

@protocol WMPMEditWTOptionsDelegate <NSObject>

@optional
- (void)didUserChooseReCaptureStep;
- (void)didUserChooseAddStepBefore;
- (void)didUserChooseAddStepAfter;
- (void)didUserChooseSaveEdits;
- (void)didUserChooseDiscardEdits;
- (void)didUserChooseCancel;

@required
- (BOOL)shouldDisplayRecaptureOption;
- (BOOL)shouldDisplaySaveEditsOption;
- (NSString*)exitOptionText;

@end

@protocol WMPMDiscardEditsAlertDelegate <NSObject>

- (void)didUserConfirmedDiscardWTEdits;
- (void)didUserConfirmedSaveWTEdits;

@required
- (NSString*)wtName;

@end

@protocol WMPMRecaptureElementAlertDelegate <NSObject>

- (void)didUserChooseDiscardElementRecapture;
- (void)didUserChooseSaveElementRecapture;

@required
- (NSString*)elementName;

@end

@protocol WMPMFailedPreviewingAlertDelegate <NSObject>

- (void)didUserChooseReEditFailedWT;

@required
- (BOOL)shouldPresentEditWTOption;
- (NSUInteger)failedStepIndex;
- (NSString*)failedStepScreen;
- (NSString*)failedStepText;

@end

@protocol WMPMElementTroubleshootAlertDelegate <NSObject>

- (void)didUserChooseRecapture;
- (void)didUserChooseRefreshElement;
- (void)didUserChooseBackToItemsList;
- (void)didUserChooseStopElementView;
- (void)didUserChooseCancel;
- (BOOL)shouldDisplayRecaptureOption;

@end

@protocol WMPMPendingStepAlertDelegate <NSObject>

- (void)didUserChooseCapturePendingStep;
- (BOOL)shouldDisplayCaptureOption;

@end

@interface WMPMOptionsController : NSObject

- (instancetype)initWithSourceView:(UIView*)sourceView;

- (void)presentRootOptionsWithDelegate:(id<WMPMRootOptionsDelegate>)delegate;
- (void)presentAppOptionsWithDelegate:(id<WMAppInfoVCDelegate>)delegate animated:(BOOL)animated;
- (void)presentCaptureOptionsWithDelegate:(id<WMPMCaptureOptionsDelegate>)delegate;
- (void)presentPreviewOptionsWithDelegate:(id<WMPMPreviewOptionsDelegate>)delegate;

- (void)presentEditWTOptionsWithDelegate:(id<WMPMEditWTOptionsDelegate>)delegate;
- (void)presentDiscardEditsAlertWithDelegate:(id<WMPMDiscardEditsAlertDelegate>)delegate;
- (void)presentFailedPreviewingAlertWithDelegate:(id<WMPMFailedPreviewingAlertDelegate>)delegate;
- (void)presentElementTroubleshootAlertWithDelegate:(id<WMPMElementTroubleshootAlertDelegate>)delegate;
- (void)presentElementRecaptureAlertWithDelegate:(id<WMPMRecaptureElementAlertDelegate>)delegate;
- (void)presentAppInfoUserAttributesWithDelegate:(id<WMAppInfoUserAttributesVCDelegate>)delegate;
- (void)presentPendingStepAlertWithText:(NSString *)text withDelegate:(id<WMPMPendingStepAlertDelegate>)delegate;
- (void)presentEditPublishedWTConfirmationWithDelegate:(id<WMPMPreviewOptionsDelegate>)delegate;
- (void)presentAutomationPreviewModeOptions:(void (^)(void))onUserSelectAuto onUserSelectAutoPause:(void (^)(void))onUserSelectAutoPause;

@end

