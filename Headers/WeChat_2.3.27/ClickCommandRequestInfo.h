//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ClickCommandRequestInfo : NSObject
{
    NSString *_m_magic;
    NSString *_m_id;
    NSString *_m_key;
    NSString *_m_status;
    NSString *_m_content;
    long long _m_type;
    long long _m_actionType;
}

@property(nonatomic) long long m_actionType; // @synthesize m_actionType=_m_actionType;
@property(nonatomic) long long m_type; // @synthesize m_type=_m_type;
@property(retain, nonatomic) NSString *m_content; // @synthesize m_content=_m_content;
@property(retain, nonatomic) NSString *m_status; // @synthesize m_status=_m_status;
@property(retain, nonatomic) NSString *m_key; // @synthesize m_key=_m_key;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id=_m_id;
@property(retain, nonatomic) NSString *m_magic; // @synthesize m_magic=_m_magic;
- (void).cxx_destruct;
- (id)description;

@end

