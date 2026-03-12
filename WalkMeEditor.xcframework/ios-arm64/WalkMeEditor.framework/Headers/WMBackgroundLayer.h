//
//  WMBackgroundLayer.h
//  WalkMe
//
//  Created by Denis White on 26.02.2026.
//

#import "WMObject.h"
#import "WMViewStyleSize.h"

@interface WMBackgroundLayer : WMObject

@property (nonatomic, strong, nullable) WMViewStyleSize *size;
@property (nonatomic, strong, nullable) NSString *backgroundImage;
@property (nonatomic, strong, nullable) NSString *background;
@property (nonatomic, strong, nullable) NSNumber *opacity;

@end
