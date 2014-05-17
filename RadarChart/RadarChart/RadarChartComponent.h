
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
@protocol RadarChartDatasource;

@interface RadarChartComponent : UIView{
    CGFloat maxSideWidth;
    UIFont* fontForLevelDetails;
    CGFloat lineWidthForLevel;
    CGFloat lineWidthForTargetBudget;
    CGFloat lineWidthForCurrentBudget;
    CGFloat maxBudget;
    UIFont* fontForTitle;
    UIColor* fontColor;
}
@property (nonatomic , assign) CGFloat lineWidthForTargetBudget;
@property (nonatomic , assign) CGFloat lineWidthForCurrentBudget;
@property (nonatomic , assign) CGFloat maxBudget;
@property (nonatomic , assign) CGFloat lineWidthForLevel;
@property (nonatomic , strong) UIFont* fontForLevelDetails;
@property (nonatomic , strong) UIFont* fontForTitle;
@property (nonatomic , strong) UIColor* fontColor;
@property (nonatomic , assign) CGFloat maxSideWidth;
@property (nonatomic, weak) __weak id <RadarChartDatasource> datasource;


-(void)reloadData;
@end
