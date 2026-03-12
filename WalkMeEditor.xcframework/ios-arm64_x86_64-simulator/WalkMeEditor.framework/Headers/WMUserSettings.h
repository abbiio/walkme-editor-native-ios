//
//  WMUserSettings.h
//  WalkMe
//
//  Created by Vova Sarkisyan on 03/07/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WMUserSettings : NSObject

+ (WMUserSettings *)shared;

@property (nonatomic, nullable, strong) NSArray<NSNumber *> *tags;
@property (nonatomic, strong) NSString *language; // short

@end

NS_ASSUME_NONNULL_END
