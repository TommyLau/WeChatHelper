//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMPreviewWindowController.h"

#import "IMMMessageImageExt.h"
#import "IMessageExt.h"
#import "MMPreviewChatMediaDataLogicDelegate.h"

@class MMPreviewChatMediaDataLogic, MessageData, NSString, WCContactData;

@interface MMPreviewChatMediaWindowController : MMPreviewWindowController <MMPreviewChatMediaDataLogicDelegate, IMessageExt, IMMMessageImageExt>
{
    MessageData *m_currentPreviewingMessage;
    WCContactData *m_chatContact;
    MMPreviewChatMediaDataLogic *m_dataLogic;
    unsigned long long m_order;
}

- (void).cxx_destruct;
- (void)imageDidFailedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)imageDidFinishedDownloadWithMessage:(id)arg1 type:(int)arg2;
- (void)pageController:(id)arg1 didTransitionToObject:(id)arg2;
- (void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3;
- (void)onDelAllMsg:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2;
- (void)onMsgImgDataLogicCheckedWithPre:(BOOL)arg1 Next:(BOOL)arg2;
- (void)onMsgImgDataLogicLoadOKWithLast:(id)arg1 Next:(id)arg2;
- (void)editWithToolbarFrame:(struct CGRect)arg1 chatName:(id)arg2 msgId:(id)arg3;
- (void)doEdit;
- (id)_genPreviewItemWithMessage:(id)arg1;
- (void)openWith;
- (id)getCurrentPreviewItem;
- (void)setupPageController;
- (void)showPreviewItem:(id)arg1 targetFrame:(struct CGRect)arg2;
- (void)show;
- (void)preLoadImageToCache;
- (void)_updatePreviewList;
- (void)_initPreviewList;
- (void)_initDataLogic;
- (void)_preloadVideoOfMessageData:(id)arg1;
- (void)dealloc;
- (id)initWithChatContact:(id)arg1 InitialSelectedMessage:(id)arg2 AndOrder:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

