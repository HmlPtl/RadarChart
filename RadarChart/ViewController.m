//
//  ViewController.m
//  RadarChart
//
//  Created by hemal patel on 17/05/14.
//  Copyright (c) 2014 Hml. All rights reserved.
//

#import "ViewController.h"
#import "RadarChartComponent.h"
#import "RadarChartDatasource.h"

@interface ViewController ()
@property (nonatomic , strong)RadarChartComponent* component;
@end

@implementation ViewController
@synthesize component;
- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    self.component = [[RadarChartComponent alloc]initWithFrame:CGRectMake(300, 150, 700, 400)];
    component.datasource = self;
    component.backgroundColor = [UIColor clearColor];
    [self.view addSubview:component];
}
-(NSInteger)numberOfAnglesInPolygonView:(RadarChartComponent *)view{
    return 6;
}
-(CGFloat)targetBudgetValueAtIndex:(NSInteger)index inPlygonView:(RadarChartComponent *)view{
    if (index == 0) {
        return 30;
    }
    else if (index == 1){
        return 20;
    }
    else if (index == 2){
        return 30;
    }
    else if (index == 3){
        return 40;
    }
    else if (index == 4){
        return 20;
    }
    else
        return 50;
}
-(CGFloat)currentBudgetValueAtIndex:(NSInteger)index inPolygonView:(RadarChartComponent *)view{
    if (index == 5) {
        return 30;
    }
    else if (index == 4){
        return 20;
    }
    else if (index == 3){
        return 30;
    }
    else if (index == 2){
        return 40;
    }
    
    return 50;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
