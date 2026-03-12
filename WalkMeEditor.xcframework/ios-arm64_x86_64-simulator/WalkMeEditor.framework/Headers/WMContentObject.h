//
//  WMContentObject.h
//  WalkMeSDK
//
//  Created by Yair Barak on 25/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMBasicPromotionObject.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, WMContentType) {
    WMContentTypeArticle = 0,
    WMContentTypeVideo = 1
};

@interface WMContentObject : WMBasicPromotionObject

@property (readonly, nonatomic, strong) NSString* urlDescription;
@property (readonly, nonatomic, strong) NSString* url;
@property (readonly, nonatomic, strong) NSDictionary* settings;

@property (readonly, nonatomic) WMContentType type;

@end

NS_ASSUME_NONNULL_END
