//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CAShapeLayer, NSColor, NSDictionary, NSFont, NSTextField;

@interface MMBadgeOverlayView : NSView
{
    int _style;
    unsigned long long _number;
    NSColor *_backgroundColor;
    CAShapeLayer *_shapeLayer;
    NSTextField *_numberTextField;
    NSDictionary *_textAttrs;
    NSFont *_font;
}

@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSDictionary *textAttrs; // @synthesize textAttrs=_textAttrs;
@property(retain, nonatomic) NSTextField *numberTextField; // @synthesize numberTextField=_numberTextField;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long number; // @synthesize number=_number;
@property(nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_updateNumberTextField;
- (void)_updateDotRed;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)allowsVibrancy;
- (BOOL)wantsDefaultClipping;
- (id)initWithFrame:(struct CGRect)arg1;

@end

