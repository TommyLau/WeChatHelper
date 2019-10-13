//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMButton.h"

@class NSColor, NSTrackingArea;

@interface MMTrackingButton : MMButton
{
    NSColor *m_backgroundColor;
    NSTrackingArea *_trackingArea;
    NSColor *_trackingBackgroundColor;
}

@property(retain, nonatomic) NSColor *trackingBackgroundColor; // @synthesize trackingBackgroundColor=_trackingBackgroundColor;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setupTrackingArea;
- (id)initWithFrame:(struct CGRect)arg1;

@end
