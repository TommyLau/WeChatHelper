//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WeNoteBulletInfo : NSObject
{
    BOOL _checked;
    unsigned int _type;
    WeNoteBulletInfo *_perviousInfo;
    WeNoteBulletInfo *_nextInfo;
}

@property(retain, nonatomic) WeNoteBulletInfo *nextInfo; // @synthesize nextInfo=_nextInfo;
@property(retain, nonatomic) WeNoteBulletInfo *perviousInfo; // @synthesize perviousInfo=_perviousInfo;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
- (void).cxx_destruct;

@end

