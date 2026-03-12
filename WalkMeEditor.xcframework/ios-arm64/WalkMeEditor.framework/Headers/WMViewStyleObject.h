//
//  WMViewStyleObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 04/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMViewStyleSize.h"
#import "WMFontStyleObject.h"

typedef NS_ENUM(NSUInteger,WMStyleHAlignType)
{
    WMStyleHAlignTypeNA,
    WMStyleHAlignTypeLeft,
    WMStyleHAlignTypeCenter,
    WMStyleHAlignTypeRight
};

typedef NS_ENUM(NSUInteger,WMStyleVAlignType)
{
    WMStyleVAlignTypeNA,
    WMStyleVAlignTypeTop,
    WMStyleVAlignTypeMiddle,
    WMStyleVAlignTypeBottom
};

@class WMViewStyleObject, WMCornerRadiusStyleObject, WMShadowStyleObject, WMFlexObject, WMPaddingStyleObject;

@protocol WMViewStylingInterface <NSObject>

@optional
- (void)acceptViewStyle:(WMViewStyleObject* _Nonnull)style;

@end

@interface WMViewStyleObject : WMObject

// Size
@property (nonatomic,strong,nullable) WMViewStyleSize *size;

// Position
@property (nonatomic,assign) WMStyleHAlignType hReference;
@property (nonatomic,assign) WMStyleVAlignType vReference;
@property (nonatomic,strong,nullable) WMSizeData *horizontal;
@property (nonatomic,strong,nullable) WMSizeData *vertical;

// General
@property (nonatomic,strong,nullable) UIColor *backgroundColor;
@property (nonatomic,strong,nullable) NSNumber *opacity;
@property (nonatomic,strong,nullable) WMCornerRadiusStyleObject *cornerRadius;
@property (nonatomic,strong,nullable) WMShadowStyleObject *shadow;
@property (nonatomic,strong,nullable) WMFontStyleObject *font;

// Border
@property (nonatomic,strong,nullable) UIColor  *borderColor;
@property (nonatomic,strong,nullable) NSNumber *borderWidth;
@property (nonatomic,strong,nullable) NSNumber *borderOpacity;

// Flex Info
@property (nonatomic,strong,nullable) WMFlexObject* flex;
@property (nonatomic,strong,nullable) WMPaddingStyleObject* padding;
@property (nonatomic,strong,nullable) WMPaddingStyleObject* margin;

// Subclasses of WMViewStyleObject may extend and call super (for example text styling)
- (void)applyOnView:(UIView<WMViewStylingInterface>* _Nonnull)view;

@end
