//
//  WMHTTPMngr.h
//  WalkMe
//
//  Created by Vova Sarkisyan on 10/04/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WalkMeCallbackTypes.h"
NS_ASSUME_NONNULL_BEGIN

@interface WMHTTPMngr : NSObject

+ (WMHTTPMngr*)sharedInstance;

- (void)getRequestWith:(NSString *)url args:(NSDictionary *)args completion:(void (^)(NSDictionary * _Nullable, NSError * _Nullable))callbackBlock;
- (void)postJsonRequestWith:(NSString *)url args:(NSDictionary *)args completion:(void (^)(NSDictionary * _Nullable, NSError * _Nullable))callbackBlock;
- (void)putJsonRequestWith:(NSString *)url args:(NSDictionary *)args completion:(void (^)(NSDictionary * _Nullable, NSError * _Nullable))callbackBlock;

// Fetching content from url as is
- (void)fetchUrl: (NSString*)url compleationHandler:(void (^)( NSString* _Nullable response))completionHandler;

- (void)sendRequest: (NSURLRequest*)request completion:(void (^)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error))completion;

- (void)setProxy:(NSString*)url;

- (void)setHttpHeader:(NSString*)value forKey:(NSString*)key;

- (void)setRawHttpRequestCallback:(WMHTTPRequestCallback)requestCallback;

- (void)invokeRawHttpRequest: (NSURLRequest*)request;

- (void)useAccessMethodViaProxy: (BOOL)viaProxy;
@end

@interface WMHttpDataHolder : NSObject
@end
NS_ASSUME_NONNULL_END
