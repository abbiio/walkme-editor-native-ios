//
//  WMConditionNode.h
//  WalkMeSDK
//
//  Created by Yair Barak on 18/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSInteger {
    And,
    Or
} WMNodeOperatorType;

@protocol WMConditionNode <WMSerializationProtocol>
@end

@protocol WMAssertable <NSObject>
- (BOOL)isEditorAssertable; // can be assert on Editor
@end

@interface WMConditionNode : WMObject <WMConditionNode,WMAssertable>

@property (nonatomic,strong,readonly) NSArray<WMConditionNode*> *nodes;
@property (nonatomic,assign,readonly) WMNodeOperatorType type; // or / and

+ (BOOL)canSupportAction:(NSString*)actionName;
@end

@interface NSDictionary (WMConditionNode)
-(NSDictionary*)conditionSettings;
-(NSString*)conditionFuncName;
@end

NS_ASSUME_NONNULL_END


