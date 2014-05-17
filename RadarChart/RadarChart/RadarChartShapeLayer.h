
#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

@interface RadarChartShapeLayer : CAShapeLayer

@property (nonatomic , strong) UIColor* fontColor;
@property (nonatomic , strong) UIFont* font;

-(CGSize)getSizeFromText:(NSString*)textString;
-(void)setTextLayerToPolygonWithTitle:(NSString*)title withPosition:(CGPoint)point;
@end
