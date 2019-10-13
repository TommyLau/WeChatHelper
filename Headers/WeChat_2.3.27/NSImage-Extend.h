//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface NSImage (Extend)
+ (BOOL)isWideOrLongImage:(struct CGSize)arg1;
+ (id)genRoundedImage:(id)arg1 size:(struct CGSize)arg2 cornerSize:(unsigned int)arg3;
+ (id)genRoundedImage:(id)arg1 size:(struct CGSize)arg2 cornerSize:(unsigned int)arg3 withCornerMask:(unsigned long long)arg4;
- (id)compressQualityWithData:(id)arg1 maxLength:(long long)arg2 operation:(id)arg3 savePath:(id)arg4;
- (void)fixImageRealSize;
- (id)kernelGenThumbImgData;
- (id)kernelGenImage:(struct CGSize)arg1;
- (struct CGSize)calcFitSizeWithWidth:(unsigned long long)arg1 withHeight:(unsigned long long)arg2;
- (id)kernelGenJPGRepresentation:(double)arg1;
- (id)kernelGenJPGRepresentation;
- (id)cutTopHalfImageToFitSize:(struct CGSize)arg1;
- (id)cutImageToFitSize:(struct CGSize)arg1;
- (id)cutAppReaderImageToFitSize:(struct CGSize)arg1;
@end

