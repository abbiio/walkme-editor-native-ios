//
//  WMPMPreviewVisitor.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 17/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import "WMPMBaseVisitor.h"

@class WMPMProgressStatusBarViewModel;

@interface WMPMPreviewVisitor : WMPMBaseVisitor

@property (nonatomic,strong) WMPMProgressStatusBarViewModel *progressBarVM;

@end
