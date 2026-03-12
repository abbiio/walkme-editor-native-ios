//
//  WMErrorListener.h
//  WalkMeSDKCommonPlayer
//
//  Created by Vova Sarkisyan on 21/07/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMErrorListener : WMObject

- (instancetype)initWithErrorKey:(NSString*) errorKey;
@property (nonatomic, readonly, nullable) NSError* lastError;

@end

NS_ASSUME_NONNULL_END
