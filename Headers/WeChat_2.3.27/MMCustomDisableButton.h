//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@interface MMCustomDisableButton : NSButton
{
    BOOL _isPressed;
    CDUnknownBlockType _enabledActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType enabledActionBlock; // @synthesize enabledActionBlock=_enabledActionBlock;
@property(nonatomic) BOOL isPressed; // @synthesize isPressed=_isPressed;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

