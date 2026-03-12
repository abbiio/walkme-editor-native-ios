//
//  ABAppResources.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 22/03/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
 Resources dictionary example:
    key =     {
        url = "https://s3-us-west-2.amazonaws.com/abbi-io-assets/sdk/filename.png";
        version = 1;
        ttl = 86400; // time in seconds (optional)
    };
 */

typedef void(^ImageResourceReadyBlock)(UIImage *);

@class WMCachedResources;
@protocol WMResourcesStoreInterface <NSObject>

@required
- (NSDictionary*)fetchResourcesMetaData:(WMCachedResources*)resources;
- (void)storeResourcesMetaData:(NSDictionary*)metaData forResources:(WMCachedResources*)resources;

@optional
- (void)saveObject:(id)obj key:(NSString*)key toUrl:(NSURL*)url;
- (id)loadEncryptedObjectWith:(NSString*)key fromUrl:(NSURL*)url;

@end


@interface WMCachedResources : NSObject

@property (nonatomic,readonly) NSString *directoryPath;

- (instancetype)initWithDirectory:(NSString*)directoryPath store:(id<WMResourcesStoreInterface>)store useEncryption:(BOOL)useEncryption proxyUrl:(NSString *)url;
- (void)loadRemoteResources:(NSDictionary *)resources completion: (void (^)(BOOL success))completion;

- (NSData*)resourceById:(NSString*)resourceId;
- (NSString*)textByResourceId:(NSString*)resourceId;
- (UIImage*)imageByResourceId:(NSString*)resourceId;
- (void)imageByResourceId:(NSString*)resourceId withCompletion:(ImageResourceReadyBlock)completion;

+ (NSDictionary*)metadataForURL:(NSString*)url version:(NSUInteger)version ttl:(NSNumber*)ttl;

@end
