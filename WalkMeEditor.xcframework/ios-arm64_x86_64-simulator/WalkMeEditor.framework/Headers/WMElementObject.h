//
//  WMElementData.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 11/05/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMObject.h"
#import "WMFEDefines.h"

@class WMElementDescription, WMFEFlagsObject, WMXPathNavigator, WMNextStepTriggerObject;

typedef NS_ENUM(NSUInteger,WMElementDataActionType) {
    WMElementDataActionTypeNA,
    WMElementDataActionTypeClick,
    WMElementDataActionTypeClickNoInteraction,
    WMElementDataActionTypeInput,
    WMElementDataActionTypeWaitFor,
    WMElementDataActionTypeSwipe,
    WMElementDataActionTypeData
};

@interface WMBaseElementObject : WMObject <WMElementModel> // Element for segmentation only!

@property (nonatomic, strong) WMElementDescription *data;
@property (nonatomic, strong) WMFEFlagsObject *feFlags;

@end

@interface WMElementObject : WMBaseElementObject // Element for WT!

@property (nonatomic, strong) NSString *label;
@property (nonatomic, strong) NSString *cta;
@property (nonatomic, strong) NSString *ctaID;
@property (nonatomic, strong) NSString *promotionIDRef;
@property (nonatomic, strong) NSNumber *inputAutoFocus;
@property (nonatomic, strong) NSNumber *skippable;
@property (nonatomic, strong) NSNumber *screenChange;
@property (nonatomic, strong) NSNumber *autoScrollElement;
@property (nonatomic, strong) NSNumber *autoScrollOffset;
@property (nonatomic, strong) NSNumber *dismissOnAnyTap;
@property (nonatomic, strong) NSNumber *ignoreScreen;
@property (nonatomic, strong) NSNumber *swipeSensitivity;
@property (nonatomic, strong) NSNumber *swipeDirection;
@property (nonatomic, strong) WMNextStepTriggerObject *nextStepTrigger;
@property (nonatomic, assign) WMElementDataActionType action;

- (NSString *)actionString;

@end

@interface WMBaseElementObject (Utils)

+ (WMBaseElementObject *)createContainerElementOfType:(NSString *)containerType
                                   withContainerIndex:(NSInteger)index
                                           forElement:(WMBaseElementObject *)element;

+ (CGRect)updatedScrollFrameForScrollView:(UIScrollView *)scrollView
                            originalFrame:(CGRect)originalFrame
                             scrollOffset:(NSNumber *)scrollOffset;

+ (CGRect)updatedScrollFrameForScrollView:(UIScrollView *)scrollView
                            originalFrame:(CGRect)originalFrame
                             scrollOffset:(NSNumber *)scrollOffset
                                navigator:(WMXPathNavigator *)navigator;

- (BOOL)isElementViewSameClassAsView:(UIView *)view;



+ (NSMutableDictionary *)prepareNonNativeParamsFromElement:(WMBaseElementObject *)element;

@end
