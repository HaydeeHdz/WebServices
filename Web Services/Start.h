//
//  ViewController.h
//  Web Services
//
//  Created by HaydeeHdz on 7/14/16.
//  Copyright © 2016 HaydeeHdz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WebServices.h"
#import "Declarations.h"

@interface Start : UIViewController
- (IBAction)btnLoadPressed:(id)sender;

@property (weak, nonatomic) IBOutlet UILabel *lblCityValue;
@property (weak, nonatomic) IBOutlet UILabel *lblTempValue;
@property (weak, nonatomic) IBOutlet UILabel *lblPressureValue;
@property (weak, nonatomic) IBOutlet UILabel *lblHumidityValue;
@property (weak, nonatomic) IBOutlet UILabel *lblTempMinValue;
@property (weak, nonatomic) IBOutlet UILabel *lblTempMaxValue;
@property (weak, nonatomic) IBOutlet UILabel *lblSeaLevelValue;
@property (weak, nonatomic) IBOutlet UILabel *lblGroudLevelValue;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityLoad;

@property (weak, nonatomic) IBOutlet UIButton *btnLoad;

@property (weak, nonatomic) IBOutlet UITextField *txtLatitude;
@property (weak, nonatomic) IBOutlet UITextField *txtLongitude;


@end

