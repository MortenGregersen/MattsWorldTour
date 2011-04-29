//
//  Task.h
//  MattsWorldTour
//
//  Created by Morten Bøgh on 4/30/11.
//  Copyright 2011 MoGee. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Country;
@class Category;
@interface Task : NSObject {
    Country *country_;
    Category *category_;
}
@property (nonatomic, retain) Country *country;
@property (nonatomic, retain) Category *category;

- (BOOL)meetsRequirementTask:(Task*)task;
@end