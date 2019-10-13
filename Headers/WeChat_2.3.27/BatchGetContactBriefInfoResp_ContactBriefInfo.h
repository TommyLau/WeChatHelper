//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class ModContact, NSString;

@interface BatchGetContactBriefInfoResp_ContactBriefInfo : PBGeneratedMessage
{
    unsigned int hasUsername:1;
    unsigned int hasRet:1;
    unsigned int hasContact:1;
    int ret;
    NSString *username;
    ModContact *contact;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetContact:) ModContact *contact; // @synthesize contact;
@property(readonly, nonatomic) BOOL hasContact; // @synthesize hasContact;
@property(nonatomic, setter=SetRet:) int ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

