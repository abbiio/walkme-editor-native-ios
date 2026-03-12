//
//  WMUIElementObject.h
//  WalkMe
//
//  Created by Sharony, Guy on 25/12/2025.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

@class WMTriggerObject, WMVisualDesignObject;

@interface WMUIElementObject : WMObject

@property (nonatomic, strong, readonly) NSNumber *Id;
@property (nonatomic, strong, readonly) NSString *text;
@property (nonatomic, strong, readonly) NSString *type;
@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic, strong, readonly) NSDictionary *settings;
@property (nonatomic, strong, readonly) NSDictionary *conditionTrees;
@property (nonatomic, strong, readonly) WMVisualDesignObject *visualDesign;
@property (nonatomic, strong, readonly) NSArray<WMTriggerObject *> *triggers;

@property (nonatomic, strong) NSDictionary *identifySettings;
@property (nonatomic, strong) NSArray<NSDictionary *> *screenshots;


// settings
@property (nonatomic, strong, readonly) NSNumber *skippable;
@property (nonatomic, strong, readonly) NSNumber *autoScrollToElement;
@property (nonatomic, strong, readonly) NSNumber *dismissWithAnyInteraction;
@property (nonatomic, strong, readonly) NSNumber *screenChange;
@property (nonatomic, strong, readonly) NSNumber *autoFocus;

@end

NS_ASSUME_NONNULL_END
