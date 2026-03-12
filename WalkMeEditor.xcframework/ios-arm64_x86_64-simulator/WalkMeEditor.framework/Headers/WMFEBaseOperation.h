//
//  WMFEBaseOperation.h
//  WalkMeSDKCommon
//
//  Created by Haim Ben Chimol on 04/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMFEDefines.h"

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const WMFEErrorDomain;

@protocol WMFEResultInterface;
@class WMFEBaseOperation,WMFEConfiguration;

@protocol WMFEBaseOperationDelegate <NSObject>

@optional
- (void)feOperation:(WMFEBaseOperation*)feOperation didFindElementFailWithError:(NSError* _Nullable )error;
- (void)feOperation:(WMFEBaseOperation*)feOperation didFindElementSuccess:(NSDictionary<NSString*,id<WMFEResultInterface>>*)feResult;

@end

@interface WMFEBaseOperation : NSObject

@property (nonatomic,weak) id<WMFEBaseOperationDelegate> delegate;

@property (nonatomic,readonly) WMFEConfiguration *config;
@property (nonatomic,readonly) BOOL isFinished;
@property (nonatomic,readonly) BOOL isRunning;
@property (nonatomic,readonly) NSArray<NSString*> *feKeys; // Default nil, subclass should override

- (instancetype)initWithConfig:(WMFEConfiguration*)config;

- (void)main; // Subclass should override in order to implement its own FE operation logic, default finishes operation immediately

- (void)cancel;
- (instancetype)fire; // Calls [WMFindElement.shared invoke]

// The basic implementation of the following methods finish the operation and calls the relevant delegate methods
// Subclass MUST call one of the following methods once FE operation is completed
// Subclass may add their own logic and call super
- (void)onFindElementFail:(NSError* _Nullable)error;
- (void)onFindElementSuccess:(NSDictionary<NSString*,id<WMFEResultInterface>>* _Nullable)feResult;

@end

// NSArray extension
@interface NSArray (WMFEBaseOperation)

- (NSArray<NSString*>*)__wm__feKeys;

@end

NS_ASSUME_NONNULL_END
