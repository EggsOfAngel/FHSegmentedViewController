//
//  DetailViewController.h
//  FHSegmentedViewControllerDemo
//
//  Created by Johnny iDay on 13-12-29.
//  Copyright (c) 2013年 Johnny iDay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
