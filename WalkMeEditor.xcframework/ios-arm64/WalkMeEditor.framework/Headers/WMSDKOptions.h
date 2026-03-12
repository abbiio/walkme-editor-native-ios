//
//  WMSDKOptions.h
//  WalkMeSDKCommonPlayer
//
//  Created by Haim Ben Chimol on 07/10/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

@interface WMSDKOptions : WMObject

@property (nonatomic, strong) NSString *language;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *theme;
@property (nonatomic, strong) NSNumber *loggingMode;
@property (nonatomic, strong) NSNumber *analyticMode;
@property (nonatomic, strong) NSNumber *storageMode;
@property (nonatomic, strong) NSNumber *networkAccessMethod;

@end
