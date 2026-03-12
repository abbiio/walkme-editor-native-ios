//
//  WMFontStyleObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 27/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMObject.h"

typedef NS_ENUM(NSUInteger,WMFontStyleAlignment) {
    WMFontStyleAlignmentCenter,
    WMFontStyleAlignmentLeft,
    WMFontStyleAlignmentRight
};

@interface WMFontStyleObject : WMObject

@property (nonatomic,assign) WMFontStyleAlignment align;
@property (nonatomic,strong,nullable) UIColor *color;
@property (nonatomic,strong,nullable) NSNumber *size;
@property (nonatomic,strong,nullable) NSString *family;
@property (nonatomic,assign) BOOL bold;
@property (nonatomic,assign) BOOL italics;
@property (nonatomic,assign) BOOL underline;

+ (WMFontStyleAlignment)alignFromString:(NSString* _Nonnull)alignmentString;
+ (NSString* _Nonnull)stringFromAlignment:(WMFontStyleAlignment)alignment;

@end

@interface WMFontStyleObject (NSAttributedString)
- (NSAttributedString* _Nonnull)attributedStringFromString:(NSString* _Nonnull)string;
@end

@interface WMFontStyleObject (NSMutableParagraphStyle)
+ (NSMutableParagraphStyle* _Nonnull)defaultParagraphStyleWithMaxLineHeight:(CGFloat)maxLineHeight;
- (NSMutableParagraphStyle* _Nonnull)paragraphStyleWithMaxLineHeight:(CGFloat)maxLineHeight;
@end
