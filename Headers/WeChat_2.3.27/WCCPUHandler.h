//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCCPUHandler : NSObject
{
    unsigned long long m_tickTok;
    BOOL m_stopMonitorAverage;
    BOOL m_bLastOverEighty;
    float m_foregroundOverEightyTotalSec;
    float m_backgroundOverEightyTotalSec;
    float m_backgroundTotalCPU;
    float m_backgroundTotalSec;
    BOOL m_background;
    BOOL m_backgroundCPUTooSmall;
}

+ (float)getCurrentCpuUsage;
- (void)cultivateBackgroundCpu:(float)arg1 periodTime:(float)arg2;
- (BOOL)cultivateCpuUsage:(float)arg1 periodTime:(float)arg2;
- (BOOL)isBackgroundCPUTooSmall;
- (void)stopTrackAverageCPU;
- (void)startTrackAverageCPU;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (id)init;

@end
