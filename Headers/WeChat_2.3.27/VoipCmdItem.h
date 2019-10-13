//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, SKBuiltinBuffer_t;

@interface VoipCmdItem : PBGeneratedMessage
{
    unsigned int hasCmdId:1;
    unsigned int hasCmdBuf:1;
    unsigned int hasFromUserName:1;
    int cmdId;
    SKBuiltinBuffer_t *cmdBuf;
    NSString *fromUserName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetFromUserName:) NSString *fromUserName; // @synthesize fromUserName;
@property(readonly, nonatomic) BOOL hasFromUserName; // @synthesize hasFromUserName;
@property(retain, nonatomic, setter=SetCmdBuf:) SKBuiltinBuffer_t *cmdBuf; // @synthesize cmdBuf;
@property(readonly, nonatomic) BOOL hasCmdBuf; // @synthesize hasCmdBuf;
@property(nonatomic, setter=SetCmdId:) int cmdId; // @synthesize cmdId;
@property(readonly, nonatomic) BOOL hasCmdId; // @synthesize hasCmdId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

