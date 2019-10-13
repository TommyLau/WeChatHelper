//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMSearchResultItem, NSString, WCContactData;

@interface MMSessionPickerRow : NSObject
{
    BOOL _chosen;
    BOOL _preSelected;
    unsigned long long _type;
    NSString *_title;
    WCContactData *_contact;
    MMSearchResultItem *_searchResultItem;
}

+ (id)createSessionButtonRow;
+ (id)loadingRow;
+ (id)groupRowUnderCreateButtonWithTitle:(id)arg1;
+ (id)groupRowWithTitle:(id)arg1;
@property(retain, nonatomic) MMSearchResultItem *searchResultItem; // @synthesize searchResultItem=_searchResultItem;
@property(nonatomic) BOOL preSelected; // @synthesize preSelected=_preSelected;
@property(nonatomic) BOOL chosen; // @synthesize chosen=_chosen;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

