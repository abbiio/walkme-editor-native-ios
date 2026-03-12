//
//  WMShapeView.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 02/05/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMUIActionHandlerInterface.h"
#import "WMBaseWidgetView.h"
#import "WMShapeWidgetObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMShapeWidgetView : WMBaseWidgetView

@property (nonatomic,readonly,weak) id<WMUIActionHandlerInterface> uiActionHandler;
@property (nonatomic,strong,readonly) WMShapeWidgetObject *model;

- (instancetype)initWithModel:(WMShapeWidgetObject*)model uiActionHandler:(id<WMUIActionHandlerInterface> _Nullable)uiActionHandler;

@end

NS_ASSUME_NONNULL_END
