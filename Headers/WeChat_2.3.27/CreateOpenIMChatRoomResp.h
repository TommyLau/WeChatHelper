//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface CreateOpenIMChatRoomResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRoomName:1;
    unsigned int hasBigHeadimgUrl:1;
    unsigned int hasSmallHeadimgUrl:1;
    BaseResponse *baseResponse;
    NSString *roomName;
    NSMutableArray *mutableMemberListList;
    NSString *bigHeadimgUrl;
    NSString *smallHeadimgUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSmallHeadimgUrl:) NSString *smallHeadimgUrl; // @synthesize smallHeadimgUrl;
@property(readonly, nonatomic) BOOL hasSmallHeadimgUrl; // @synthesize hasSmallHeadimgUrl;
@property(retain, nonatomic, setter=SetBigHeadimgUrl:) NSString *bigHeadimgUrl; // @synthesize bigHeadimgUrl;
@property(readonly, nonatomic) BOOL hasBigHeadimgUrl; // @synthesize hasBigHeadimgUrl;
@property(retain, nonatomic) NSMutableArray *mutableMemberListList; // @synthesize mutableMemberListList;
@property(retain, nonatomic, setter=SetRoomName:) NSString *roomName; // @synthesize roomName;
@property(readonly, nonatomic) BOOL hasRoomName; // @synthesize hasRoomName;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addMemberList:(id)arg1;
- (void)addMemberListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
- (id)memberListList;
- (id)init;

@end

