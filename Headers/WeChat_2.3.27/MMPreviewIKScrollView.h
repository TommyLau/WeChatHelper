//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RFOverlayScrollView.h"

@interface MMPreviewIKScrollView : RFOverlayScrollView
{
    unsigned char _isScroll;
}

@property(nonatomic) unsigned char isScroll; // @synthesize isScroll=_isScroll;
- (void)scrollClipView:(id)arg1 toPoint:(struct CGPoint)arg2;
- (void)hideScroller;
- (void)scrollWheel:(id)arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

