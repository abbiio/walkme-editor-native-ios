//
//  WMPMBaseVisitor.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 15/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMPMUIVisitorInterface.h"

@interface WMPMBaseVisitor : NSObject <WMPMUIVisitorInterface>

@property (nonatomic,copy) void (^onVisitCompleted)(void);
@property (nonatomic,strong) id data;

@end

@protocol WMPMEditVisitorInterface <WMPMUIVisitorInterface>

@property (nonatomic,assign) NSUInteger numOfEdits;

@end
