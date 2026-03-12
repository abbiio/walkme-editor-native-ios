//
//  WMTextWidgetView.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 11/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMBaseWidgetView.h"
#import "WMTextWidgetObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMTextWidgetView : WMBaseWidgetView <WMTextStylingInterface>

@property (nonatomic,strong,readonly) WMTextWidgetObject *model;
@property (nonatomic,strong,readonly) UITextField *innerTextView;

- (UITextField*)generateInnerTextView; // Protected
@end

NS_ASSUME_NONNULL_END
