//
//  WMPowerUserRole.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 25/03/2021.
//  Copyright © 2021 WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WMPowerUserRole : NSObject <NSCoding>

@property (nonatomic, assign, readonly) BOOL isPowerUser;
@property (nonatomic, assign, readonly) BOOL isAdmin;
@property (nonatomic, assign, readonly) BOOL isContentEditor;
@property (nonatomic, assign, readonly) BOOL isCaptureAllowed;
@property (nonatomic, assign, readonly) BOOL canEditPublishedContent;

- (instancetype)initWithRoles:(NSArray<NSString *> *)roles;

@end

NS_ASSUME_NONNULL_END
