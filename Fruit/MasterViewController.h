//
//  MasterViewController.h
//  Fruit
//
//  Created by Kryvenko, Maksym on 2/9/14.
//  Copyright (c) 2014 Kryvenko, Maksym. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
