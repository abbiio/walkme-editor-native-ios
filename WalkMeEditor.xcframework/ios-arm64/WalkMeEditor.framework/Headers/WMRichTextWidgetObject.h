//
//  WMRichTextWidgetObject.h
//  WalkMeSDKCommonPlayer
//
//  Created by Yair Barak on 24/03/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import "WMTextWidgetObject.h"

NS_ASSUME_NONNULL_BEGIN

@class WMTextStyleObject;

@interface WMRichTextWidgetObject : WMTextWidgetObject

- (NSDictionary<NSAttributedStringKey,id>*)linkTextAttributes;
- (BOOL)isClosableForLink:(NSString*)link atIndex:(NSUInteger)charIndex;

@property (nonatomic, assign, readonly) BOOL shouldBeSelectable;

@end

NS_ASSUME_NONNULL_END
