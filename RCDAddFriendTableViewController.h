//
//  RCDAddFriendTableViewController.h
//  RCloudMessage
//
//  Created by Liv on 15/4/15.
//  Copyright (c) 2015年 RongCloud. All rights reserved.
//

#import "RCDUserInfo.h"
#import <RongIMLib/RongIMLib.h>
#import <UIKit/UIKit.h>

@interface RCDAddFriendTableViewController : UITableViewController

@property(nonatomic, copy) NSString *targetId;

//好友请求消息
@property(nonatomic, strong) RCDUserInfo *userInfo;
@property(weak, nonatomic) IBOutlet UILabel *lblUserName;

@property(weak, nonatomic) IBOutlet UILabel *lblAgreeTip;
@property(weak, nonatomic) IBOutlet UIButton *btnAgree;
@property(weak, nonatomic) IBOutlet UIButton *btnDisagree;
@property(weak, nonatomic) IBOutlet UILabel *lblExtra;
@property(weak, nonatomic) IBOutlet UIImageView *ivAva;

@end
