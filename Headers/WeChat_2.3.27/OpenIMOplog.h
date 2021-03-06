//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface OpenIMOplog : NSObject <WCTTableCoding>
{
    BOOL _isNeedSync;
    unsigned int _oplogType;
    NSString *_oplogId;
    NSData *_oplogBuffer;
}

+ (const struct WCTProperty *)isNeedSync;
+ (const struct WCTProperty *)oplogBuffer;
+ (const struct WCTProperty *)oplogType;
+ (const struct WCTProperty *)oplogId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) BOOL isNeedSync; // @synthesize isNeedSync=_isNeedSync;
@property(retain, nonatomic) NSData *oplogBuffer; // @synthesize oplogBuffer=_oplogBuffer;
@property(nonatomic) unsigned int oplogType; // @synthesize oplogType=_oplogType;
@property(retain, nonatomic) NSString *oplogId; // @synthesize oplogId=_oplogId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

