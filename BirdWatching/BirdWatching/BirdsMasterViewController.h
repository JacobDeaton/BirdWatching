//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by JACOB DEATON on 1/22/13.
//  Copyright (c) 2013 JACOB DEATON. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

@end
