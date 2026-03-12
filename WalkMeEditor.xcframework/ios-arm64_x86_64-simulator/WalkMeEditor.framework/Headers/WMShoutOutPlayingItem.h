//
//  WMShoutOutPlayingItem.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 21/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMShoutOutObject.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger,WMSOPlayTrigger) {
    WMSOPlayTriggerNA,
    WMSOPlayTriggerAS,
    WMSOPlayTriggerRemindMe
};

@interface WMShoutOutPlayingItem : NSObject

@property (nonatomic,readonly) WMShoutOutObject *shoutOut;
@property (nonatomic,readonly) WMSOPlayTrigger trigger;
@property (nonatomic) id sender;

- (instancetype)initWithShoutOut:(WMShoutOutObject*)shoutOut trigger:(WMSOPlayTrigger)trigger;

@end

@interface WMShoutOutObject (AutoStartUtil)

- (BOOL)autoPlay;
- (WMSODismissType)lastDismissType;

@end

NS_ASSUME_NONNULL_END
