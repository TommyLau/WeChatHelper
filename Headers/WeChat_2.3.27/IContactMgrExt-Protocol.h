//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString;

@protocol IContactMgrExt

@optional
- (void)onModifyUserImageWithUrl:(NSString *)arg1 userName:(NSString *)arg2;
- (void)onDeleteContacts:(NSArray *)arg1;
- (void)onModifyStrangerContacts:(NSArray *)arg1;
- (void)onModifyContacts:(NSArray *)arg1;
@end

