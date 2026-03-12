//
//  WMElementDescription.h
//  WalkMe
//
//  Created by Haim Ben Chimol on 7/21/15.
//  Copyright (c) 2015 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMFEDefines.h"
#import "WMObject.h"

@class WMXPath;

typedef NS_ENUM(NSInteger, WMHybridPlatformType) {
    WMHybridPlatformTypeUnknown,
    WMHybridPlatformTypeWeb,
    WMHybridPlatformTypeFlutter
};

@interface WMNonNativeElementDescription :  WMObject <NSCopying, WMSerializationProtocol>

@property (nonatomic, assign) WMHybridPlatformType platform; // web / flutter
@property (nonatomic, strong) NSString *elementIdentifier; // Unique id given to this element by user
@property (nonatomic, strong) NSString *feFlags; // Override flags in elementDescription with the received ones
@property (nonatomic, strong) NSString *elementDescription; // Includes FE flags
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *label;
@property (nonatomic, strong) NSString *windowID;
@property (nonatomic, assign) CGRect frame; // In Containter (WebView / FlutterView) coordinate system
@property (nonatomic, assign) UIEdgeInsets containterContentInset; // The contentInset of the scrollView containing the element inside the FlutterView or WebView (which displays the WebView content)

+ (WMNonNativeElementDescription *)nonNativeElemDescFromResponseData:(id)responseData view:(UIView *)view;

@end

@interface WMElementAccessabilityInfo : WMObject <NSCopying, WMSerializationProtocol>

@property (nonatomic, strong) NSString *label;
@property (nonatomic, strong) NSString *hint;
@property (nonatomic, strong) NSString *value;
@property (nonatomic, strong) NSString *identifier;

+ (WMElementAccessabilityInfo*)accessabilityInfoForView:(UIView*)view;

@end

@interface WMBarButtonItemDescription : WMObject

@property (nonatomic, strong) NSNumber *navLeftItemIndex;
@property (nonatomic, strong) NSNumber *navRightItemIndex;
@property (nonatomic, strong) NSNumber *toolbarItemIndex;
@property (nonatomic, strong) NSNumber *tabBarItemIndex;

@end


@interface WMElementDescription : WMObject <WMElementDescriptionModel>

@property (nonatomic, strong) WMXPath *xPath;
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *uiKitType;
@property (nonatomic, strong) NSNumber *isInput;
@property (nonatomic, strong) NSNumber *isSwiftUI;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *container;
@property (nonatomic, strong) NSString *associated;
@property (nonatomic, strong) NSString *sdkVersion;
@property (nonatomic, strong) NSString *wmElementId;
@property (nonatomic, assign) CGRect   frame; // In UIWindow coordinate system
@property (nonatomic, assign) CGRect   windowBounds;
@property (nonatomic, strong) NSString *screen;
@property (nonatomic, strong) NSString *containerTitle;
@property (nonatomic, strong) NSNumber *imageFingerprint;
@property (nonatomic, strong) NSNumber *tag;

@property (nonatomic, strong) WMBarButtonItemDescription *barButtonItemDesc;
@property (nonatomic, strong) WMElementAccessabilityInfo *accessabilityInfo;
@property (nonatomic, strong) WMNonNativeElementDescription *nonNativeElemDesc;

- (instancetype)initWithSerializableObject:(NSDictionary *)object;

- (instancetype)initWithElementDescription:(NSString *)elementDescription;

/**
 @abstract Initialize an element description object for the received view.
 @param view the view that should be described by the element description object
 @return An initialized WMElementDescription object.
 */
- (instancetype)initWithView:(UIView *)view;
- (instancetype)initWithView:(UIView *)view screen:(NSString *)screen;

/**
 @abstract Initialize an element description object explicilty with a specific XPath. Mainly used for views that are de-attached from their parents (for example: reusable views in UITableView & UICollectionView) but still have a valid XPath
 @param xPath the XPath that should be used for the element.
 @param view the view that should be used for the element.
 @return An initialized WMElementDescription object.
 */
- (instancetype)initWithXPath:(WMXPath*)xPath view:(UIView*)view;

//// Dictionary representation: {"XPath" : xPath, "VC" : vcContainerClass, "Text" : text}
//- (NSDictionary*)dictionary;

- (NSDictionary *)generateStepDataWithAdditionalParams:(NSDictionary *)params;

@end

//_______________________________________________________________________________________________________________


