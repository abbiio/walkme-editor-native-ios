//
//  WMFixedW5GUIGenerator.h
//  WalkMeSDKCommonPlayer
//
//  Created by Vova Sarkisyan on 02/11/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMVisualDesignObject.h"
#import "WMCanvasWidgetView.h"
#import "WMUIActionHandlerInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMFixedW5GUIGenerator : NSObject
+ (WMCanvasWidgetView*)generateCanvas:(id<WMUIVisualDesignInterface>)canvas parentBounds:(CGRect)parentBounds uiActionHandler:(id<WMUIActionHandlerInterface> _Nullable)uiActionHandler;
@end

NS_ASSUME_NONNULL_END
