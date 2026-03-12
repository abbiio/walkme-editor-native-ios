//
//  WMPMBaseOptionsMenuVC.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 06/07/2020.
//  Copyright © 2020 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMPMUIDefines.h"

@class WMPMMenuHeaderView, WMPMWindow, WMPMMenuHeaderViewModel;

NS_ASSUME_NONNULL_BEGIN

@protocol WMPMBaseOptionsMenuVCDelegate <NSObject>

@required
- (void)didUserDismissOptionMenuVC;

@end

@interface WMPMBaseOptionsMenuVC : UIViewController

@property (nonatomic, weak) WMPMWindow *pmWindow;
@property (nonatomic, strong) WMPMMenuHeaderView *headerView;
@property (nonatomic, strong) WMPMMenuHeaderViewModel *headerViewModel;
@property (nonatomic, strong) UIView *holderView;

- (instancetype)initWithWindow:(WMPMWindow *)pmWindow headerStyleType:(WMPMOptionsMenuHeaderStyleType)headerStyleType title:(NSString * _Nullable)title;
- (void)show;
- (void)hide:(BOOL)animated withCompletion:(void (^__nullable)(BOOL finished))completion;
- (void)setupHolderView;

@end

NS_ASSUME_NONNULL_END
