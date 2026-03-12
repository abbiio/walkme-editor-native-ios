//
//  WMVisualDesignObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 27/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

@class WMVisualDesignObject, WMWidgetObject, WMShapeWidgetObject, WMViewAnimationObject;

@protocol WMUIVisualDesignInterface <NSObject>

@required
@property (nonatomic, readonly) WMVisualDesignObject *visualDesign;

@end

@interface WMVisualDesignObject : WMObject

@property (nonatomic, strong) WMWidgetObject *rootVisualElement;
@property (nonatomic, strong) WMShapeWidgetObject *overlayElement;
@property (nonatomic, strong) WMViewAnimationObject *animation;

// Accessiblity
@property (nonatomic, strong, readonly) NSString *accesabilityTitle;

@end
