//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface VerifyOpenIMContactReq : PBGeneratedMessage
{
    unsigned int hasTpUsername:1;
    unsigned int hasVerifyTicket:1;
    NSString *tpUsername;
    NSString *verifyTicket;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetVerifyTicket:) NSString *verifyTicket; // @synthesize verifyTicket;
@property(readonly, nonatomic) BOOL hasVerifyTicket; // @synthesize hasVerifyTicket;
@property(retain, nonatomic, setter=SetTpUsername:) NSString *tpUsername; // @synthesize tpUsername;
@property(readonly, nonatomic) BOOL hasTpUsername; // @synthesize hasTpUsername;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

