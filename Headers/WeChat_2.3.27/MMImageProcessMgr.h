//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface MMImageProcessMgr : MMService <MMService>
{
    id <MMMessageCellViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MMMessageCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)imageResizeToShowWithMessage:(id)arg1 image:(id)arg2 savePath:(id)arg3;
- (id)imageResizeToShowWithMessage:(id)arg1 data:(id)arg2 savePath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

