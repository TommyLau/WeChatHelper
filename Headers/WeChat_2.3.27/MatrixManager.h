//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MatrixPluginListenerDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, WCCrashBlockMonitorConfig, WCCrashBlockMonitorPlugin;

@interface MatrixManager : NSObject <MatrixPluginListenerDelegate>
{
    id <MatrixManagerDelegate> _delegate;
    id <MatrixManagerReportDelegate> _matrixReportDelegate;
    WCCrashBlockMonitorConfig *_cbMonitorConfig;
    NSObject<OS_dispatch_queue> *_reporterQueue;
    NSMutableDictionary *_reportIssueDict;
    WCCrashBlockMonitorPlugin *_plugin;
}

+ (unsigned long long)strategyReportEnvForTag:(id)arg1;
+ (void)strategyUpdateUploadCnt:(int)arg1 forTag:(id)arg2;
+ (BOOL)startegyIsMaxUploadCntForTag:(id)arg1;
+ (BOOL)strategyIsAutoReportForTag:(id)arg1;
+ (void)updateStrategy:(id)arg1 forTag:(id)arg2;
+ (void)setUinForStrategy:(unsigned int)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) WCCrashBlockMonitorPlugin *plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) NSMutableDictionary *reportIssueDict; // @synthesize reportIssueDict=_reportIssueDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reporterQueue; // @synthesize reporterQueue=_reporterQueue;
@property(retain, nonatomic) WCCrashBlockMonitorConfig *cbMonitorConfig; // @synthesize cbMonitorConfig=_cbMonitorConfig;
@property(nonatomic) __weak id <MatrixManagerReportDelegate> matrixReportDelegate; // @synthesize matrixReportDelegate=_matrixReportDelegate;
@property(nonatomic) __weak id <MatrixManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getReportCachePath;
- (id)getReportURL;
- (id)getReportHost;
- (id)getReportUserName;
- (unsigned int)getReportAppVersion;
- (unsigned int)getReportUin;
- (id)getReportCryptKeyWithVersion:(unsigned int)arg1 withDataSize:(unsigned int)arg2;
- (unsigned int)getReportProductID;
- (BOOL)uploadCustomData:(id)arg1 withTag:(id)arg2 withKey:(id)arg3 withType:(int)arg4;
- (void)p_callCustomIssueDelegate:(id)arg1 success:(BOOL)arg2;
- (void)p_callLagIssueDelegate:(id)arg1 success:(BOOL)arg2;
- (void)p_callCrashIssueDelegate:(id)arg1 success:(BOOL)arg2;
- (void)uploadMatrixIssueCompleted:(BOOL)arg1 withIssueID:(id)arg2;
- (int)getIssueTypeOfMatrixIssue:(id)arg1;
- (BOOL)uploadMatrixIssue:(id)arg1;
- (void)onReportIssue:(id)arg1;
- (void)onDestroy:(id)arg1;
- (void)onStop:(id)arg1;
- (void)onStart:(id)arg1;
- (void)onInit:(id)arg1;
- (id)getCrashBlockPlugin;
- (void)installMatrix;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

