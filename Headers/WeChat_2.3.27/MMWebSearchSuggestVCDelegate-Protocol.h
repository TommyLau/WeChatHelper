//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSView;

@protocol MMWebSearchSuggestVCDelegate <NSObject>

@optional
- (void)showInView:(NSView *)arg1 withRelativeRect:(struct CGRect)arg2 preferredEdge:(unsigned int)arg3;
- (BOOL)isSuggestionPopoverShown;
- (void)hideSuggestionPopover;
- (void)didChooseSuggestionKeyword:(NSString *)arg1;
@end

