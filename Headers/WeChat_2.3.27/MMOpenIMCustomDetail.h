//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MMOpenIMCustomDetail : NSObject
{
    int _descType;
    int _action;
    NSString *_icon;
    NSString *_desc;
    NSDictionary *_action_param;
}

@property(retain, nonatomic) NSDictionary *action_param; // @synthesize action_param=_action_param;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) int descType; // @synthesize descType=_descType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end
