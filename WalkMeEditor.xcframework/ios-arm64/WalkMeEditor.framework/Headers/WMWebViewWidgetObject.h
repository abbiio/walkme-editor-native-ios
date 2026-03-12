//
//  WMWebViewWidgetObject.h
//  WalkMeSDKCommonPlayer
//
//  Created by Yair Barak on 19/04/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import "WMWidgetObject.h"
NS_ASSUME_NONNULL_BEGIN

@interface WMWebViewWidgetObject : WMWidgetObject

@property (nonatomic, strong, readonly) NSString* url;
@property (nonatomic, strong, readonly) NSString* dismissUrl;
@end

NS_ASSUME_NONNULL_END
