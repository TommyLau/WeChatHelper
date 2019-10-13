//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMImageEditCurveItem.h"

@interface MMImageEditMosaicItem : MMImageEditCurveItem
{
}

+ (id)applyCIPixelateFilter:(id)arg1 withScale:(double)arg2 size:(struct CGSize)arg3;
+ (void)resetOriginalImage:(id)arg1 size:(struct CGSize)arg2;
+ (void)setOriginalImage:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)originalImageSize;
+ (id)originalCIImage;
- (void)drawControlPoints;
- (void)drawActiveBorder;
- (void)drawGraphWithScale:(double)arg1;
- (void)drawGraph;
- (void)setNormalStrokeColor:(id)arg1;
- (double)actualDrawWidth;
- (void)dealloc;
- (id)initWithSuperView:(id)arg1 centerPoint:(struct CGPoint)arg2 size:(struct CGSize)arg3;

@end
