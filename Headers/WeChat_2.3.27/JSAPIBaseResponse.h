//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface JSAPIBaseResponse : PBGeneratedMessage
{
    unsigned int hasErrcode:1;
    unsigned int hasErrmsg:1;
    int errcode;
    NSString *errmsg;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetErrmsg:) NSString *errmsg; // @synthesize errmsg;
@property(readonly, nonatomic) BOOL hasErrmsg; // @synthesize hasErrmsg;
@property(nonatomic, setter=SetErrcode:) int errcode; // @synthesize errcode;
@property(readonly, nonatomic) BOOL hasErrcode; // @synthesize hasErrcode;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

