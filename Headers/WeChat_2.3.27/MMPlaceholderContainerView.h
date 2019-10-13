//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MMPlaceholderTextField, NSImageView;

@interface MMPlaceholderContainerView : NSView
{
    MMPlaceholderTextField *_placeholderTextField;
    NSImageView *_imageView;
}

@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMPlaceholderTextField *placeholderTextField; // @synthesize placeholderTextField=_placeholderTextField;
- (void).cxx_destruct;
- (struct CGRect)rectForPlaceholderString;
- (void)resignSearch;
- (void)startSearch;
- (void)mouseDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
