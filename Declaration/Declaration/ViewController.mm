//
//  ViewController.m
//  Declaration
//
//  Created by Aleksei Kolchanov on 10/09/16.
//  Copyright © 2016 Aleksei Kolchanov. All rights reserved.
//

#import "ViewController.h"
#import "DeclarationCore.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    User *user = new User;
    user->setName("Aleksei");
    NSLog(@"%@", [NSString stringWithCString:user->name().c_str() encoding:NSUTF8StringEncoding]);
    
    delete user;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
