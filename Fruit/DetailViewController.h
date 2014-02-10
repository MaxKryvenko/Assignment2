//
//  DetailViewController.h
//  Fruit
//
//  Created by Kryvenko, Maksym on 2/9/14.
//  Copyright (c) 2014 Kryvenko, Maksym. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
