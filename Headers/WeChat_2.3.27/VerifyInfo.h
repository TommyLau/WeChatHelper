//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface VerifyInfo : PBGeneratedMessage
{
    unsigned int hasJsapiName:1;
    unsigned int hasState:1;
    unsigned int hasVerifyOk:1;
    unsigned int state;
    unsigned int verifyOk;
    NSString *jsapiName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetVerifyOk:) unsigned int verifyOk; // @synthesize verifyOk;
@property(readonly, nonatomic) BOOL hasVerifyOk; // @synthesize hasVerifyOk;
@property(nonatomic, setter=SetState:) unsigned int state; // @synthesize state;
@property(readonly, nonatomic) BOOL hasState; // @synthesize hasState;
@property(retain, nonatomic, setter=SetJsapiName:) NSString *jsapiName; // @synthesize jsapiName;
@property(readonly, nonatomic) BOOL hasJsapiName; // @synthesize hasJsapiName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

