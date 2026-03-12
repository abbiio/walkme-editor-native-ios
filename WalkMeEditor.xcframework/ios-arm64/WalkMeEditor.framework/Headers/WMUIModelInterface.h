//
//  WMUIGenerationInterface.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 04/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#ifndef WMUIGenerationInterface_h
#define WMUIGenerationInterface_h

#import "WMViewActionObject.h"
#import "WMViewAnimationObject.h"
#import "WMViewStyleObject.h"

@protocol WMUIFlexInterface
@required
@property (nonatomic,assign) BOOL isFlex;
@property (nonatomic,strong,nullable) WMFlexReservedWidth* computedReservedWidth;
- (void)setupComputedReservedWidth:(WMFlexReservedWidth* _Nullable)computedReservedWidth;
@end

@protocol WMUIAccessibityModel <NSObject>
@required
@property (nonatomic,readonly) BOOL shouldBeFocused;
@property (nonatomic,readonly) BOOL isPartOfPromotionText;
@property (nonatomic,strong,readonly,nullable) NSString* accessibilityText;
@end

@protocol WMUIAnimationModel <NSObject>
@required
@property (nonatomic,readonly,nullable) WMViewAnimationObject *animation;
@end

@protocol WMUIModelInterface <WMUIAnimationModel, WMUIAccessibityModel, WMUIFlexInterface>
@required
@property (nonatomic,readonly,nullable) WMViewStyleObject *style;
@property (nonatomic,readonly,nonnull) NSArray<id<WMUIModelInterface>> *childs;
//@optional
- (CGRect)frameFromStyle:(CGRect)parentBounds;
@end

@protocol WMUIInteractionModelInterface <WMUIModelInterface>

@required
@property (nonatomic,readonly,nullable) WMViewActionObject *action;

@end


#endif /* WMUIGenerationInterface_h */
