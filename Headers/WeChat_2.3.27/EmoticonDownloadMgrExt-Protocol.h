//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EmoticonMsgInfo, MMEmotionGroupInfo;

@protocol EmoticonDownloadMgrExt <NSObject>

@optional
- (void)storeEmoticonIconDownloadFinished:(MMEmotionGroupInfo *)arg1;
- (void)emoticonDownloadFailed:(EmoticonMsgInfo *)arg1;
- (void)emoticonDownloadFinished:(EmoticonMsgInfo *)arg1;
@end

