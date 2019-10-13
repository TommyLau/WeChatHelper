//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchTableCellView.h"

@class MMTextField, NSImageView;

@interface MMSearchChatLogTableCellView : MMSearchTableCellView
{
    NSImageView *_thumbnailImageView;
    MMTextField *_titleLabel;
    MMTextField *_descriptionLabel;
    CDUnknownBlockType _didLeftMouseUpBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didLeftMouseUpBlock; // @synthesize didLeftMouseUpBlock=_didLeftMouseUpBlock;
@property(retain, nonatomic) MMTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (id)makeDescLabelAttrString:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)populateWithResultItem:(id)arg1 keyword:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

