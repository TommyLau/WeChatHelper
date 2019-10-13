//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt.h"
#import "MMFavoritesMgrExt.h"
#import "MMService.h"
#import "WeNoteWindowControllerDelegate.h"

@class MMThreadSafeDictionary, NSString;

@interface MMFavoriteItemViewerUIMgr : MMService <WeNoteWindowControllerDelegate, MMFavoritesMgrExt, IMessageExt, MMService>
{
    MMThreadSafeDictionary *_windowControllerDict;
}

@property(retain, nonatomic) MMThreadSafeDictionary *windowControllerDict; // @synthesize windowControllerDict=_windowControllerDict;
- (void).cxx_destruct;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)onAddLocalNoteItem:(id)arg1 ErrCode:(int)arg2;
- (unsigned int)identifierToLocalID:(id)arg1;
- (void)onSyncNoteConflict:(id)arg1;
- (void)onWeNoteWindowDidClosed:(id)arg1;
- (BOOL)shouldAlertOnDeleteNote:(id)arg1;
- (void)openWeNoteWindowControllerWithParentMsg:(id)arg1 parentFavItem:(id)arg2;
- (id)noteIdentifierWithParentMsg:(id)arg1 parentFavItem:(id)arg2;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

