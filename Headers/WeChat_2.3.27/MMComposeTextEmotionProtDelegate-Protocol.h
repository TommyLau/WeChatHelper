//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent;

@protocol MMComposeTextEmotionProtDelegate <NSObject>

@optional
- (BOOL)showEmotionPromptWithKeyEvent:(NSEvent *)arg1;
- (void)closeEmoticonPrompt;
- (void)showEmotionPrompt;
- (void)resetEmotionPrompt;
@end
