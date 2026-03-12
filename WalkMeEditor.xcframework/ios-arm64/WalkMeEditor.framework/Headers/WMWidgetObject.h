//
//  WMWidgetObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 07/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMUIModelInterface.h"
#import "WMBackgroundLayer.h"

typedef NS_ENUM(NSUInteger,WMWidgetObjectType) {
    WMWidgetObjectTypeNA,
    WMWidgetObjectTypeCanvas,
    WMWidgetObjectTypeShape,
    WMWidgetObjectTypeText,
    WMWidgetObjectTypeButton,
    WMWidgetObjectTypeImage,
    WMWidgetObjectTypeXButton,
    WMWidgetObjectTypeRichText,
    WMWidgetObjectTypeWebView,
    WMWidgetObjectTypeFlexCanvas,
    WMWidgetObjectTypeFlexContainer,
    WMWidgetObjectTypeFlexFullCanvas,
    WMWidgetObjectTypeFullFlexCarousel,
    WMWidgetObjectTypeLottie
};

@interface WMWidgetObject : WMObject <WMUIModelInterface>

@property (nonatomic,assign) WMWidgetObjectType type;
@property (nonatomic,strong,nullable) NSString *Id;
@property (nonatomic,strong,nullable) NSString *name;
@property (nonatomic,strong,nullable) NSString *text;
@property (nonatomic,strong,nullable) WMViewStyleObject *style;
@property (nonatomic,strong,nullable) NSMutableArray<WMWidgetObject*> *childElements;
@property (nonatomic,strong,nullable) WMViewAnimationObject *animation;

// WMUIAccessibityModel
@property (nonatomic,assign) BOOL shouldBeFocused;
@property (nonatomic,assign) BOOL isPartOfPromotionText;
@property (nonatomic,strong,nullable) NSString* accessibilityText;

// WMUIFlexInterface
@property (nonatomic,strong,nullable) WMFlexReservedWidth* computedReservedWidth;
@property (nonatomic,assign) BOOL isFlex;
@property (nonatomic,strong,nullable) NSArray<WMBackgroundLayer*> *backgroundLayers;
@property (nonatomic,strong,nullable) WMViewStyleObject *clickedStyle;
@property (nonatomic,strong,nullable) WMViewActionObject *action;

+ (WMWidgetObjectType)widgetTypeFromString:(NSString* _Nonnull)typeString;
+ (NSString* _Nonnull)widgetStringFromType:(WMWidgetObjectType)type;

// Get URLs of images contained in widget
- (NSArray<NSString*>* _Nonnull)imagesURLs;
- (NSArray<WMWidgetObject*>* _Nonnull)subWidgetsWithType:(WMWidgetObjectType)type;

@property (nonatomic,strong,nullable) WMWidgetObject *parent;

@end
