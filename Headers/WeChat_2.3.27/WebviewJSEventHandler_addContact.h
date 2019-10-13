//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "MMCGIDelegate.h"

@class NSString;

@interface WebviewJSEventHandler_addContact : WebviewJSEventHandlerBase <MMCGIDelegate>
{
    unsigned int _m_sessionId;
}

@property(nonatomic) unsigned int m_sessionId; // @synthesize m_sessionId=_m_sessionId;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)addContact:(id)arg1;
- (BOOL)getContactDetailInfo:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

