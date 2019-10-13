//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMCDNDownloadMgrExt.h"
#import "MMFavoritesMgrExt.h"
#import "MMService.h"

@class NSMutableDictionary, NSString;

@interface MMFavoriteFileService : MMService <MMCDNDownloadMgrExt, MMFavoritesMgrExt, MMService>
{
    NSMutableDictionary *_downloadingTasks;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *downloadingTasks; // @synthesize downloadingTasks=_downloadingTasks;
- (void).cxx_destruct;
- (void)favoritesMgrDidUpdatedItemsWithLocalIDArray:(id)arg1;
- (void)cdnDownloadMgrDownloaded:(int)arg1 of:(int)arg2 WithFavItemData:(id)arg3 type:(int)arg4;
- (void)cdnDownloadMgrDidFailedDownloadWithFavItemData:(id)arg1 type:(int)arg2 taskID:(id)arg3 errorCode:(long long)arg4;
- (void)cdnDownloadMgrDidFinishedDownloadWithFavItemData:(id)arg1 type:(int)arg2 filePath:(id)arg3 taskID:(id)arg4;
- (id)downloadCDNFileWithFavItemData:(id)arg1 destinationPath:(id)arg2 type:(int)arg3 switchFileType:(BOOL)arg4;
- (id)downloadCDNFileWithFavItemData:(id)arg1 destinationPath:(id)arg2 type:(int)arg3;
- (id)downloadCDNFileWithFavItemData:(id)arg1 type:(int)arg2;
- (double)downloadProgressOfFaviItemData:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

