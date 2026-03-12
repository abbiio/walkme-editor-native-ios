//
//  WMUserAttributes.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 11/01/2026.
//  Copyright © WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WMUserAttributes : NSObject

- (void)setUserAttributeWithKey:(NSString*)key andValue:(id)value;
- (void)setUserAttributes:(NSDictionary<NSString*,id>*)attributes;
- (void)clearUserAttributesDelta;
- (void)setSessionUserAttributes:(NSDictionary<NSString*,id>*)attributes;
- (void)clearSessionUserAttributes;
- (void)clearUserAttributes;
- (nullable id)getUserAttributeWithKey:(NSString *)key;
- (void)removeUserAttributeWithKey:(NSString *)key;
- (NSDictionary *)getUserAttributes;
- (NSDictionary *)deltaUserAttributes;
- (void)loadAttributesFromStorage:(NSDictionary *)attributes;

@end

NS_ASSUME_NONNULL_END
