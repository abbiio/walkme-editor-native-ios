//
//  WMCapturedItemObject.h
//  WalkMeSDK
//
//  Created by Amit Shacham on 06/05/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//


#import "WMObject.h"

@interface WMCapturedItemObject : WMObject <WMSerializationProtocol>

@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSNumber *itemId;
@property (nonatomic, strong, readonly) NSNumber *modificationTs;
@property (nonatomic, assign) BOOL isVisible;

@end
