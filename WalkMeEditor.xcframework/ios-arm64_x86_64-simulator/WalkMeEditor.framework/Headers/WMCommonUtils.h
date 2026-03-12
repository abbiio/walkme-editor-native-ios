//
//  WMCommonUtils.h
//  WalkMeSDKCommonCore
//
//  Created by Guy Sharony on 16/12/2024.
//  Copyright © 2024 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WMCommonUtils : NSObject

+ (nullable NSURL *)applicationWMCacheDirectoryURL;
+ (nullable NSURL *)applicationDocumentDirectoryURL;

@end

NS_ASSUME_NONNULL_END
