//
//  WMPMSWTPreviewOptionsVC.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 11/08/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import "WMPMPreviewOptionsVC.h"

NS_ASSUME_NONNULL_BEGIN

@class WMFlowNodeObject;

@protocol WMPMSWTOptionsVCDelegate <WMPMOptionsVCDelegate>

@optional
- (void)didUserTapGoToStep:(WMFlowNodeObject *)step;
- (void)didUserTapRecaptureStep:(WMFlowNodeObject *)step;

@end

@interface WMPMSWTPreviewOptionsVC : WMPMPreviewOptionsVC

@property (nonatomic, weak) id<WMPMSWTOptionsVCDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
