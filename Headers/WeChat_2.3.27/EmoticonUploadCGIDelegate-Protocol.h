//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EmoticonUploadCGI, NSString;

@protocol EmoticonUploadCGIDelegate <NSObject>
- (void)emoticonDidFailedUpload:(EmoticonUploadCGI *)arg1 md5:(NSString *)arg2;
- (void)emoticonDidFinishedUpload:(EmoticonUploadCGI *)arg1 md5:(NSString *)arg2;
@end

