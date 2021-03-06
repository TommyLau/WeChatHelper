//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMDragEventView.h"

#import "NSTextViewDelegate.h"

@class MMButton, MMDivider, MMTextField, NSButton, NSImageView, NSString, WCContactData;

@interface MMChatInfoView : MMDragEventView <NSTextViewDelegate>
{
    WCContactData *_contact;
    NSButton *_chatDetailButton;
    MMTextField *_chatNameLabel;
    MMDivider *_divider;
    MMButton *_oaBackwardButton;
    MMTextField *_oaChatNameLabel;
    NSImageView *_openIMIcon;
    CDUnknownBlockType _didUpdateGroupChatName;
    CDUnknownBlockType _didMouseDownInChatName;
    CDUnknownBlockType _didMouseDownInOaBackwardButton;
}

@property(copy, nonatomic) CDUnknownBlockType didMouseDownInOaBackwardButton; // @synthesize didMouseDownInOaBackwardButton=_didMouseDownInOaBackwardButton;
@property(copy, nonatomic) CDUnknownBlockType didMouseDownInChatName; // @synthesize didMouseDownInChatName=_didMouseDownInChatName;
@property(copy, nonatomic) CDUnknownBlockType didUpdateGroupChatName; // @synthesize didUpdateGroupChatName=_didUpdateGroupChatName;
@property(retain, nonatomic) NSImageView *openIMIcon; // @synthesize openIMIcon=_openIMIcon;
@property(retain, nonatomic) MMTextField *oaChatNameLabel; // @synthesize oaChatNameLabel=_oaChatNameLabel;
@property(retain, nonatomic) MMButton *oaBackwardButton; // @synthesize oaBackwardButton=_oaBackwardButton;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) MMTextField *chatNameLabel; // @synthesize chatNameLabel=_chatNameLabel;
@property(nonatomic) __weak NSButton *chatDetailButton; // @synthesize chatDetailButton=_chatDetailButton;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)_adjustChatNameLayout;
- (void)_adjustOAChatNameLayout;
- (void)adjustLayout;
- (void)resetStr:(id)arg1 truncateMode:(unsigned long long)arg2;
- (void)updateChatName;
- (void)updateChatDetailButton;
- (void)rightMouseDown:(id)arg1;
- (void)backwardToOaList;
- (void)showOaProfile;
- (BOOL)shouldHideChatDetailPanel;
- (void)focusOnChatNameLabel;
- (void)setupWithContact:(id)arg1;
- (void)onNewWindowFrame:(id)arg1;
- (void)fontSizeClassChanged:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

