//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, _YYLinkedMap;

@interface YYMemoryCache : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    _YYLinkedMap *_lru;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldRemoveAllObjectsOnMemoryWarning;
    BOOL _shouldRemoveAllObjectsWhenEnteringBackground;
    NSString *_name;
    unsigned long long _countLimit;
    unsigned long long _costLimit;
    double _ageLimit;
    double _autoTrimInterval;
    CDUnknownBlockType _didReceiveMemoryWarningBlock;
    CDUnknownBlockType _didEnterBackgroundBlock;
}

@property(copy) CDUnknownBlockType didEnterBackgroundBlock; // @synthesize didEnterBackgroundBlock=_didEnterBackgroundBlock;
@property(copy) CDUnknownBlockType didReceiveMemoryWarningBlock; // @synthesize didReceiveMemoryWarningBlock=_didReceiveMemoryWarningBlock;
@property BOOL shouldRemoveAllObjectsWhenEnteringBackground; // @synthesize shouldRemoveAllObjectsWhenEnteringBackground=_shouldRemoveAllObjectsWhenEnteringBackground;
@property BOOL shouldRemoveAllObjectsOnMemoryWarning; // @synthesize shouldRemoveAllObjectsOnMemoryWarning=_shouldRemoveAllObjectsOnMemoryWarning;
@property double autoTrimInterval; // @synthesize autoTrimInterval=_autoTrimInterval;
@property double ageLimit; // @synthesize ageLimit=_ageLimit;
@property unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)convertNumber:(unsigned long long)arg1;
- (id)cacheDescription;
- (id)description;
- (void)trimToAge:(double)arg1;
- (void)trimToCost:(unsigned long long)arg1;
- (void)trimToCount:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (BOOL)containsObjectForKey:(id)arg1;
@property BOOL releaseAsynchronously;
@property BOOL releaseOnMainThread;
@property(readonly) unsigned long long totalCost;
@property(readonly) unsigned long long totalCount;
- (void)dealloc;
- (id)init;
- (void)_appDidEnterBackgroundNotification;
- (void)_appDidReceiveMemoryWarningNotification;
- (void)_trimToAge:(double)arg1;
- (void)_trimToCount:(unsigned long long)arg1;
- (void)_trimToCost:(unsigned long long)arg1;
- (void)_trimInBackground;
- (void)_trimRecursively;

@end
