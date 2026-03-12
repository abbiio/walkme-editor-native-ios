//
//  WMElementHandlerInterface.h
//  WalkMe
//
//  Created by Sharony, Guy on 30/12/2025.
//

#ifndef WMElementHandlerInterface_h
#define WMElementHandlerInterface_h

@protocol WMElementHandlerProtocol <NSObject>

@optional
- (void)willBecomeActive;
- (void)willBecomeInActive;
- (BOOL)shouldDismissOnElementTap;

@end

#endif /* WMElementHandlerInterface_h */
