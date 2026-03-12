//
//  WMBasicPromotionObject+Utils.h
//  WalkMe
//
//  Created by Sharony, Guy on 10/12/2025.
//

#import "WMBasicPromotionObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMBasicPromotionObject (Utils)

- (NSString *)deployableTypeName;

@end


@interface NSArray (WMBasicPromotionObjectUtils)

- (WMBasicPromotionObject *)promotionByID:(NSNumber *)promotionID;

@end

NS_ASSUME_NONNULL_END
