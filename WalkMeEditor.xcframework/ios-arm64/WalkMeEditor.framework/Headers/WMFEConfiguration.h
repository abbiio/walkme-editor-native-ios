//
//  WMFEConfiguration.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 13/05/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WMFEConfiguration : NSObject <NSCopying>

@property (nonatomic,strong) NSNumber *autoScroll; // Auto scroll to element if found
@property (nonatomic,strong) NSNumber *autoScrollOffset; // additional offset when auto scrolling to element
@property (nonatomic,strong) NSNumber *usedForSegmentation; // Internal segmentation flag
@property (nonatomic,strong) NSNumber *acceptViewAsDescendant; // View found is a descendant of required element
@property (nonatomic,strong) NSNumber *visibleOnly; // Element is visible in screen
@property (nonatomic,strong) NSNumber *staticOnly; // Element is not animating

@property (nonatomic,strong) NSNumber *acceptPartialSuccess; // Relevant when batching FE operations, when YES, batch operation is considered successfull even if not all single operations completed successfully.
@property (nonatomic,strong) NSNumber *timeout; // FE will automatically fail after timeout. Default to 3 seconds

@property (nonatomic,strong) NSNumber *acceptSubclassTypes;

@end
