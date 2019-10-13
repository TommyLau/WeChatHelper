//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WNNoteFavItemBase.h"

@class NSString;

@interface WNNoteLocationItem : WNNoteFavItemBase
{
    BOOL _downloaded;
    int _width;
    int _height;
    NSString *_localPath;
    NSString *_poiName;
    NSString *_locationThumbTaskName;
    double _lat;
    double _lng;
    double _scale;
    NSString *_address;
}

@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSString *locationThumbTaskName; // @synthesize locationThumbTaskName=_locationThumbTaskName;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(nonatomic) BOOL downloaded; // @synthesize downloaded=_downloaded;
- (void).cxx_destruct;
- (id)init;

@end

