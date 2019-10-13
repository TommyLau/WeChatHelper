//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMPreviewWindowController.h"

#import "SDWebImageManagerDelegate.h"

@class MMQLPreviewItem, NSProgressIndicator, NSString;

@interface MMPreviewUrlImageWindowController : MMPreviewWindowController <SDWebImageManagerDelegate>
{
    MMQLPreviewItem *_m_currentPreviewImageItem;
    NSProgressIndicator *_progressIndicator;
}

@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) MMQLPreviewItem *m_currentPreviewImageItem; // @synthesize m_currentPreviewImageItem=_m_currentPreviewImageItem;
- (void).cxx_destruct;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2;
- (void)setupCurrentPreviewItemWithImage:(id)arg1;
- (id)genPreviewItemWithUrl:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)previewImage;
- (void)showUrlImage;
- (void)setupPageController;
- (void)openWith;
- (void)showPreviewItem:(id)arg1 targetFrame:(struct CGRect)arg2;
- (void)show;
- (id)getCurrentPreviewItem;
- (void)windowDidLoad;
- (id)initWithUrls:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

