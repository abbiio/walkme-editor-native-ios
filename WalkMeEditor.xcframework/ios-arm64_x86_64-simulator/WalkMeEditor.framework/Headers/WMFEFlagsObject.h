//
//  WMFEFlagsObject.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 14/08/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import "WMObject.h"
#import "WMFEDefines.h"

typedef NS_ENUM(NSUInteger,WMFEFlagsMethodType)
{
    WMFEFlagsMethodTypeNA,
    WMFEFlagsMethodTypeByXpath,
    WMFEFlagsMethodTypeByType
};

@class WMFEOptions;

@interface WMFENativeFlagsObject : WMObject

@property (nonatomic,strong) NSNumber *ignoreText;
@property (nonatomic,strong) NSString *textMatchRegex;
@property (nonatomic,strong) NSNumber *checkVisibility;
@property (nonatomic,strong) NSNumber *matchAccessibilityId;

// Platform flags
@property (nonatomic,strong) NSArray<NSString*> *ignoreSuffixClasses;
@property (nonatomic,strong) NSArray<NSString*> *ignoreAllSuffixUnderClasses;
@property (nonatomic,strong) NSDictionary<NSString*,NSNumber*> *filterPredicates;
@property (nonatomic,strong) NSNumber *feMethod;
@property (nonatomic,strong) NSNumber *scoringMethod;
@property (nonatomic,strong) NSNumber *hierarchyMaxDelta; // How far in heirachy from the captured element, a candidate is considered as a legit one

// None model
@property (nonatomic,strong) NSNumber *autoScroll;

@end

@interface WMFEHybridFlagsObject : WMObject

@property (nonatomic,strong) NSNumber *ignoreText;
@property (nonatomic,strong) NSNumber *identifyByText;
@property (nonatomic,strong) NSNumber *ignoreId;
@property (nonatomic,strong) NSNumber *isCheckVisibility;

@end

@interface WMFEFlagsObject : WMObject <WMFEFlagsModel>

// Common flags
@property (nonatomic,strong) NSNumber *ignoreScreen;

@property (nonatomic,readonly) BOOL visibleOnly;
@property (nonatomic,readonly) NSString *feScoringMethod;

@property (nonatomic,strong) WMFENativeFlagsObject *native;
@property (nonatomic,strong) WMFEHybridFlagsObject *web;

// From Common Player lib
@property (nonatomic,strong) NSNumber *ignoreUIId;
@property (nonatomic,strong) NSNumber *ignoreText;
@property (nonatomic,strong) NSNumber *ignoreVC;

+ (NSString*)defaultWebFlags;

@end

