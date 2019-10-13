//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowController.h"

#import "NSWindowDelegate.h"

@class MMOutlineButton, MMTextField, MMView, NSButton, NSString;

@interface MMBetaReminderWindowController : MMWindowController <NSWindowDelegate>
{
    MMTextField *_titleLabel;
    MMView *_backgroundView;
    MMTextField *_versionLabel;
    MMTextField *_descLabel;
    NSButton *_moreButton;
    MMOutlineButton *_downloadButton;
    MMOutlineButton *_ignoreButton;
}

@property(retain, nonatomic) MMOutlineButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property(retain, nonatomic) MMOutlineButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(nonatomic) __weak NSButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak MMTextField *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak MMTextField *versionLabel; // @synthesize versionLabel=_versionLabel;
@property(nonatomic) __weak MMView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak MMTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)onClickMoreButton:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)initData;
- (void)initView;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
