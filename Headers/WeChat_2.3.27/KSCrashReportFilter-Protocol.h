//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol KSCrashReportFilter <NSObject>
- (void)filterReports:(NSArray *)arg1 onCompletion:(void (^)(NSArray *, BOOL, NSError *))arg2;
@end

