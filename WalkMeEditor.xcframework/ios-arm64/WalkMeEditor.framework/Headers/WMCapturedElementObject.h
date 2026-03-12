//
//  WMCapturedElementObject.h
//  WalkMeSDK
//
//  Created by Amit Shacham on 06/05/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#import "WMCapturedItemObject.h"
#import "WMElementObject.h"

@class WMElementDescription;

@interface WMCapturedElementObject : WMCapturedItemObject

@property (nonatomic, strong, readonly) NSString *elementKey;
@property (nonatomic, strong, readonly) NSNumber *elementId;
@property (nonatomic, strong, readonly) WMBaseElementObject *elementObject;
@property (nonatomic, strong, readonly) WMFEFlagsObject *feFlags;
@property (nonatomic, assign) BOOL isInCurrentScreen;

- (instancetype)initWithKey:(NSString *)key andData:(NSDictionary *)item;
- (WMCapturedElementObject *)copyWithNewElementData:(WMElementDescription *)elementData;

@end
