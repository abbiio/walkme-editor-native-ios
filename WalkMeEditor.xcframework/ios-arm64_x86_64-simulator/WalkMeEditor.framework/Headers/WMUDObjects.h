//
//  WMUDObjects.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 25/07/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WMUDObject : NSObject <NSCoding>
@end

@interface WMUDGoalInstanceData : WMUDObject

@property (nonatomic,strong) NSDictionary *attributes;
@property (nonatomic,assign) NSTimeInterval timestamp;
@property (nonatomic,strong) NSString *session;

@end

@interface WMUDGoalData : WMUDObject

@property (nonatomic,strong) NSArray<WMUDGoalInstanceData*> *instances;
@property (nonatomic,strong) NSString *type; // "rule" / "api"

@end
