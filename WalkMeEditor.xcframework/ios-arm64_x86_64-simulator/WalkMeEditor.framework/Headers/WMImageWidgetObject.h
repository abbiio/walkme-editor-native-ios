//
//  WMImageWidgetObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 27/05/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMWidgetObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMImageWidgetObject : WMWidgetObject

@property (nonatomic,strong,readonly) NSString *imageURL;
@property (nonatomic,strong,readonly) NSString *altText;

@end

NS_ASSUME_NONNULL_END
