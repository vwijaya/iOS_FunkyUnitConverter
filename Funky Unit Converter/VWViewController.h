//
//  VWViewController.h
//  Funky Unit Converter
//
//  Created by Valerino on 3/19/14.
//  Copyright (c) 2014 VW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VWViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *numberOfBillsLabel;

@property (strong, nonatomic) IBOutlet UITextField *numberOfBillsTextField;

- (IBAction)convertUnits:(UIButton *)sender;

@end
