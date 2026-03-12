//
//  WMAppInfoViewController.h
//  WalkMeSDK
//
//  Created by Amit Shacham on 11/12/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WMAppInfoViewController;

@protocol WMAppInfoVCDelegate <NSObject>

@optional
- (void)wmAppInfoVCDidTapClose:(WMAppInfoViewController *)wmAppInfoVC;
- (void)wmAppInfoVCDidTapReportLogs:(WMAppInfoViewController *)wmAppInfoVC;
- (void)wmAppInfoVCDidTapSyncAssets:(WMAppInfoViewController *)wmAppInfoVC;
- (void)wmAppInfoVCDidTapLogs:(WMAppInfoViewController *)wmAppInfoVC;

@end

@interface WMAppInfoViewController : UIViewController

@property (nonatomic, weak) id<WMAppInfoVCDelegate> delegate;

@end
