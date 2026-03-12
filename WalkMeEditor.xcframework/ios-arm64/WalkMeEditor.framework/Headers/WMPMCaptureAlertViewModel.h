//
//  WMPMCaptureAlertViewModel.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 14/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WMPMCaptureAlertViewModelDelegate <NSObject>

@required
- (void)shouldEnableOKButton:(BOOL)shouldEnable;

@end

@interface WMPMCaptureAlertViewModel : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *placeholder;

@property (nonatomic, strong) NSString *userInputValue;

@property (nonatomic, weak) id<WMPMCaptureAlertViewModelDelegate> delegate;

- (void)validationCheck;
- (void)onUserInputValueChanged:(NSString*)inputValue;

@end
