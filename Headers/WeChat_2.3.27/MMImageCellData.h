//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSImage;

@interface MMImageCellData : NSObject
{
    unsigned long long _imageIdentifier;
    NSImage *_image;
    NSData *_imageData;
}

@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
- (void).cxx_destruct;

@end

