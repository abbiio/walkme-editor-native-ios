//
//  WMPromotionPlayer.h
//  WalkMeSDK
//
//  Created by Yair Barak on 25/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMEventTypes.h"

NS_ASSUME_NONNULL_BEGIN

@class WMBasicPromotionObject;
@protocol WMPromotionPlayerInterface <NSObject>

@required
- (WMEventAppType)eventType; // The type of events send by this player (default WMEventAppTypeNone)
- (__kindof WMBasicPromotionObject*)promotion; // The promotion assigned to the player

@end


@protocol WMPlayerDelegate <NSObject>
@optional

- (void)shouldPlayPromotion:(WMBasicPromotionObject*)promotion sender:(id)sender options:(nullable id)options;
- (void)shouldPlayFlow:(NSNumber*)bsId nodeId:(nullable NSNumber*)nodeId sender:(id)sender options:(nullable id)options;
- (void)shouldPlayShuttle:(NSNumber*)shuttleId sender:(id)sender options:(nullable id)options;
- (void)shouldPlayContent:(NSNumber*)contentId sender:(id)sender options:(nullable id)options;
- (void)shouldPlayShoutout:(NSNumber*)shoutoutId sender:(id)sender options:(nullable id)options;
- (void)shouldOpenMenu:(id)sender options:(nullable id)options;
- (void)shouldCloseMenu:(id)sender options:(nullable id)options;

@end

@interface WMPromotionPlayer : NSObject <WMPromotionPlayerInterface>

/**
 @abstract Asks the player to start playing the promotion. Basic implementation will
 call the promotion loader in order to assure that all promotion resources are available
 prior displaying the promotion. Subclass may override but MUST make sure to call onPlayerReady when player is ready
 */
- (void)play;

/**
 @abstract Asks the player to stop playing the promotion. Basic implementation does nothingx
 */
- (void)stop;

/**
 @abstract Called by the player once it is ready to display the promotion.
 Base implementation is empty, subclasses should add their display logic.
 */
- (void)onPlayerReady;

/**
 @abstract A default action handling implementation
 @param action Name of the action invoked such as playBf,playShuttle etc...
 @param args Additional info on the action, for example bfId for playBf action
  @param sender the object that trigired the method
 @return YES if action was handled
 */
- (BOOL)onAction:(NSString*)action withArgs:(nullable NSDictionary*)args sender:(id)sender;

@property (nonatomic,weak) id<WMPlayerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
