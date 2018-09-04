//
//  WaterFlowLayout.h
//  瀑布流
//
//  Created by ying zhao on 16/6/30.
//  Copyright © 2016年 ying zhao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WaterFlowLayout;

@protocol WaterFlowLayoutDelegate <NSObject>

@required
- (CGFloat)WaterFlowLayout:(WaterFlowLayout *)WaterFlowLayout heightForRowAtIndexPath:(NSInteger)index itemWidth:(CGFloat)itemWidth;

@optional
- (CGFloat)columnCountInWaterflowLayout:(WaterFlowLayout *)waterflowLayout;
- (CGFloat)columnMarginInWaterflowLayout:(WaterFlowLayout *)waterflowLayout;
- (CGFloat)rowMarginInWaterflowLayout:(WaterFlowLayout *)waterflowLayout;
- (UIEdgeInsets)edgeInsetsInWaterflowLayout:(WaterFlowLayout *)waterflowLayout;

@end
@interface WaterFlowLayout : UICollectionViewLayout
@property (nonatomic ,weak) id<WaterFlowLayoutDelegate> delegate;
@end
