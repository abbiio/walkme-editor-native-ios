//
//  WMRemoteDataStorageInterface.h
//  WalkMeSDK
//
//  Created by Vova Sarkisyan on 29/01/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WMRemoteDataStorageInterface <NSObject>

- (nullable NSDictionary *)pairForRemoteStorageWithKey:(NSString*)key;

@end

NS_ASSUME_NONNULL_END
