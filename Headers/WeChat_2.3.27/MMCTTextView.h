//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MMCTTextViewSession, NSAttributedString, NSColor, NSFont, NSMutableArray, NSString, NSTextField, NSTrackingArea;

@interface MMCTTextView : NSView
{
    BOOL _selectable;
    BOOL _isForceDrawLine;
    id <MMCTTextViewDelegate> _delegate;
    NSFont *_font;
    NSColor *_textColor;
    NSColor *_backgroundColor;
    unsigned long long _alignment;
    unsigned long long _lineBreakMode;
    unsigned long long _numberOfLines;
    NSString *_string;
    NSAttributedString *_attributedString;
    CDUnknownBlockType _gotMisdirectedKeyDownCallback;
    NSMutableArray *_linkRanges;
    NSMutableArray *_linkStrings;
    MMCTTextViewSession *_session;
    NSTrackingArea *_trackingArea;
    NSTextField *_accessibleTextField;
    struct CGPoint _originOfTail;
    struct _NSRange _selectedRange;
}

+ (struct CGSize)suggestedSizeWithAttributedString:(id)arg1 widthConstraint:(double)arg2;
+ (BOOL)_hasQQEmoji:(struct __CFArray *)arg1;
@property(retain, nonatomic) NSTextField *accessibleTextField; // @synthesize accessibleTextField=_accessibleTextField;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) MMCTTextViewSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableArray *linkStrings; // @synthesize linkStrings=_linkStrings;
@property(retain, nonatomic) NSMutableArray *linkRanges; // @synthesize linkRanges=_linkRanges;
@property(copy, nonatomic) CDUnknownBlockType gotMisdirectedKeyDownCallback; // @synthesize gotMisdirectedKeyDownCallback=_gotMisdirectedKeyDownCallback;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) BOOL isForceDrawLine; // @synthesize isForceDrawLine=_isForceDrawLine;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(nonatomic) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) struct CGPoint originOfTail; // @synthesize originOfTail=_originOfTail;
@property(nonatomic) unsigned long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(nonatomic) __weak id <MMCTTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyDown:(id)arg1;
- (void)copy:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (id)handleMenuEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)clearSelectedRange;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct __CTLine *)findLineInLocation:(struct CGPoint)arg1;
- (BOOL)locationInLinkRange:(struct CGPoint)arg1;
- (void)updateMouseCursorWithEvent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)updateTrackingAreas;
- (struct CGSize)suggestedSizeWithWidthConstraint:(double)arg1;
- (id)attributes;
- (void)cleanup;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)_calLastLineOriginOfTail:(struct __CTLine *)arg1 lastLineY:(double)arg2;
- (struct CGPoint)drawLastTruncatingLine:(struct CGContext *)arg1 line:(struct __CTLine *)arg2 point:(struct CGPoint)arg3 count:(unsigned long long)arg4 preLineOffsetY:(double)arg5;
- (void)drawTextWithContext:(struct CGContext *)arg1 lines:(struct __CFArray *)arg2 lineOrigins:(struct CGPoint *)arg3 count:(unsigned long long)arg4;
- (void)drawSelectionBackgroundWithLines:(struct __CFArray *)arg1 lineOrigins:(struct CGPoint *)arg2 count:(unsigned long long)arg3;
- (void)drawLinesWithContext:(struct CGContext *)arg1 frame:(struct __CTFrame *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
