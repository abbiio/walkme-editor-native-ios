//
//  WMPMSWTVisitor.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 20/08/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import "WMPMBaseVisitor.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMPMSWTVisitor : WMPMBaseVisitor

+ (instancetype)openState;
+ (instancetype)closeState;

@end

@interface WMPMSWTPreviewVisitor : WMPMSWTVisitor
@end

NS_ASSUME_NONNULL_END
