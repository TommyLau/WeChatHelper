//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMMouseDetectImageView, NSEvent;

@protocol MMMouseDetectImageViewDelegate <NSObject>

@optional
- (void)mouseDetectImageView:(MMMouseDetectImageView *)arg1 onMouseUp:(NSEvent *)arg2;
- (void)mouseDetectImageView:(MMMouseDetectImageView *)arg1 onMouseExit:(NSEvent *)arg2;
- (void)mouseDetectImageView:(MMMouseDetectImageView *)arg1 onMouseEntered:(NSEvent *)arg2;
@end

