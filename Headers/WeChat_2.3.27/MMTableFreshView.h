//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSProgressIndicator;

@interface MMTableFreshView : NSView
{
    NSProgressIndicator *_refreshSpinner;
}

@property(retain, nonatomic) NSProgressIndicator *refreshSpinner; // @synthesize refreshSpinner=_refreshSpinner;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)initSpinner;
- (id)initWithFrame:(struct CGRect)arg1;

@end

