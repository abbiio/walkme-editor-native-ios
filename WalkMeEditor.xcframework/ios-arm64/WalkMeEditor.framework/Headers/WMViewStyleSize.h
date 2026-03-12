//
//  WMViewStyleSize.h
//  WalkMeSDKCommonPlayer
//
//  Created by Vova Sarkisyan on 07/09/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger,WMSizeType) {
    WMSizeTypeAbsolute,
    WMSizeTypePercentage
};

typedef NS_ENUM(NSUInteger,WMSizeCustomValueType) {
    WMSizeCustomValueTypeNA,
    WMSizeCustomValueTypeFitContent
};

// For DI
@protocol WMFlexReservedWidth <NSObject>
@end

@interface WMSizeData : WMObject

@property (nonatomic,assign) WMSizeType unit;
@property (nonatomic,strong,nullable) NSNumber *value;
@property (nonatomic,assign) WMSizeCustomValueType customValue;
@property (nonatomic,assign) BOOL isAuto;

- (instancetype)initWithValue:(NSNumber*)value unit:(WMSizeType)unit;
+ (WMSizeData*)sizeFromString:(NSString*)string;
+ (NSString*)stringFromSize:(WMSizeData*)size;
- (CGFloat)sizeFromDataWithRect:(CGRect)parent isHorizontal:(BOOL)isHorizontal;

@end

@interface WMViewStyleSize : WMObject
@property (nonatomic,strong,nullable) WMSizeData *width;
@property (nonatomic,strong,nullable) WMSizeData *height;
@property (nonatomic,strong,nullable) WMSizeData *maxWidth;
@property (nonatomic,strong,nullable) WMSizeData *minWidth;
@property (nonatomic,strong,nullable) WMSizeData *maxHeight;
@property (nonatomic,strong,nullable) WMSizeData *minHeight;
@property (nonatomic,strong,nullable) NSNumber* aspectRatio;
@end

@interface WMFlexReservedWidth : WMObject
@property (nonatomic,strong, nullable) WMSizeData *maxWidth;
@property (nonatomic,assign) CGFloat reservedWidth;
@property (nonatomic,readonly) CGFloat computedMaxWidth;
@end

NS_ASSUME_NONNULL_END
