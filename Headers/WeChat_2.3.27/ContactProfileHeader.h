//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString;

@interface ContactProfileHeader : NSObject
{
    unsigned int _gender;
    NSAttributedString *_nickName;
    NSAttributedString *_wechatId;
}

@property(nonatomic) unsigned int gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSAttributedString *wechatId; // @synthesize wechatId=_wechatId;
@property(copy, nonatomic) NSAttributedString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;

@end

