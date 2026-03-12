//
//  WMFlexStyleObject.h
//  WalkMeSDKCommonPlayer
//
//  Created by Vova Sarkisyan on 21/09/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import "WMObject.h"

typedef NS_ENUM(NSUInteger,WMFlexStyleDirection) {
    WMFlexStyleDirectionNA, // NA
    WMFlexStyleDirectionColumn, // Vertical
    WMFlexStyleDirectionRow // Horizontal
};

typedef NS_ENUM(NSUInteger,WMFlexSyleJustifyContent) {
    WMFlexSyleJustifyContentNA,
    WMFlexSyleJustifyContentLeft,
    WMFlexSyleJustifyContentCenter,
    WMFlexSyleJustifyContentRight,
    WMFlexSyleJustifyContentSpaceBetween
};

typedef NS_ENUM(NSUInteger,WMFlexSyleAlignment) {
    WMFlexSyleAlignmentNA,
    WMFlexSyleAlignmentTop,
    WMFlexSyleAlignmentCenter,
    WMFlexSyleAlignmentBottom,
    WMFlexSyleAlignmentStretch
};


NS_ASSUME_NONNULL_BEGIN

@interface WMFlexObject : WMObject
@property (nonatomic,assign) CGFloat spacing;
@property (nonatomic,assign) WMFlexStyleDirection direction;
@property (nonatomic,assign) WMFlexSyleJustifyContent justifyContent;
@property (nonatomic,assign) BOOL isStreched; // relevant to widget
@property (nonatomic,assign) WMFlexSyleAlignment alignSelf;
@end

NS_ASSUME_NONNULL_END
