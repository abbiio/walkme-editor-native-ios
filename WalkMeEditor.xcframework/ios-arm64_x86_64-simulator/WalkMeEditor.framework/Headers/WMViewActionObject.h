//
//  WMViewActionObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 04/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

@interface WMViewActionObject : WMObject

@property (nonatomic,strong,nonnull) NSString *type;
@property (nonatomic,strong,nullable) NSDictionary *data;
@property (nonatomic,strong,nullable) NSString *href;
@property (nonatomic,strong,nullable) NSDictionary *params;

@end
