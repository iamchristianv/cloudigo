//
//  MessageViewController.h
//  Cloudigo
//
//  Created by Christian Villa on 12/5/15.
//  Copyright (c) 2015 Christian Villa. All rights reserved.
//

#import <Parse/Parse.h>
#import <UIKit/UIKit.h>

@interface MessageViewController : UIViewController

@property (strong, nonatomic) PFUser *otherUser;

@end
