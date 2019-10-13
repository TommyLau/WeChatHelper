//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "IMMMessageVideoServiceExt.h"
#import "MMFavoriteFileServiceExt.h"

@class MMButton, MMCircularProgressView, MMImageView, MMQLPreviewItem, NSString, TKStateMachine;

@interface MMPreviewVideoPlayerView : NSView <IMMMessageVideoServiceExt, MMFavoriteFileServiceExt>
{
    BOOL _shouldPlayVideo;
    TKStateMachine *_stateMachine;
    MMQLPreviewItem *_previewItem;
    MMImageView *_thumbnailImageView;
    MMButton *_actionButton;
    MMImageView *_progressBgView;
    MMCircularProgressView *_progressView;
}

@property(retain, nonatomic) MMCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MMImageView *progressBgView; // @synthesize progressBgView=_progressBgView;
@property(retain, nonatomic) MMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) MMQLPreviewItem *previewItem; // @synthesize previewItem=_previewItem;
@property(retain, nonatomic) TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) BOOL shouldPlayVideo; // @synthesize shouldPlayVideo=_shouldPlayVideo;
- (void).cxx_destruct;
- (void)favoriteFileService:(id)arg1 didFailDownloadWithFavItemData:(id)arg2 type:(int)arg3 taskID:(id)arg4;
- (void)favoriteFileService:(id)arg1 didFinishDownloadWithFavItemData:(id)arg2 type:(int)arg3 filePath:(id)arg4 taskID:(id)arg5;
- (void)favoriteFileService:(id)arg1 downloaded:(int)arg2 of:(int)arg3 WithFavItemData:(id)arg4 type:(int)arg5;
- (void)messageVideoService:(id)arg1 didCancelDownloadWithMessage:(id)arg2;
- (void)messageVideoService:(id)arg1 didFailDownloadWithMessage:(id)arg2;
- (void)messageVideoService:(id)arg1 didFinishDownloadWithMessage:(id)arg2;
- (void)messageVideoService:(id)arg1 downloaded:(int)arg2 of:(int)arg3 withMessage:(id)arg4;
- (void)retryDownload:(id)arg1;
- (void)onPlayButtonClicked:(id)arg1;
- (void)onDownloadButtonClicked:(id)arg1;
- (void)_setupWithDataField;
- (void)_setupWithFav;
- (void)_setupWithMessage;
- (void)setupWithPreviewItem:(id)arg1;
- (BOOL)startPlayVideoWith:(BOOL)arg1;
- (void)addPlayView;
- (void)appendVideoPlayerView;
- (void)_setupVideoPlayer;
- (id)getVideoFilePath;
- (void)checkVideoViewBeforePlay;
- (BOOL)isAVPlayerViewSupported;
- (void)_fireStateEvent:(id)arg1;
- (void)_setupStateMachine;
- (void)_layoutProgressBgView;
- (void)_layoutActionButton;
- (void)_layoutThumbnailImageView;
- (id)defaultVideoThumbnail;
- (void)dismissThumbnailImageView:(id)arg1;
- (void)_setupSubViews;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

