//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageData, MsgGap;

@protocol BakChatMsgDownloadTaskDelegate <NSObject>

@optional
- (void)onBakChatMsgDownloadFinishWithMsgData:(MessageData *)arg1 msgGap:(MsgGap *)arg2 isSuccess:(BOOL)arg3;
@end

