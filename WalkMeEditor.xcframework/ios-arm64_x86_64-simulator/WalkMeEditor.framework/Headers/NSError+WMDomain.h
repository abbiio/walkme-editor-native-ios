//
//  NSError+WMDomain.h
//  WalkMeSDKCommonCore
//
//  Created by Vova Sarkisyan on 22/07/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSError (WMDomain)

+ (NSError*)__wm__generateWithCode:(NSInteger)code desc:(NSString*)desc;

+ (NSError*)__wm__unspecified;
+ (NSError*)__wm__walkmeTurnedOff;
+ (NSError*)__wm__playerStateOff;

@end

NS_ASSUME_NONNULL_END
