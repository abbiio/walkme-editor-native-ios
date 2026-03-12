//
//  WMPMTrackedEventObject.h
//  WalkMeEditor
//
//  Created by Sharony, Guy on 10/12/2025.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMPMTrackedEventObject : WMObject <WMSerializationProtocol>

@property (nonatomic, strong, readonly) NSString *goalId;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, assign, readonly) BOOL isEnabled;
@property (nonatomic, strong, readonly) NSString *type;
@property (nonatomic, strong, readonly) NSNumber *modificationTs;

- (NSString*)typeToString;

@end
NS_ASSUME_NONNULL_END
