//
//  WMBasicPromotionObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 20/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"
#import "WMPromotionLoadableInterface.h"

typedef NS_ENUM(NSUInteger,WMASReplayType) {
    WMASReplayTypeOnceADay,
    WMASReplayTypeOncePerSession,
    WMASReplayTypeOnce,
    WMASReplayTypeAlways
};

typedef NS_ENUM(NSUInteger,WMSOASType) {
    WMSOASTypeDisabled,
    WMSOASTypeEnabled,
    WMSOASTypeByRule
};


@class WMWebMenuContentItemObject, WMPromotionSettingsObject;
@protocol WMWebMenuContentItemData <NSObject>
- (WMWebMenuContentItemObject*)webMenuContentItem;
@end

@interface WMBasicPromotionObject : WMObject <WMWebMenuContentItemData, WMPromotionLoadable>

@property (nonatomic,readonly) NSNumber *Id;
@property (nonatomic,readonly) NSNumber *deployableType;
@property (nonatomic,readonly) NSString *name;
@property (nonatomic,readonly) NSString *desc;
@property (nonatomic,strong) WMPromotionSettingsObject *asSettings;

@property (nonatomic,readonly) NSArray<NSString*> *keywords;
@property (nonatomic,readonly) NSDictionary *publishDataByEnvs;

- (NSArray<NSString *> *)imagesURLs;

+ (WMASReplayType)asReplayTypeFromSettings:(NSDictionary *)settings;
+ (WMSOASType)asTypeFromSettings:(NSDictionary *)settings;

@end

