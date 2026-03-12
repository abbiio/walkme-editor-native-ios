//
//  WMPMWindowViewModel.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 08/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WMPMWindowViewModelDelegate <NSObject>
@end

@interface WMPMWindowViewModel : NSObject

@property (nonatomic,weak) id<WMPMWindowViewModelDelegate> delegate;
@property (nonatomic,assign) BOOL shouldIgnoreTapsOnWidget;

@end
