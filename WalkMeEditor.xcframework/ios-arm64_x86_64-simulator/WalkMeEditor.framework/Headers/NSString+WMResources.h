//
//  NSString+WMResources.h
//  WalkMe
//
//  Created by Sharony, Guy on 30/11/2025.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (WMResources)

- (NSString *)resourceURL;
- (NSString *)pmResourceURL;

// Example: icon.png resource in iPhoneX will return icon@3x.png
- (NSString *)nameForRetina;

@end

NS_ASSUME_NONNULL_END
