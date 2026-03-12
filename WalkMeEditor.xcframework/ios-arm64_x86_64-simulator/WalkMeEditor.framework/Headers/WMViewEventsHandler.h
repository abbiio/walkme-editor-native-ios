//
//  WMViewEventsHandler.h
//  WalkMeSDK
//
//  Created by Or Elmaliah on 20/08/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WMViewEventsHandler : NSObject

- (instancetype)initWithTargetView:(UIView *)targetView;
- (void)registerForDidAddSubviewEvent;

@property (nonatomic, weak, readonly) UIView *targetView;

@end
