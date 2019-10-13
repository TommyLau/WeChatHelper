//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GenBizIapPrepayRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasAppId:1;
    unsigned int hasNonceStr:1;
    unsigned int hasTimeStamp:1;
    unsigned int hasPackage:1;
    unsigned int hasPaySign:1;
    unsigned int hasSignType:1;
    unsigned int hasStepInUrl:1;
    BaseRequest *baseRequest;
    NSString *appId;
    NSString *nonceStr;
    NSString *timeStamp;
    NSString *package;
    NSString *paySign;
    NSString *signType;
    NSString *stepInUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetStepInUrl:) NSString *stepInUrl; // @synthesize stepInUrl;
@property(readonly, nonatomic) BOOL hasStepInUrl; // @synthesize hasStepInUrl;
@property(retain, nonatomic, setter=SetSignType:) NSString *signType; // @synthesize signType;
@property(readonly, nonatomic) BOOL hasSignType; // @synthesize hasSignType;
@property(retain, nonatomic, setter=SetPaySign:) NSString *paySign; // @synthesize paySign;
@property(readonly, nonatomic) BOOL hasPaySign; // @synthesize hasPaySign;
@property(retain, nonatomic, setter=SetPackage:) NSString *package; // @synthesize package;
@property(readonly, nonatomic) BOOL hasPackage; // @synthesize hasPackage;
@property(retain, nonatomic, setter=SetTimeStamp:) NSString *timeStamp; // @synthesize timeStamp;
@property(readonly, nonatomic) BOOL hasTimeStamp; // @synthesize hasTimeStamp;
@property(retain, nonatomic, setter=SetNonceStr:) NSString *nonceStr; // @synthesize nonceStr;
@property(readonly, nonatomic) BOOL hasNonceStr; // @synthesize hasNonceStr;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

