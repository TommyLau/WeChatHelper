//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageData, NSImage, NSString;

@protocol IMMMessageImageExt <NSObject>

@optional
- (void)imageDidFailedDownloadWithMessage:(MessageData *)arg1 type:(int)arg2;
- (void)imageDidFinishedDownloadWithMessage:(MessageData *)arg1 type:(int)arg2;
- (void)failedImageDidLoadWithUniqueID:(NSString *)arg1 image:(NSImage *)arg2 message:(MessageData *)arg3;
- (void)originalImageDidLoadWithUniqueID:(NSString *)arg1 image:(NSImage *)arg2 message:(MessageData *)arg3;
- (void)thumbImageDidLoadWithUniqueID:(NSString *)arg1 image:(NSImage *)arg2 message:(MessageData *)arg3;
@end

