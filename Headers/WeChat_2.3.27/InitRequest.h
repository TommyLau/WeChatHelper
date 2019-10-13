//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinString_t;

@interface InitRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUserName:1;
    unsigned int hasSyncKey:1;
    unsigned int hasBuffer:1;
    unsigned int hasLanguage:1;
    unsigned int syncKey;
    BaseRequest *baseRequest;
    SKBuiltinString_t *userName;
    SKBuiltinString_t *buffer;
    NSString *language;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetLanguage:) NSString *language; // @synthesize language;
@property(readonly, nonatomic) BOOL hasLanguage; // @synthesize hasLanguage;
@property(retain, nonatomic, setter=SetBuffer:) SKBuiltinString_t *buffer; // @synthesize buffer;
@property(readonly, nonatomic) BOOL hasBuffer; // @synthesize hasBuffer;
@property(nonatomic, setter=SetSyncKey:) unsigned int syncKey; // @synthesize syncKey;
@property(readonly, nonatomic) BOOL hasSyncKey; // @synthesize hasSyncKey;
@property(retain, nonatomic, setter=SetUserName:) SKBuiltinString_t *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

