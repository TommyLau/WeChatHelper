//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WeNoteFileInfo : NSObject
{
    unsigned long long _fileSize;
    NSString *_fileName;
    NSString *_fileDescription;
}

@property(retain, nonatomic) NSString *fileDescription; // @synthesize fileDescription=_fileDescription;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (void).cxx_destruct;

@end
