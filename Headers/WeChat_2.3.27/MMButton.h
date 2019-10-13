//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSColor;

@interface MMButton : NSButton
{
    BOOL _isNoCellMask;
    int _vibrancyMode;
    NSColor *_textColor;
    double _mmCornerRadius;
    double _mmBorderWidth;
    NSColor *_mmBorderColor;
    NSColor *_mmBackgroundColor;
    CDUnknownBlockType _didLeftMouseDownBlock;
    CDUnknownBlockType _didLeftMouseUpBlock;
    CDUnknownBlockType _enabledActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType enabledActionBlock; // @synthesize enabledActionBlock=_enabledActionBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeftMouseUpBlock; // @synthesize didLeftMouseUpBlock=_didLeftMouseUpBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeftMouseDownBlock; // @synthesize didLeftMouseDownBlock=_didLeftMouseDownBlock;
@property(nonatomic) BOOL isNoCellMask; // @synthesize isNoCellMask=_isNoCellMask;
@property(retain, nonatomic) NSColor *mmBackgroundColor; // @synthesize mmBackgroundColor=_mmBackgroundColor;
@property(retain, nonatomic) NSColor *mmBorderColor; // @synthesize mmBorderColor=_mmBorderColor;
@property(nonatomic) double mmBorderWidth; // @synthesize mmBorderWidth=_mmBorderWidth;
@property(nonatomic) double mmCornerRadius; // @synthesize mmCornerRadius=_mmCornerRadius;
@property(nonatomic) int vibrancyMode; // @synthesize vibrancyMode=_vibrancyMode;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setEnabled:(BOOL)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;

@end

