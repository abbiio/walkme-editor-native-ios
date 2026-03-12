//
//  WMStack.h
//  WalkMeSDK
//
//  Created by Yair Barak on 04/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WMStack<ObjectType> : NSObject

@property (assign,readonly) long count;

- (void)push:(ObjectType)anObject;
- (nullable ObjectType)pop;
- (void)clear;
- (ObjectType)lastObject;
- (NSArray<ObjectType>*)allObjects;

@end

NS_ASSUME_NONNULL_END
