//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CdnComHelper : NSObject
{
}

+ (int)startDownloadTpDataFile:(struct C2CDownloadRequest)arg1 andTpUrl:(id)arg2 andAuthkey:(id)arg3 andDownloadMode:(int)arg4;
+ (int)StartDownloadTpDataFile:(struct C2CDownloadRequest)arg1 andTpUrl:(id)arg2 andAuthkey:(id)arg3;
+ (BOOL)StopDownloadAppAttach:(id)arg1 CdnDownloadTaskInfo:(id)arg2;
+ (void)StopDownloadAppAttach:(id)arg1;
+ (BOOL)StartDownloadAppAttach:(id)arg1;
+ (BOOL)StartUploadRecordThumbImage:(id)arg1 message:(id)arg2;
+ (BOOL)StartUploadRecordData:(id)arg1 message:(id)arg2;
+ (BOOL)StartUploadAppAttach:(id)arg1 thumbRecordData:(id)arg2;
+ (void)StopUploadAppAttach:(id)arg1;
+ (BOOL)StartUploadAppAttach:(id)arg1 aeskey:(id)arg2 signature:(id)arg3 fakeAeskey:(id)arg4 fakeSignature:(id)arg5 hitCheck:(BOOL)arg6;
+ (void)StopDownloadThumb:(id)arg1;
+ (BOOL)StartDownloadThumb:(id)arg1;
+ (BOOL)StopDownloadVideo:(id)arg1 CdnDownloadTaskInfo:(id)arg2;
+ (void)StopDownloadVideo:(id)arg1;
+ (BOOL)StartDownloadVideo:(id)arg1;
+ (void)StopUploadVideo:(id)arg1;
+ (BOOL)StartUploadVideo:(id)arg1 hitCheck:(BOOL)arg2;
+ (void)StopDownloadRecordMedia:(id)arg1 clientId:(id)arg2;
+ (BOOL)StartDownloadRecordMedia:(id)arg1;
+ (id)getDownloadInfo:(id)arg1 DataId:(id)arg2;
+ (BOOL)StopDownloadImage:(id)arg1 HD:(BOOL)arg2 CdnDownloadTaskInfo:(id)arg3;
+ (void)StopDownloadImage:(id)arg1 HD:(BOOL)arg2;
+ (BOOL)StartDownloadImage:(id)arg1 HD:(BOOL)arg2;
+ (void)StopUploadImage:(id)arg1;
+ (BOOL)StartUploadImage:(id)arg1 hitCheck:(BOOL)arg2;
+ (id)GetDownloadRecordClientID:(id)arg1 dataID:(id)arg2;
+ (id)GetDownloadThumbClientID:(id)arg1;
+ (id)GetDownloadClientID:(id)arg1 HD:(BOOL)arg2;

@end

