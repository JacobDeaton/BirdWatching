//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by JACOB DEATON on 1/28/13.
//  Copyright (c) 2013 JACOB DEATON. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;



@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;
@property (strong, nonatomic) BirdSighting *birdSighting;
@end
