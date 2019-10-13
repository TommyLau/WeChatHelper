//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface WebviewJSEventHandlerFacade : NSObject
{
    id <WebviewJSEventHandlerBaseDelegate> _m_delegate;
    NSMutableDictionary *_m_functionCallExtraDataMap;
    NSMutableDictionary *_m_functionHandlers;
    NSDictionary *_m_functionMap;
}

@property(retain, nonatomic) NSDictionary *m_functionMap; // @synthesize m_functionMap=_m_functionMap;
@property(retain, nonatomic) NSMutableDictionary *m_functionHandlers; // @synthesize m_functionHandlers=_m_functionHandlers;
@property(retain, nonatomic) NSMutableDictionary *m_functionCallExtraDataMap; // @synthesize m_functionCallExtraDataMap=_m_functionCallExtraDataMap;
@property(nonatomic) __weak id <WebviewJSEventHandlerBaseDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (id)getExtraDataForEvent:(id)arg1;
- (id)extraDataForNextJSEventCalled:(id)arg1;
- (id)getExistedHandlerForFunction:(id)arg1;
- (id)handlerForFunction:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (BOOL)canHandleJSEvent:(id)arg1;
- (id)init;

@end

