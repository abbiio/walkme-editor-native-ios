//
//  WMFEDefines.h
//  WalkMeSDKCommon
//
//  Created by Haim Ben Chimol on 04/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#ifndef WMFEDefines_h
#define WMFEDefines_h

#import <UIKit/UIKit.h>
#import "WalkMeSDKCommonDefines.h"

NS_ASSUME_NONNULL_BEGIN

/**
 @abstract A unified interface for macOS / iOS element description
 Use to access common attributes in element description
 */
@protocol WMUINode;
@protocol WMElementDescriptionModel <NSObject>

@required
@property (nonatomic,readonly) NSString *xpath;
@property (nonatomic,readonly) NSNumber *imageFingerprint;
@property (nonatomic,readonly) NSString *text;

+ (__kindof id<WMElementDescriptionModel>)elemDescFromView:(UIView*)aView;

@optional
// To be called on BG thread
+ (__kindof id<WMElementDescriptionModel>)elemDescFromNode:(id<WMUINode>)aNode;

@end

/**
 @abstract A unified interface for macOS / iOS FE flags
 */
@protocol WMFEFlagsModel <NSObject>

@optional
@property (nonatomic,readonly) BOOL visibleOnly;
@property (nonatomic,readonly) NSString *feScoringMethod;

@end

/**
 @abstract A unified interface for macOS / iOS element model
 An element model encapsulates necessary data for invoking a FE operation, such as element description, flags, etc...
 */
@protocol WMElementModel <NSObject>

@property (nonatomic,readonly) id<WMElementDescriptionModel> data;
@property (nonatomic,readonly) id<WMFEFlagsModel> feFlags;

@end

/**
 @abstract A unified interface for macOS / iOS FE result
 At minimum, a FE result should include a native UIView / NSView
 */
@protocol WMFEResultInterface <NSObject>

@required
@property (nonatomic,weak) UIView *view; // The view found as a result of a FE operation
@property (nonatomic,readonly) CGRect elementFrameInWindow;
@property (nonatomic,strong) id<WMElementModel> model;
@property (nonatomic,strong) NSString *elementKey;

@optional
@property (nonatomic,readonly) BOOL isCurrentlyShown;

@end

typedef NSString *WMScoringMethodType NS_EXTENSIBLE_STRING_ENUM;
@protocol WMFEScoringMethodInterface <NSObject>

@required
@property (nonatomic,readonly) WMScoringMethodType type;

- (NSNumber*)scoreForElement:(id<WMElementDescriptionModel>)element bindings:(NSDictionary<NSString*,id>*)bindings;
- (BOOL)isCompatibleScoringMethodForElement:(id<WMElementDescriptionModel>)element bindings:(NSDictionary<NSString*,id>*)bindings;

@end

typedef NSString *WMFilterMethodType NS_EXTENSIBLE_STRING_ENUM;
@protocol WMFEFilterMethodInterface <NSObject>

@required
@property (nonatomic,readonly) WMFilterMethodType type;

// UIView based filtering
- (BOOL)evaluateWithView:(UIView*)view bindings:(nullable NSDictionary<NSString *, id> *)bindings;
- (BOOL)isCompatibleForView:(UIView*)aView;

// WMUINode based filtering
- (BOOL)evaluateWithNode:(id<WMUINode>)node bindings:(nullable NSDictionary<NSString *, id> *)bindings;
- (BOOL)isCompatibleForNode:(id<WMUINode>)node;

@end

@class WMFEConfiguration;
@protocol WMFEMethodInterface <NSObject>

@required
- (instancetype)initWitElement:(id<WMElementModel>)element;
+ (BOOL)isMethodCompatabileForElement:(id<WMElementModel>)element;

- (void)findElement:(id<WMElementModel>)element withKey:(NSString*)key withConfig:(WMFEConfiguration*)config completion:(void (^)(id<WMFEResultInterface> result))completion;

- (void)doesView:(UIView*)view
   atPointInView:(CGPoint)pointInView 
   pointInWindow:(CGPoint)pointInWindow
    matchElement:(id<WMElementModel>)element
      withConfig:(WMFEConfiguration*)config
      completion:(void (^)(id<WMFEResultInterface> result))completion;

@end

NS_ASSUME_NONNULL_END

#endif /* WMFEDefines_h */
