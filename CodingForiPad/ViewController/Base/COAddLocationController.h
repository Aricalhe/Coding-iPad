//
//  COAddLocationController.h
//  CodingForiPad
//
//  Created by sunguanglei on 15/6/8.
//  Copyright (c) 2015年 coding. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TweetSendLocationResponse;
@interface COAddLocationController : UIViewController

@property (copy, nonatomic) void(^selectedBlock)(TweetSendLocationResponse *selectedUser);

@end
