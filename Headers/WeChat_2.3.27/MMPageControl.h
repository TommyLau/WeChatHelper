//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMView.h"

@class NSMutableArray;

@interface MMPageControl : MMView
{
    unsigned long long _count;
    unsigned long long _selectedIndex;
    CDUnknownBlockType _didClickAtIndexBlock;
    NSMutableArray *_pageControlUnits;
}

@property(retain, nonatomic) NSMutableArray *pageControlUnits; // @synthesize pageControlUnits=_pageControlUnits;
@property(copy, nonatomic) CDUnknownBlockType didClickAtIndexBlock; // @synthesize didClickAtIndexBlock=_didClickAtIndexBlock;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)mouseDragged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
