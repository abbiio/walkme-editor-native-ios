//
//  WMLoadingIndicatorViewController.h
//  WalkMeSDK
//
//  Created by Amit Shacham on 11/12/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WMLoadingIndicatorViewController : UIViewController

- (void)show;
- (void)hide;

- (void)showCustomView:(UIView *)view;

@end
