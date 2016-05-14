//
//  DetailViewController.h
//  sampleApp
//
//  Created by Tiffany Chiou on 5/14/16.
//  Copyright © 2016 Tiffany Chiou. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

