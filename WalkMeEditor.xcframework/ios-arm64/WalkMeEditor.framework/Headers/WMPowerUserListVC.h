//
//  WMPowerUserListVC.h
//  WalkMeSDK
//
//  Created by Amit Shacham on 06/05/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WMPowerUserListVC : UIViewController

@property (nonatomic, strong) UISearchController *searchController;
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) UIActivityIndicatorView *sivuvator;
@property (nonatomic) UIStatusBarStyle originalStatusbarStyle;

- (BOOL)isFiltering;
- (void)createActivityView;
- (void)createSearchController;

@end
