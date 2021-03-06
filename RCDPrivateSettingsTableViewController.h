//
//  RCDPrivateSettingsTableViewController.h
//  RCloudMessage
//
//  Created by Jue on 16/5/18.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

#import <RongIMKit/RongIMKit.h>
#import <UIKit/UIKit.h>

@interface RCDPrivateSettingsTableViewController
    : UITableViewController <UIActionSheetDelegate>

@property(nonatomic, strong) RCUserInfo *userInfo;

@property(nonatomic, strong) NSString *userId;

@end
