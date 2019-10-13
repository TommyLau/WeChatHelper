//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GetOpenIMStatusResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    BaseResponse *baseResponse;
    NSMutableArray *mutableStatusDescList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableStatusDescList; // @synthesize mutableStatusDescList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addStatusDesc:(id)arg1;
- (void)addStatusDescFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *statusDesc; // @dynamic statusDesc;
- (id)statusDescList;
- (id)init;

@end
