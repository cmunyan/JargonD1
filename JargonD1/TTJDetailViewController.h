//
//  TTJDetailViewController.h
//  JargonD1
//
//  Created by Cliff Munyan on 7/11/14.
//  Copyright (c) 2014 Cliff Munyan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TTJDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
