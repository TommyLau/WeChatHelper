//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMView.h"

@interface MMPageControlUnit : MMView
{
    BOOL _selected;
    CDUnknownBlockType _mouseUpEventBlock;
    unsigned long long _index;
}

@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) CDUnknownBlockType mouseUpEventBlock; // @synthesize mouseUpEventBlock=_mouseUpEventBlock;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
