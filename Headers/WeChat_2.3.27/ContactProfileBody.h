//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ContactProfileBody : NSObject
{
    NSString *_signatureStr;
    NSArray *_keyValues;
    NSArray *_openIMList;
    double _maxKeyLabelLength;
    NSArray *_heights;
}

@property(retain, nonatomic) NSArray *heights; // @synthesize heights=_heights;
@property(nonatomic) double maxKeyLabelLength; // @synthesize maxKeyLabelLength=_maxKeyLabelLength;
@property(retain, nonatomic) NSArray *openIMList; // @synthesize openIMList=_openIMList;
@property(retain, nonatomic) NSArray *keyValues; // @synthesize keyValues=_keyValues;
@property(copy, nonatomic) NSString *signatureStr; // @synthesize signatureStr=_signatureStr;
- (void).cxx_destruct;

@end

