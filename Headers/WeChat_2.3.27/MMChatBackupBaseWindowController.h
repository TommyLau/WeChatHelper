//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowController.h"

#import "MMBackupFilesInfoDetailVCDelegate.h"
#import "NSWindowDelegate.h"

@class MMBackupFilesInfoDetailViewController, MMChatBackupBackupViewController, MMChatBackupRecoverViewController, MMDivider, MMImageView, MMTextField, NSString;

@interface MMChatBackupBaseWindowController : MMWindowController <NSWindowDelegate, MMBackupFilesInfoDetailVCDelegate>
{
    MMImageView *_backupImageView;
    MMImageView *_recoverImageView;
    MMDivider *_divider;
    MMTextField *_backupDescLabel;
    MMTextField *_recoverDescLabel;
    MMTextField *_manageDescLabel;
    MMTextField *_versionSupportLabel;
    MMChatBackupBackupViewController *_backupVC;
    MMChatBackupRecoverViewController *_recoverVC;
    MMBackupFilesInfoDetailViewController *_fileInfoVC;
}

@property(retain, nonatomic) MMBackupFilesInfoDetailViewController *fileInfoVC; // @synthesize fileInfoVC=_fileInfoVC;
@property(retain, nonatomic) MMChatBackupRecoverViewController *recoverVC; // @synthesize recoverVC=_recoverVC;
@property(retain, nonatomic) MMChatBackupBackupViewController *backupVC; // @synthesize backupVC=_backupVC;
@property(retain, nonatomic) MMTextField *versionSupportLabel; // @synthesize versionSupportLabel=_versionSupportLabel;
@property(retain, nonatomic) MMTextField *manageDescLabel; // @synthesize manageDescLabel=_manageDescLabel;
@property(retain, nonatomic) MMTextField *recoverDescLabel; // @synthesize recoverDescLabel=_recoverDescLabel;
@property(retain, nonatomic) MMTextField *backupDescLabel; // @synthesize backupDescLabel=_backupDescLabel;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) MMImageView *recoverImageView; // @synthesize recoverImageView=_recoverImageView;
@property(retain, nonatomic) MMImageView *backupImageView; // @synthesize backupImageView=_backupImageView;
- (void).cxx_destruct;
- (void)setAvailableSizeForRecover:(unsigned long long)arg1;
- (void)setWindowResizable:(BOOL)arg1;
- (void)doAnimationWithNewSize:(struct CGSize)arg1 origin:(struct CGPoint)arg2;
- (void)dismissWindowTile;
- (void)showWindowTitle:(id)arg1;
- (void)showRecoverSessionListView:(id)arg1;
- (void)_layoutManageViewWithMode:(int)arg1;
- (void)showManageView;
- (void)_layoutRecoverViewWithRecord:(id)arg1;
- (void)showRecoverView;
- (void)showBackupView;
- (void)removeVersionSupportViews;
- (void)removeEntranceSubviews;
- (void)layoutEntranceSubviews;
- (void)setupEntranceSubviews;
- (void)setupVersionSupportViews;
- (BOOL)windowShouldClose:(id)arg1;
- (void)closeWindowAnimated:(BOOL)arg1;
- (void)showWindowAnimated:(BOOL)arg1;
- (void)orderFrontWindow;
- (void)windowDidLoad;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

