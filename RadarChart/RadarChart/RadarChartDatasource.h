
#import <Foundation/Foundation.h>
@class RadarChartComponent;

@protocol RadarChartDatasource <NSObject>
-(NSInteger)numberOfAnglesInPolygonView:(RadarChartComponent*)view;


@optional
-(NSInteger)numberOfLevelsInPolygonView:(RadarChartComponent*)view;
-(CGFloat)targetBudgetValueAtIndex:(NSInteger)index inPlygonView:(RadarChartComponent*)view;
-(CGFloat)currentBudgetValueAtIndex:(NSInteger)index inPolygonView:(RadarChartComponent*)view;
-(NSString*)titleForAngleAtIndex:(NSInteger)index inPolygonView:(RadarChartComponent*)view;
-(UIColor*)colorForLevelAtIndex:(NSInteger)index inPolygonView:(RadarChartComponent*)view;
-(UIColor*)colorForTargetBudgetInPolygonView:(RadarChartComponent*)view;
-(UIColor*)colorForCurrentBudgetInPolygonView:(RadarChartComponent*)view;
@end
