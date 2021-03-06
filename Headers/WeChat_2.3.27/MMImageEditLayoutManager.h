//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutManager.h"

#import "NSTextViewDelegate.h"

@class MMImageEditSelectedTextView, NSBezierPath, NSString;

@interface MMImageEditLayoutManager : NSLayoutManager <NSTextViewDelegate>
{
    MMImageEditSelectedTextView *_textView;
    NSBezierPath *_strokePath;
}

@property(retain, nonatomic) NSBezierPath *strokePath; // @synthesize strokePath=_strokePath;
@property(nonatomic) MMImageEditSelectedTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

