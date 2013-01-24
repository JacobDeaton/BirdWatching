//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by JACOB DEATON on 1/24/13.
//  Copyright (c) 2013 JACOB DEATON. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;
- (NSUInteger) countofList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
