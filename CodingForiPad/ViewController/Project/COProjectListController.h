//
//  COProjectListVC.h
//  CodingForiPad
//
//  Created by sunguanglei on 15/6/14.
//  Copyright (c) 2015年 coding. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "COBaseViewController.h"
#import "COUser.h"

@interface COProjectListController : COBaseViewController

@property (nonatomic, strong) COUser *user;

- (void)reloadProject;
- (void)reloadProject:(NSInteger)selectProjectID;

@end
