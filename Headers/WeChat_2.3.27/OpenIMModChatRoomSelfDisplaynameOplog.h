//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface OpenIMModChatRoomSelfDisplaynameOplog : PBGeneratedMessage
{
    unsigned int hasRoomName:1;
    unsigned int hasDisplayName:1;
    NSString *roomName;
    NSString *displayName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetDisplayName:) NSString *displayName; // @synthesize displayName;
@property(readonly, nonatomic) BOOL hasDisplayName; // @synthesize hasDisplayName;
@property(retain, nonatomic, setter=SetRoomName:) NSString *roomName; // @synthesize roomName;
@property(readonly, nonatomic) BOOL hasRoomName; // @synthesize hasRoomName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

