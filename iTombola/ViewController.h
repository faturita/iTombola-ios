//
//  ViewController.h
//  iTombola
//
//  Created by Rodrigo Ramele on 4/5/15.
//  Copyright (c) 2015 Baufest. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *resultado;
@property (weak, nonatomic) IBOutlet UILabel *banner;
@property (weak, nonatomic) IBOutlet UITextField *apuesta;
@property (weak, nonatomic) IBOutlet UIButton *firstButton;

- (IBAction)doSelect:(id)sender;

- (IBAction)doApostar:(id)sender;

@end

