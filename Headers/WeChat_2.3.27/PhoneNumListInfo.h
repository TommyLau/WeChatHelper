//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface PhoneNumListInfo : PBGeneratedMessage
{
    unsigned int hasCount:1;
    unsigned int count;
    NSMutableArray *mutablePhoneNumListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutablePhoneNumListList; // @synthesize mutablePhoneNumListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
- (void).cxx_destruct;
- (void)addPhoneNumList:(id)arg1;
- (void)addPhoneNumListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *phoneNumList; // @dynamic phoneNumList;
- (id)phoneNumListList;
- (id)init;

@end

