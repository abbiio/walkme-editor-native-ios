//
//  WMPMElementTroubleshootVisitor.h
//  WalkMeSDK
//
//  Created by Amit Shacham on 08/05/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#import "WMPMBaseVisitor.h"
#import <UIKit/UIKit.h>"

@interface WMPMElementTroubleshootVisitor : WMPMBaseVisitor


@property (nonatomic, weak) UIView *elementView;
@property (nonatomic,assign) CGRect elementFrame;
@property (nonatomic,assign) BOOL isFeRunning;
@property (nonatomic,assign) BOOL showWarningBadge;

@end
