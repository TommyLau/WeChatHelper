//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MMImageEditTailorToolBarViewDelegate.h"
#import "MMImageEditTailorViewDelegate.h"
#import "NSSharingServiceDelegate.h"

@class MMCenteringClipView, MMImageEditScrollView, MMImageEditTailorMaskView, MMImageEditTailorToolBarView, MMImageEditTailorView, MMImageEditView, NSArray, NSImage, NSImageView, NSObject<OS_dispatch_queue>, NSString, NSView;

@interface MMImageEditViewController : NSViewController <MMImageEditTailorViewDelegate, MMImageEditTailorToolBarViewDelegate, NSSharingServiceDelegate>
{
    unsigned char _isBeginTailor;
    CDUnknownBlockType _viewDidLoadBlock;
    MMImageEditScrollView *_backgroundImageScrollView;
    MMImageEditView *_editView;
    id <MMImageEditViewControllerDelegate> _imageEditViewControllerDelegate;
    NSImage *_backgroundImage;
    NSImageView *_backgroundImageView;
    MMCenteringClipView *_backgroundImageClipView;
    MMImageEditTailorView *_tailorView;
    MMImageEditTailorMaskView *_tailorMaskView;
    MMImageEditTailorToolBarView *_tailorToolBarView;
    NSArray *_selectedUserNames;
    NSView *_imageContailerView;
    NSObject<OS_dispatch_queue> *_compressQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *compressQueue; // @synthesize compressQueue=_compressQueue;
@property(retain, nonatomic) NSView *imageContailerView; // @synthesize imageContailerView=_imageContailerView;
@property(copy, nonatomic) NSArray *selectedUserNames; // @synthesize selectedUserNames=_selectedUserNames;
@property(nonatomic) unsigned char isBeginTailor; // @synthesize isBeginTailor=_isBeginTailor;
@property(retain, nonatomic) MMImageEditTailorToolBarView *tailorToolBarView; // @synthesize tailorToolBarView=_tailorToolBarView;
@property(retain, nonatomic) MMImageEditTailorMaskView *tailorMaskView; // @synthesize tailorMaskView=_tailorMaskView;
@property(retain, nonatomic) MMImageEditTailorView *tailorView; // @synthesize tailorView=_tailorView;
@property(retain, nonatomic) MMCenteringClipView *backgroundImageClipView; // @synthesize backgroundImageClipView=_backgroundImageClipView;
@property(retain, nonatomic) NSImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak NSImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) __weak id <MMImageEditViewControllerDelegate> imageEditViewControllerDelegate; // @synthesize imageEditViewControllerDelegate=_imageEditViewControllerDelegate;
@property(retain, nonatomic) MMImageEditView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) MMImageEditScrollView *backgroundImageScrollView; // @synthesize backgroundImageScrollView=_backgroundImageScrollView;
@property(copy, nonatomic) CDUnknownBlockType viewDidLoadBlock; // @synthesize viewDidLoadBlock=_viewDidLoadBlock;
- (void).cxx_destruct;
- (void)imageEditTailorComplete:(id)arg1;
- (void)imageEditTailorCancel:(id)arg1;
- (struct CGSize)getImageRealShowSizeWithImage:(id)arg1 size:(struct CGSize)arg2;
- (void)genHDImageWithScale:(double)arg1 complete:(CDUnknownBlockType)arg2;
- (id)genImage;
- (void)replaceImageWith:(id)arg1;
- (void)copyImageWith:(id)arg1;
- (void)setupImageScaleModWith:(struct CGSize)arg1;
- (void)cancelTailor;
- (struct CGRect)getTailorRect;
- (struct CGPoint)findTailorToolBarViewPosition;
- (void)selectionDidChange;
- (void)didConfirmSelection;
- (void)editCompleteImage:(CDUnknownBlockType)arg1;
- (void)sharingMenuAction:(id)arg1;
- (id)sharingMenu;
- (void)favorite;
- (void)complete;
- (void)download;
- (void)forward;
- (void)shrink;
- (void)magnify;
- (void)tailor;
- (void)undo;
- (void)widthDidChange:(unsigned long long)arg1;
- (void)colorDidChange:(id)arg1;
- (void)graphTypeDidChange:(long long)arg1;
- (void)setBackgroundImage:(id)arg1 size:(struct CGSize)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
