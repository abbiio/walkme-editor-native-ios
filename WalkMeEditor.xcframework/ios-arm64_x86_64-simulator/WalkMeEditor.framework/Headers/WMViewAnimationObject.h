//
//  WMViewAnimationObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 05/06/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

typedef NS_ENUM(NSInteger,WMViewAnimationType) {
    WMViewAnimationTypeNA,
    WMViewAnimationTypeFade,
    WMViewAnimationTypeFly
};

typedef NS_ENUM(NSInteger,WMViewAnimationDirection)
{
    WMViewAnimationDirectionNA = 0,
    WMViewAnimationDirectionTop,
    WMViewAnimationDirectionBottom,
    WMViewAnimationDirectionRight,
    WMViewAnimationDirectionLeft
};

@interface WMViewAnimationInfoObject : WMObject

@property (nonatomic,assign) WMViewAnimationType type;
@property (nonatomic,strong) NSNumber *duration;
@property (nonatomic,strong) NSNumber *delay;
@property (nonatomic,assign) WMViewAnimationDirection direction;

@end

@interface WMViewAnimationObject : WMObject

@property (nonatomic,strong) WMViewAnimationInfoObject *inInfo;
@property (nonatomic,strong) WMViewAnimationInfoObject *outInfo;

@end

@interface WMViewAnimationObject (Helpers)

+ (WMViewAnimationObject*)animationWithType:(WMViewAnimationType)type
                                   duration:(NSNumber*)duration
                                      delay:(NSNumber*)delay;

@end
