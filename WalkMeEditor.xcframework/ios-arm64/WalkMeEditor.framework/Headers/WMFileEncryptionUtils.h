//
//  FileEncryptionUtils.h
//  WalkMeSDK
//
//  Created by Almog Lavi on 28/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WMFileEncryptionUtils : NSObject

+ (BOOL)saveEncryptedObject:(id)object withKey:(NSString *)key toURL:(NSURL *)url;
+ (nullable id)loadObjectWithKey:(nonnull NSString *)key fromURL:(nonnull NSURL *)url;
+ (void)deleteFileWithKey:(nullable NSString *)key;
+ (id)appKey;

@end

NS_ASSUME_NONNULL_END
