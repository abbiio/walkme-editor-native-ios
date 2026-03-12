//
//  WMPMRootOptionsVC.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 17/06/2020.
//  Copyright © 2020 WalkMe Ltd. All rights reserved.
//

#import "WMPMBaseOptionsMenuVC.h"

NS_ASSUME_NONNULL_BEGIN

@class WMPMMenuViewModel;

@protocol WMPMRootOptionsVCDelegate <WMPMBaseOptionsMenuVCDelegate>

@optional
- (void)didUserTapAppInfo;
- (void)didUserTapExitPowerMode;
- (void)didUserTapNewCaptureOption;
- (void)didUserTapSimulateOption;
- (void)didUserTapCapturedItemsOption;
- (void)didUserTapPreviewAndEditOption;

@end

@interface WMPMRootOptionsVC : WMPMBaseOptionsMenuVC

@property (nonatomic, weak) id<WMPMRootOptionsVCDelegate> delegate;

@property (nonatomic, strong, readonly) WMPMMenuViewModel *viewModel;

- (instancetype)initWithWindow:(WMPMWindow *)pmWindow viewModel:(WMPMMenuViewModel *)viewModel;

@end

NS_ASSUME_NONNULL_END
