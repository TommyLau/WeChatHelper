//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetImUnreadMsgCountResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasDisplayMsg:1;
    unsigned int hasQqscheme:1;
    unsigned int hasDownloadUrl:1;
    BaseResponse *baseResponse;
    NSString *displayMsg;
    NSString *qqscheme;
    NSString *downloadUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetDownloadUrl:) NSString *downloadUrl; // @synthesize downloadUrl;
@property(readonly, nonatomic) BOOL hasDownloadUrl; // @synthesize hasDownloadUrl;
@property(retain, nonatomic, setter=SetQqscheme:) NSString *qqscheme; // @synthesize qqscheme;
@property(readonly, nonatomic) BOOL hasQqscheme; // @synthesize hasQqscheme;
@property(retain, nonatomic, setter=SetDisplayMsg:) NSString *displayMsg; // @synthesize displayMsg;
@property(readonly, nonatomic) BOOL hasDisplayMsg; // @synthesize hasDisplayMsg;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

