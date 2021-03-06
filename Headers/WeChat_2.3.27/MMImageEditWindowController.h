//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowController.h"

#import "IMessageExt.h"
#import "MMImageEditPalletWindowControllerDelegate.h"
#import "MMImageEditToolbarViewDelegate.h"
#import "MMImageEditViewControllerDelegate.h"

@class MMImageEditPalletWindowController, MMImageEditToolbarView, MMImageEditViewController, NSButton, NSImage, NSString, NSView, NSVisualEffectView;

@interface MMImageEditWindowController : MMWindowController <MMImageEditViewControllerDelegate, IMessageExt, MMImageEditToolbarViewDelegate, MMImageEditPalletWindowControllerDelegate>
{
    BOOL _isClosing;
    MMImageEditViewController *_imageEditViewController;
    NSVisualEffectView *_vibrantView;
    NSView *_containerView;
    NSImage *_backgroundImage;
    NSView *_titlebarContainerView;
    NSButton *_selfCloseButton;
    MMImageEditToolbarView *_toolbarView;
    MMImageEditPalletWindowController *_popoverWindowController;
    struct CGRect _windowRect;
}

@property(retain, nonatomic) MMImageEditPalletWindowController *popoverWindowController; // @synthesize popoverWindowController=_popoverWindowController;
@property(retain, nonatomic) MMImageEditToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property __weak NSButton *selfCloseButton; // @synthesize selfCloseButton=_selfCloseButton;
@property __weak NSView *titlebarContainerView; // @synthesize titlebarContainerView=_titlebarContainerView;
@property(retain, nonatomic) NSImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) BOOL isClosing; // @synthesize isClosing=_isClosing;
@property(nonatomic) __weak NSView *containerView; // @synthesize containerView=_containerView;
@property __weak NSVisualEffectView *vibrantView; // @synthesize vibrantView=_vibrantView;
@property(nonatomic) struct CGRect windowRect; // @synthesize windowRect=_windowRect;
@property(retain, nonatomic) MMImageEditViewController *imageEditViewController; // @synthesize imageEditViewController=_imageEditViewController;
- (void).cxx_destruct;
- (void)onUndoRedoCheckNotification:(id)arg1;
- (void)beginCreateItem:(id)arg1;
- (void)focusItemDidChange:(id)arg1;
- (void)disableEdit;
- (void)setEnableUndo:(BOOL)arg1;
- (void)fontSizeDidChange:(unsigned long long)arg1;
- (void)widthDidChange:(unsigned long long)arg1;
- (void)colorDidChange:(id)arg1;
- (void)showPopoverViewType:(long long)arg1 width:(unsigned long long)arg2 color:(id)arg3;
- (void)showPopoverViewType:(long long)arg1;
- (void)menuExport;
- (void)menuFavorite;
- (void)menuForward;
- (void)menuCopy;
- (id)contextMenu;
- (void)download;
- (void)forward;
- (void)shrink;
- (void)magnify;
- (void)tailor;
- (void)undo;
- (void)graphTypeDidChange:(long long)arg1;
- (void)onDelAllMsg:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2;
- (void)doSomethingWhenLocked;
- (void)doSomethingWhenUserLogout;
- (void)toggleEnableShrink:(BOOL)arg1;
- (void)toggleEnableMagnify:(BOOL)arg1;
- (void)hideWindowWithAnimation;
- (void)hideImageEdit;
- (void)exitImageEdit;
- (void)closeWindowWithAnimation;
- (void)stopImageEditSelf;
- (struct CGRect)windowFrameRectOnInitialWithImageSize:(struct CGSize)arg1;
- (void)writeImageToPasteboard:(id)arg1;
- (void)hide;
- (void)captureDidCancel;
- (void)_closeWithBtn:(id)arg1;
- (void)startImageEditWith:(id)arg1 startRect:(struct CGRect)arg2;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

