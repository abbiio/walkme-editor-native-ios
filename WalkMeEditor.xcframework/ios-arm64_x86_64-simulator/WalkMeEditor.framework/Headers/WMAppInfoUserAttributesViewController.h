//
//  WMAppInfoUserAttributesViewController.h
//  WalkMeSDK
//
//  Created by Amit Shacham on 16/09/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WMAppInfoUserAttributesViewController;

@protocol WMAppInfoUserAttributesVCDelegate <NSObject>

@optional
- (void)wmAppInfoUserAttributesVCDidTapBack:(WMAppInfoUserAttributesViewController*)wmAppInfoUserAttributesVC;

@end

@interface WMAppInfoUserAttributesViewController : UIViewController

@property (nonatomic, weak) id<WMAppInfoUserAttributesVCDelegate> delegate;

@end
