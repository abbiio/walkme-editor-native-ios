//
//  WMPMMenuOptionObject.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 21/06/2020.
//  Copyright © 2020 WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WMPMMenuOptionObject : NSObject

@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic, strong, readonly) NSString *imageName;
@property (nonatomic, assign, readonly) BOOL isDisabled;

- (instancetype)initWithTitle:(NSString *)title andImageName:(NSString *)imageName;
- (instancetype)initWithTitle:(NSString *)title andImageName:(NSString *)imageName isDisabled:(BOOL)isDisabled;

@end

NS_ASSUME_NONNULL_END
