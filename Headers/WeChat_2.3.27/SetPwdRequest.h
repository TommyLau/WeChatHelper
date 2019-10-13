//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface SetPwdRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasPassword:1;
    unsigned int hasTicket:1;
    unsigned int hasAutoAuthKey:1;
    BaseRequest *baseRequest;
    NSString *password;
    NSString *ticket;
    SKBuiltinBuffer_t *autoAuthKey;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetAutoAuthKey:) SKBuiltinBuffer_t *autoAuthKey; // @synthesize autoAuthKey;
@property(readonly, nonatomic) BOOL hasAutoAuthKey; // @synthesize hasAutoAuthKey;
@property(retain, nonatomic, setter=SetTicket:) NSString *ticket; // @synthesize ticket;
@property(readonly, nonatomic) BOOL hasTicket; // @synthesize hasTicket;
@property(retain, nonatomic, setter=SetPassword:) NSString *password; // @synthesize password;
@property(readonly, nonatomic) BOOL hasPassword; // @synthesize hasPassword;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

