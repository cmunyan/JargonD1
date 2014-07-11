//
//  TTJMasterViewController.h
//  JargonD1
//
//  Created by Cliff Munyan on 7/11/14.
//  Copyright (c) 2014 Cliff Munyan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TTJDetailViewController;

@interface TTJMasterViewController : UITableViewController

@property (nonatomic, retain) NSArray *jargonNames;
@property (nonatomic, retain) NSArray *jargonMeanings;


@property (strong, nonatomic) TTJDetailViewController *detailViewController;

@end
