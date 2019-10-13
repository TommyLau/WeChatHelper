//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSPasteboardItemDataProvider.h"

@class FavLocationItem, FavProductItem, FavStreamVideoItem, FavTVItem, FavURLItem, FavoritesDataItemSource, NSArray, NSString;

@interface FavoritesItemDataField : NSObject <NSPasteboardItemDataProvider, NSCoding, NSCopying>
{
    BOOL _useMidImage;
    int _dataType;
    int _cdnEncryVer;
    unsigned int _thumbSize;
    unsigned int _dataSize;
    unsigned int _duration;
    int _dataStatus;
    int _illegalType;
    unsigned int _srcMsgLocalId;
    unsigned int _srcMsgCreateTime;
    NSString *_dataFmt;
    NSString *_sourceDataID;
    NSString *_localDataID;
    NSString *_htmlId;
    NSString *_dataTitle;
    NSString *_dataDescription;
    NSString *_cdnThumbUrl;
    NSString *_cdnThumbKey;
    NSString *_cdnDataUrl;
    NSString *_cdnDataKey;
    double _thumbWidth;
    double _thumbHeight;
    NSString *_streamWebUrl;
    NSString *_streamDataUrl;
    NSString *_streamLowbandUrl;
    NSString *_ext;
    NSString *_streamId;
    NSString *_thumbMd5;
    NSString *_thumbHead256Md5;
    NSString *_dataMd5;
    NSString *_dataHead256Md5;
    NSString *_sourceThumbPath;
    NSString *_sourceDataPath;
    NSString *_dataSrcName;
    NSString *_dataSrcTime;
    FavoritesDataItemSource *_dataSrc;
    FavLocationItem *_locItem;
    FavURLItem *_urlItem;
    FavProductItem *_productItem;
    FavTVItem *_tvItem;
    double _nodeHeight;
    FavStreamVideoItem *_streamVideoItem;
    NSString *_srcChatName;
    NSArray *_dataList;
    NSString *_breadPathWhenNested;
    double _imageWidth;
    double _imageHeight;
    NSString *_statExtStr;
    NSString *_authKey;
    NSString *_tpThumbUrl;
}

