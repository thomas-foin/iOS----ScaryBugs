//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Thomas FOIN on 11/05/13.
//  Copyright (c) 2013 ESI-SUPINFO. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
