//
//  ABAppResources.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 22/03/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import "WMCachedResources.h"

/*
 Resources dictionary example:
    key =     {
        url = "https://s3-us-west-2.amazonaws.com/abbi-io-assets/sdk/filename.png";
        version = 1;
        ttl = 86400; // time in seconds (optional)
    };
 */


@interface WMResources : NSObject <WMResourcesStoreInterface>

@property (nonatomic, readonly) WMCachedResources *appResources;
@property (nonatomic, readonly) WMCachedResources *promotionResources;

+ (WMResources *)shared;

@end
