//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class AFHTTPSessionManager, MMButton, MMOpenIMCustomDetail, NSImageView, NSTrackingArea;

@interface MMContactIndictorButtonView : NSView
{
    CDUnknownBlockType _onButtonClick;
    MMButton *_button;
    NSImageView *_img;
    MMButton *_indictor;
    MMOpenIMCustomDetail *_data;
    NSTrackingArea *_trackingArea;
    AFHTTPSessionManager *_downloadMgr;
}

@property(retain, nonatomic) AFHTTPSessionManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) MMOpenIMCustomDetail *data; // @synthesize data=_data;
@property(retain, nonatomic) MMButton *indictor; // @synthesize indictor=_indictor;
@property(retain, nonatomic) NSImageView *img; // @synthesize img=_img;
@property(retain, nonatomic) MMButton *button; // @synthesize button=_button;
@property(copy, nonatomic) CDUnknownBlockType onButtonClick; // @synthesize onButtonClick=_onButtonClick;
- (void).cxx_destruct;
- (void)setupDownloadMgr;
- (void)proxySettingsDidChange:(id)arg1;
- (void)updateTrackingAreaWithRect:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)onDescButtonClick:(id)arg1;
- (void)updateUI:(id)arg1 title:(id)arg2;
- (void)updateFont;
- (void)dealloc;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

