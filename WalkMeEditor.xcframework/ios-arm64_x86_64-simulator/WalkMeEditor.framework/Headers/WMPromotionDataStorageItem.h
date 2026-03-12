//
//  WMPromotionDataStorageItem.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 19/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"
#import "WMShoutOutObject.h"
#import "WMRemoteDataStorageInterface.h"

// Common Promotion
typedef NS_ENUM(NSUInteger,WMPromotionDataStorageItemType) {
    WMPromotionDataStorageItemTypeNA,
    WMPromotionDataStorageItemTypeShoutOut = 1,
    WMPromotionDataStorageItemTypeWT = 2
    /* Complete */
};

@interface WMPromotionDataStorageItem : WMObject <WMRemoteDataStorageInterface>
@property (nonatomic,assign,readonly) double timestamp;
@property (nonatomic,assign,readonly) WMPromotionDataStorageItemType type;
- (instancetype)initWithType:(WMPromotionDataStorageItemType)type;
@end

// AS Base Class
@interface WMPromotionASDataStorageItem : WMObject
@property (nonatomic,assign,readonly) double timestamp;
@property (nonatomic,assign,readonly) NSInteger seenCount;
- (instancetype)initWithSeenCount:(NSInteger)seenCount;
@end

// ShoutOut
@interface WMSOPromotionASDataStorageItem : WMPromotionASDataStorageItem
@property (nonatomic,assign,readonly) WMSODismissType dismissType;
- (instancetype)initWithDismissType:(WMSODismissType)dismissType seenCount:(NSInteger)seenCount;
@end


@interface WMSOPromotionDataStorageItem : WMPromotionDataStorageItem
@property (nonatomic,strong,readonly) WMSOPromotionASDataStorageItem *asData;
- (instancetype)initWithASData:(WMSOPromotionASDataStorageItem*)asData;
@end

// WT
@interface WMWTPromotionDataStorageItem : WMPromotionDataStorageItem
@property (nonatomic,strong,readonly) WMPromotionASDataStorageItem *asData;
- (instancetype)initWithASData:(WMPromotionASDataStorageItem*)asData;
@end

// Launcher

