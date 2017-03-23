//
//  ViewController.m
//  EMVParserDemo
//
//  Created by jay lei on 3/1/17.
//  Copyright © 2017 Shipmyowngift. All rights reserved.
//

#import "ViewController.h"
#import "EMVParserLibrary.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    EMVParserLibrary *emvParseLibrary = [[EMVParserLibrary alloc]init];
    
    
    NSMutableDictionary *parsedEMVDict = [emvParseLibrary parseEmvRawData:@"6f3a8407a0000000031010a52f500b56495341204352454449548701015f2d086573656e707466729f12074352454449544f9f1101019f38039f1a02"];
    
    NSLog(@"parsedEMVdict: %@", parsedEMVDict);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
