//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface EmailRegRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int hasOpcode:1;
    unsigned int hasEmail:1;
    unsigned int hasLanguage:1;
    unsigned int hasPwd:1;
    unsigned int hasVerifyCode:1;
    unsigned int hasClientSeqId:1;
    unsigned int hasRealCountry:1;
    unsigned int hasVerifyScene:1;
    unsigned int opcode;
    unsigned int verifyScene;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *randomEncryKey;
    NSString *email;
    NSString *language;
    NSString *pwd;
    NSString *verifyCode;
    NSString *clientSeqId;
    NSString *realCountry;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetVerifyScene:) unsigned int verifyScene; // @synthesize verifyScene;
@property(readonly, nonatomic) BOOL hasVerifyScene; // @synthesize hasVerifyScene;
@property(retain, nonatomic, setter=SetRealCountry:) NSString *realCountry; // @synthesize realCountry;
@property(readonly, nonatomic) BOOL hasRealCountry; // @synthesize hasRealCountry;
@property(retain, nonatomic, setter=SetClientSeqId:) NSString *clientSeqId; // @synthesize clientSeqId;
@property(readonly, nonatomic) BOOL hasClientSeqId; // @synthesize hasClientSeqId;
@property(retain, nonatomic, setter=SetVerifyCode:) NSString *verifyCode; // @synthesize verifyCode;
@property(readonly, nonatomic) BOOL hasVerifyCode; // @synthesize hasVerifyCode;
@property(retain, nonatomic, setter=SetPwd:) NSString *pwd; // @synthesize pwd;
@property(readonly, nonatomic) BOOL hasPwd; // @synthesize hasPwd;
@property(retain, nonatomic, setter=SetLanguage:) NSString *language; // @synthesize language;
@property(readonly, nonatomic) BOOL hasLanguage; // @synthesize hasLanguage;
@property(retain, nonatomic, setter=SetEmail:) NSString *email; // @synthesize email;
@property(readonly, nonatomic) BOOL hasEmail; // @synthesize hasEmail;
@property(nonatomic, setter=SetOpcode:) unsigned int opcode; // @synthesize opcode;
@property(readonly, nonatomic) BOOL hasOpcode; // @synthesize hasOpcode;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