+ (id)GetPathByMd5:(id)arg1 isThumb:(BOOL)arg2 DataFmt:(id)arg3;
+ (id)dataTypeStringWithType:(unsigned int)arg1;
+ (id)unArchivedFavoritesItemDataFieldFromPasteboardItem:(id)arg1;
@property(retain, nonatomic) NSString *tpThumbUrl; // @synthesize tpThumbUrl=_tpThumbUrl;
@property(copy, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
@property(nonatomic) BOOL useMidImage; // @synthesize useMidImage=_useMidImage;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr=_statExtStr;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSString *breadPathWhenNested; // @synthesize breadPathWhenNested=_breadPathWhenNested;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) unsigned int srcMsgCreateTime; // @synthesize srcMsgCreateTime=_srcMsgCreateTime;
@property(nonatomic) unsigned int srcMsgLocalId; // @synthesize srcMsgLocalId=_srcMsgLocalId;
@property(retain, nonatomic) NSString *srcChatName; // @synthesize srcChatName=_srcChatName;
@property(nonatomic) int illegalType; // @synthesize illegalType=_illegalType;
@property(retain, nonatomic) FavStreamVideoItem *streamVideoItem; // @synthesize streamVideoItem=_streamVideoItem;
@property(nonatomic) double nodeHeight; // @synthesize nodeHeight=_nodeHeight;
@property(retain, nonatomic) FavTVItem *tvItem; // @synthesize tvItem=_tvItem;
@property(retain, nonatomic) FavProductItem *productItem; // @synthesize productItem=_productItem;
@property(retain, nonatomic) FavURLItem *urlItem; // @synthesize urlItem=_urlItem;
@property(retain, nonatomic) FavLocationItem *locItem; // @synthesize locItem=_locItem;
@property(retain, nonatomic) FavoritesDataItemSource *dataSrc; // @synthesize dataSrc=_dataSrc;
@property(retain, nonatomic) NSString *dataSrcTime; // @synthesize dataSrcTime=_dataSrcTime;
@property(retain, nonatomic) NSString *dataSrcName; // @synthesize dataSrcName=_dataSrcName;
@property(retain, nonatomic) NSString *sourceDataPath; // @synthesize sourceDataPath=_sourceDataPath;
@property(retain, nonatomic) NSString *sourceThumbPath; // @synthesize sourceThumbPath=_sourceThumbPath;
@property(retain, nonatomic) NSString *dataHead256Md5; // @synthesize dataHead256Md5=_dataHead256Md5;
@property(retain, nonatomic) NSString *dataMd5; // @synthesize dataMd5=_dataMd5;
@property(retain, nonatomic) NSString *thumbHead256Md5; // @synthesize thumbHead256Md5=_thumbHead256Md5;
@property(retain, nonatomic) NSString *thumbMd5; // @synthesize thumbMd5=_thumbMd5;
@property(nonatomic) int dataStatus; // @synthesize dataStatus=_dataStatus;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *streamLowbandUrl; // @synthesize streamLowbandUrl=_streamLowbandUrl;
@property(retain, nonatomic) NSString *streamDataUrl; // @synthesize streamDataUrl=_streamDataUrl;
@property(retain, nonatomic) NSString *streamWebUrl; // @synthesize streamWebUrl=_streamWebUrl;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) unsigned int thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) double thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(nonatomic) double thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(nonatomic) int cdnEncryVer; // @synthesize cdnEncryVer=_cdnEncryVer;
@property(retain, nonatomic) NSString *cdnDataKey; // @synthesize cdnDataKey=_cdnDataKey;
@property(retain, nonatomic) NSString *cdnDataUrl; // @synthesize cdnDataUrl=_cdnDataUrl;
@property(retain, nonatomic) NSString *cdnThumbKey; // @synthesize cdnThumbKey=_cdnThumbKey;
@property(retain, nonatomic) NSString *cdnThumbUrl; // @synthesize cdnThumbUrl=_cdnThumbUrl;
@property(retain, nonatomic) NSString *dataDescription; // @synthesize dataDescription=_dataDescription;
@property(retain, nonatomic) NSString *dataTitle; // @synthesize dataTitle=_dataTitle;
@property(retain, nonatomic) NSString *htmlId; // @synthesize htmlId=_htmlId;
@property(retain, nonatomic) NSString *localDataID; // @synthesize localDataID=_localDataID;
@property(retain, nonatomic) NSString *sourceDataID; // @synthesize sourceDataID=_sourceDataID;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (BOOL)needUploadData;
- (BOOL)needUploadThumb;
- (void)CountMd5:(id)arg1 isThumb:(BOOL)arg2;
- (BOOL)hasNoDataOrThumb;
- (id)GetDataImageData;
- (id)GetDataImage;
- (id)checkCDNItemThumbDataID;
- (id)checkCDNItemDataID;
- (void)ThumbToCheckCdnItem:(id)arg1;
- (void)DataToCheckCdnItem:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)GenFavItemDataClientIDByCreateTime:(long long)arg1 Index:(int)arg2;
- (BOOL)IsDataFileDownloaded;
- (id)GetDataFilePath;
- (id)GetDataClientMediaID;
- (id)GetPreviewThumbImage;
- (id)GetThumbImage;
- (id)GetThumbClientMediaID;
- (id)GetPreviewThumbFilePath;
- (id)GetThumbFilePath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)fixDownloadedPath:(id)arg1 isThumb:(BOOL)arg2;
- (id)downloadedTmpThumbFilePath;
- (id)downloadedTmpDataFilePath;
- (id)savingImageFileNameWithLocalDataID;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (void)writeToPasteboardItem:(id)arg1;
- (id)thumbTaskID;
- (id)dataTaskID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

