//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface ExposeRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUserName:1;
    unsigned int hasScene:1;
    unsigned int hasType:1;
    unsigned int hasAlbumPhotoId:1;
    unsigned int hasAlbumType:1;
    unsigned int hasSnsId:1;
    unsigned int hasExposeContent:1;
    unsigned int scene;
    unsigned int type;
    unsigned int albumType;
    BaseRequest *baseRequest;
    NSString *userName;
    NSString *albumPhotoId;
    unsigned long long snsId;
    NSString *exposeContent;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetExposeContent:) NSString *exposeContent; // @synthesize exposeContent;
@property(readonly, nonatomic) BOOL hasExposeContent; // @synthesize hasExposeContent;
@property(nonatomic, setter=SetSnsId:) unsigned long long snsId; // @synthesize snsId;
@property(readonly, nonatomic) BOOL hasSnsId; // @synthesize hasSnsId;
@property(nonatomic, setter=SetAlbumType:) unsigned int albumType; // @synthesize albumType;
@property(readonly, nonatomic) BOOL hasAlbumType; // @synthesize hasAlbumType;
@property(retain, nonatomic, setter=SetAlbumPhotoId:) NSString *albumPhotoId; // @synthesize albumPhotoId;
@property(readonly, nonatomic) BOOL hasAlbumPhotoId; // @synthesize hasAlbumPhotoId;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

