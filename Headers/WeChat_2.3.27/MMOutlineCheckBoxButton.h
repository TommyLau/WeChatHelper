//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@interface MMOutlineCheckBoxButton : NSButton
{
    BOOL _mmState;
    id _mmTarget;
    SEL _mmAction;
}

@property(nonatomic) SEL mmAction; // @synthesize mmAction=_mmAction;
@property(nonatomic) __weak id mmTarget; // @synthesize mmTarget=_mmTarget;
@property(nonatomic) BOOL mmState; // @synthesize mmState=_mmState;
- (void).cxx_destruct;
- (void)clicked:(id)arg1;
- (long long)state;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setState:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

