//
//  DetailViewController.h
//  Brass
//
//  Created by Hunter Clarke on 8/11/14.
//  Copyright (c) 2014 Clarke Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
