//
//  WMFullFlexCarouselWidgetObject.h
//  WalkMe
//
//  Created by Denis White on 03.03.2026.
//

#import "WMWidgetObject.h"

@interface WMFullFlexCarouselWidgetObject : WMWidgetObject

@property (nonatomic, strong, readonly, nullable) NSNumber* intervalSeconds;
@property (nonatomic, strong, readonly, nullable) NSNumber* activeSlideIndex;
@property (nonatomic, readonly) Boolean autoPlay;

@end
