//
//  WMPMPreviewOptionsVC.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 22/09/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import "WMPMBaseOptionsMenuVC.h"

NS_ASSUME_NONNULL_BEGIN

@class WMPMSWTOptionsViewModel, WMPMWindow;

@protocol WMPMOptionsVCDelegate <WMPMBaseOptionsMenuVCDelegate>

@optional
- (void)didUserTapRefreshCampaign;
- (void)didUserTapStopPreview;
- (void)didUserTapChangeLanguage;
- (void)didUserTapPreviewAnotherCampaign;
- (void)didUserTapDiscardEdits;
- (void)didUserTapSaveEdits;

@end

@interface WMPMPreviewOptionsVC : WMPMBaseOptionsMenuVC

@property (nonatomic, weak) id<WMPMOptionsVCDelegate> delegate;

@property (nonatomic, strong, readonly) WMPMSWTOptionsViewModel *viewModel;

- (instancetype)initWithWindow:(WMPMWindow *)pmWindow viewModel:(WMPMSWTOptionsViewModel *)viewModel;

@end

NS_ASSUME_NONNULL_END
