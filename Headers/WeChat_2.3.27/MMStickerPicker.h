//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt.h"
#import "EmoticonDownloadMgrExt.h"
#import "EmoticonMgrExt.h"
#import "MMStickerCollectionViewControllerDelegate.h"
#import "NSPageControllerDelegate.h"
#import "NSPopoverDelegate.h"

@class MMDivider, MMIgnoreEventView, MMPageControl, MMStickerCollectionViewController, MMStickerPickerEventView, MMStickerPickerToolbar, MMView, NSArray, NSImageView, NSPageController, NSPopover, NSProgressIndicator, NSString, NSTextField, NSView, SwipeDetector;

@interface MMStickerPicker : MMViewController <EmoticonDownloadMgrExt, EmoticonMgrExt, AccountServiceExt, NSPopoverDelegate, NSPageControllerDelegate, MMStickerCollectionViewControllerDelegate>
{
    SwipeDetector *_swipeDetector;
    unsigned char _shouldShowEmoji;
    BOOL _isOpenIMChat;
    BOOL _firstDidLoad;
    BOOL _firstClick;
    CDUnknownBlockType didSelectCallbackBlock;
    CDUnknownBlockType _willCloseCallbackBlock;
    NSPopover *_popover;
    NSArray *_groups;
    NSArray *_pages;
    long long _selectedPageIndex;
    long long _selectedIndexInCurGroup;
    MMDivider *_divider;
    MMStickerPickerToolbar *_toolbarView;
    MMView *_arrowBgView;
    NSView *_pageContentView;
    NSPageController *_pageController;
    MMStickerCollectionViewController *_lastStickerCollectionViewController;
    MMPageControl *_pageControl;
    MMIgnoreEventView *_storeEmoticonLoadingContainerView;
    NSImageView *_storeLoadingImageView;
    NSTextField *_storeLoadingLabel;
    MMIgnoreEventView *_favLoadingContainerView;
    NSProgressIndicator *_favLoadingView;
    NSTextField *_favLoadingLabel;
    MMStickerPickerEventView *_stickerPickerView;
}

+ (id)sharedOpenIMPicker;
+ (id)sharedImageEditPicker;
+ (id)sharedPicker;
@property(nonatomic) BOOL firstClick; // @synthesize firstClick=_firstClick;
@property(nonatomic) BOOL firstDidLoad; // @synthesize firstDidLoad=_firstDidLoad;
@property __weak MMStickerPickerEventView *stickerPickerView; // @synthesize stickerPickerView=_stickerPickerView;
@property __weak NSTextField *favLoadingLabel; // @synthesize favLoadingLabel=_favLoadingLabel;
@property __weak NSProgressIndicator *favLoadingView; // @synthesize favLoadingView=_favLoadingView;
@property __weak MMIgnoreEventView *favLoadingContainerView; // @synthesize favLoadingContainerView=_favLoadingContainerView;
@property __weak NSTextField *storeLoadingLabel; // @synthesize storeLoadingLabel=_storeLoadingLabel;
@property __weak NSImageView *storeLoadingImageView; // @synthesize storeLoadingImageView=_storeLoadingImageView;
@property __weak MMIgnoreEventView *storeEmoticonLoadingContainerView; // @synthesize storeEmoticonLoadingContainerView=_storeEmoticonLoadingContainerView;
@property(retain, nonatomic) MMPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak MMStickerCollectionViewController *lastStickerCollectionViewController; // @synthesize lastStickerCollectionViewController=_lastStickerCollectionViewController;
@property(retain, nonatomic) NSPageController *pageController; // @synthesize pageController=_pageController;
@property(retain, nonatomic) NSView *pageContentView; // @synthesize pageContentView=_pageContentView;
@property(retain, nonatomic) MMView *arrowBgView; // @synthesize arrowBgView=_arrowBgView;
@property(retain, nonatomic) MMStickerPickerToolbar *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(nonatomic) long long selectedIndexInCurGroup; // @synthesize selectedIndexInCurGroup=_selectedIndexInCurGroup;
@property(nonatomic) long long selectedPageIndex; // @synthesize selectedPageIndex=_selectedPageIndex;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
@property(copy, nonatomic) CDUnknownBlockType willCloseCallbackBlock; // @synthesize willCloseCallbackBlock=_willCloseCallbackBlock;
@property(nonatomic) BOOL isOpenIMChat; // @synthesize isOpenIMChat=_isOpenIMChat;
@property(nonatomic) unsigned char shouldShowEmoji; // @synthesize shouldShowEmoji=_shouldShowEmoji;
@property(copy, nonatomic) CDUnknownBlockType didSelectCallbackBlock; // @synthesize didSelectCallbackBlock;
- (void).cxx_destruct;
- (void)shouldShowLoadingView:(id)arg1;
- (void)showfavLoadingView:(unsigned char)arg1;
- (void)storeEmoticonIconDownloadFinished:(id)arg1;
- (void)showStoreLoadingView:(unsigned char)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)isArrangedObjectsEmpty;
- (BOOL)swipeGestureDisabled;
- (void)stickerCollectionViewsScrolled:(id)arg1;
- (void)stickerCollectionViewControlller:(id)arg1 didSelectItemWithEmotionData:(id)arg2;
- (void)pageControllerDidEndLiveTransition:(id)arg1;
- (void)pageControllerWillStartLiveTransition:(id)arg1;
- (struct CGRect)pageController:(id)arg1 frameForObject:(id)arg2;
- (void)pageController:(id)arg1 didTransitionToObject:(id)arg2;
- (void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3;
- (id)pageController:(id)arg1 viewControllerForIdentifier:(id)arg2;
- (id)pageController:(id)arg1 identifierForObject:(id)arg2;
- (void)favoriteEmoticonsChanged;
- (void)installedStickerPacksChanged:(id)arg1;
- (void)_reloadCollection;
- (id)_selectedGroup;
- (void)_scrollToolbarToPageWithPack:(unsigned long long)arg1;
- (void)updateStickerGroupWithIndex:(unsigned long long)arg1;
- (void)setupPageInfo;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)hide;
- (void)toggleInView:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)_makePopoverIfNeeded:(id)arg1;
- (void)onUserLogout;
- (void)onCurrentNetworkLockStateWillChange:(BOOL)arg1;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)_clean;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 shouldShowEmoji:(unsigned char)arg3 isOpenIMChat:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

