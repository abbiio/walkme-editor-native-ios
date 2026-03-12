//
//  WMLanguageObject.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 27/06/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMLanguageObject : WMObject <WMSerializationProtocol>

@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *url;

- (instancetype)initWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
