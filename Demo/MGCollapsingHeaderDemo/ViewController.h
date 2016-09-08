//
//  ViewController.h
//  MGCollapsibleHeaderDemo
//
//  Created by Matthew Gardner on 12/12/15.
//  Copyright © 2015 Matthew Gardner. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MGCollapsingHeaderView.h"

@interface ViewController : UIViewController <MGCollapsingHeaderDelegate>

@property (weak, nonatomic) IBOutlet MGCollapsingHeaderView *headerView;
@property (weak, nonatomic) IBOutlet UIImageView *headerImageView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *tableViewTop;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *headerHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *headerTop;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property (weak, nonatomic) IBOutlet UIButton *button1;
@property (weak, nonatomic) IBOutlet UIButton *button2;
@property (weak, nonatomic) IBOutlet UIButton *button3;
@property (weak, nonatomic) IBOutlet UIButton *button4;
@property (weak, nonatomic) IBOutlet UIButton *button5;
@property (weak, nonatomic) IBOutlet UILabel *label;

@end
