//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "EmoticonMgrExt.h"

@class MMEmotionPromptView, MMTimer, NSArray, NSMutableArray, NSString, NSTextField;

@interface MMEmotionPromptWindowController : NSWindowController <EmoticonMgrExt>
{
    NSMutableArray *emotionPromptArray;
    long long learnCount;
    unsigned char shouldRecordLearnCount;
    BOOL _shouldMoveAhead;
    BOOL _haveShowPrompt;
    id <MMComposeInputViewDelegate> _composeInputViewDelegate;
    NSTextField *_emotionSelectTips;
    NSArray *_groups;
    MMEmotionPromptView *_emotionPromptView;
    MMTimer *_checkTimer;
    id _mouseEvent;
    CDUnknownBlockType _sendMessageBlock;
}

@property(copy, nonatomic) CDUnknownBlockType sendMessageBlock; // @synthesize sendMessageBlock=_sendMessageBlock;
@property(retain, nonatomic) id mouseEvent; // @synthesize mouseEvent=_mouseEvent;
@property(retain, nonatomic) MMTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(nonatomic) __weak MMEmotionPromptView *emotionPromptView; // @synthesize emotionPromptView=_emotionPromptView;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) __weak NSTextField *emotionSelectTips; // @synthesize emotionSelectTips=_emotionSelectTips;
@property(nonatomic) BOOL haveShowPrompt; // @synthesize haveShowPrompt=_haveShowPrompt;
@property(nonatomic) BOOL shouldMoveAhead; // @synthesize shouldMoveAhead=_shouldMoveAhead;
@property(nonatomic) __weak id <MMComposeInputViewDelegate> composeInputViewDelegate; // @synthesize composeInputViewDelegate=_composeInputViewDelegate;
- (void).cxx_destruct;
- (void)stopHidePromptWindowTimer;
- (void)startHidePromptWindowTimer;
- (void)sendEmotionMessage:(id)arg1;
- (id)searchEmotionPromptWithString:(id)arg1;
- (void)hideWindowAnimated;
- (struct CGPoint)getShowPosition:(id)arg1;
- (void)showEmotionPromptWindowOnView:(id)arg1;
- (void)showToSelectEmotionTips;
- (void)showSelectEmotionTips;
- (void)dealloc;
- (void)windowDidLoad;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

