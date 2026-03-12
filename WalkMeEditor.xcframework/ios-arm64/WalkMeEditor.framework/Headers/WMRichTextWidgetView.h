//
//  WMRichTextWidgetView.h
//  WalkMeSDKCommonPlayer
//
//  Created by Yair Barak on 26/03/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import "WMTextWidgetView.h"
#import "WMRichTextWidgetObject.h"
#import "WMUIActionHandlerInterface.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMRichTextWidgetView : WMBaseWidgetView <WMTextStylingInterface>

@property (nonatomic,strong,readonly) WMRichTextWidgetObject *model;
@property (nonatomic,readonly,weak) id<WMUIActionHandlerInterface> uiActionHandler;
@property (nonatomic, strong, readonly) UITextView *innerTextView;
@property (nonatomic, strong, readonly) NSAttributedString *attributedString;

- (instancetype)initWithModel:(WMRichTextWidgetObject*)model uiActionHandler:(id<WMUIActionHandlerInterface> _Nullable)uiActionHandler;
- (UITextView*)generateInnerTextView; // Protected
@end

NS_ASSUME_NONNULL_END
