//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMPreviewHelper : NSObject
{
}

+ (void)genPreviewThumbWithItem:(id)arg1 originData:(id)arg2 newThumb:(char *)arg3;
+ (BOOL)isProportionalThumbSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
+ (BOOL)isPreviewLongImage:(struct CGSize)arg1;
+ (id)formatVideoTime:(double)arg1;
+ (struct CGSize)getVideoSizeOfVideoPath:(id)arg1;
+ (struct CGSize)getVideoSizeOfPreviewItem:(id)arg1;
+ (BOOL)isChatImageDownloadFinished:(id)arg1;
+ (id)previewCloseAnimationImage:(id)arg1;
+ (id)previewOpenAnimationImage:(id)arg1 useThumb:(char *)arg2;
+ (BOOL)saveImgDataToFile:(id)arg1 filePath:(id)arg2;
+ (id)contentForShare:(id)arg1;
+ (BOOL)isFavHDImageSize:(struct CGSize)arg1;
+ (id)getPreviewTitle:(id)arg1;
+ (BOOL)isPreviewImage:(id)arg1;
+ (BOOL)isPreviewVideo:(id)arg1;
+ (BOOL)isPreviewFile:(id)arg1;
+ (void)openFileWithPath:(id)arg1 andIsByFolder:(BOOL)arg2;
+ (id)genParentRecordUniqueIdWithPanretDataField:(id)arg1;
+ (id)genParentRecordUniqueIdWithParentMessage:(id)arg1 orParentFavItem:(id)arg2;
+ (BOOL)canOpenByQLPreviewView:(id)arg1;
+ (BOOL)filePreviewUseCompactStyle:(id)arg1;
+ (BOOL)canOpenByWeChat:(id)arg1;
+ (BOOL)canPreviewItem:(id)arg1;

@end
