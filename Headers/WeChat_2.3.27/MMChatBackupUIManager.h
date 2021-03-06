//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AccountServiceExt.h"
#import "MMService.h"

@class MMChatBackupBaseWindowController, NSString;

@interface MMChatBackupUIManager : MMService <AccountServiceExt, MMService>
{
    int _chatBackupMode;
    int _chatBackupSupport;
    MMChatBackupBaseWindowController *_baseWC;
}

@property(retain, nonatomic) MMChatBackupBaseWindowController *baseWC; // @synthesize baseWC=_baseWC;
@property(nonatomic) int chatBackupSupport; // @synthesize chatBackupSupport=_chatBackupSupport;
@property(nonatomic) int chatBackupMode; // @synthesize chatBackupMode=_chatBackupMode;
- (void).cxx_destruct;
- (void)setAvailableSizeForRecover:(unsigned long long)arg1;
- (void)onUserLogout;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)resetBackupMode;
- (void)layoutEntranceSubviews;
- (void)closeBackupWindow;
- (void)showBackupWindow;
- (void)orderFrontBackupWindow;
- (int)clientVersionSupport;
- (void)chatBackupEntrance;
- (void)destroy;
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

