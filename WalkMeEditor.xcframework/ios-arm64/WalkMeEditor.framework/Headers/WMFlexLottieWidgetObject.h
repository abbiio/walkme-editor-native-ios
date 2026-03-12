//
//  WMFlexLottieWidgetObject.h
//  WalkMe
//
//  Created by Denis White on 27.02.2026.
//

#import "WMWidgetObject.h"

@interface WMFlexLottieWidgetObject : WMWidgetObject

@property (nonatomic, strong, readonly, nullable) NSNumber* speed;
@property (nonatomic, strong, readonly, nullable) NSString* fileSource;
@property (nonatomic, readonly) Boolean loop;

@end
