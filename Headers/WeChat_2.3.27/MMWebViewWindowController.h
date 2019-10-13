//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowController.h"

#import "BaseWebViewControllerDelegate.h"
#import "NSWindowDelegate.h"

@class MMWebViewController, MMWindow, NSString;

@interface MMWebViewWindowController : MMWindowController <NSWindowDelegate, BaseWebViewControllerDelegate>
{
    BOOL _initialShowing;
    BOOL _isFullScreen;
    NSString *_windowId;
    MMWebViewController *_webView;
}

@property(retain, nonatomic) MMWebViewController *webView; // @synthesize webView=_webView;
@property(nonatomic) BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) NSString *windowId; // @synthesize windowId=_windowId;
@property(nonatomic) BOOL initialShowing; // @synthesize initialShowing=_initialShowing;
- (void).cxx_destruct;
- (void)showTitleWithValue:(double)arg1;
- (void)showTitle:(BOOL)arg1;
- (void)updateTitle:(id)arg1;
- (BOOL)shouldUpdateWindowTitle;
- (BOOL)shouldUpdateTitle;
- (id)currentTitle;
- (void)manualSetupMainMenuToSupportCopyAndPaste;
- (void)closeWebViewWindowWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)showWebViewWithDataItem:(id)arg1;
- (void)setupEventHandler;
- (void)saveWindowOrigin;
- (void)saveWindowSize;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)onApplicationDidResignActive:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) MMWindow *window; // @dynamic window;

@end

