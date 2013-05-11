//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by Thomas FOIN on 11/05/13.
//  Copyright (c) 2013 ESI-SUPINFO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString*)title rating:(float)rating;

@end
