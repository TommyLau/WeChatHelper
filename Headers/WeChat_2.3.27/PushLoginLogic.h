//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PushLoginURLCGI;

@interface PushLoginLogic : NSObject
{
    PushLoginURLCGI *_pushLoginCGI;
    CDUnknownBlockType _didConfirmPushLoginLogicBlock;
    CDUnknownBlockType _didFailedPushLoginLogicBlock;
    CDUnknownBlockType _didCancelPushLoginLogicBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didCancelPushLoginLogicBlock; // @synthesize didCancelPushLoginLogicBlock=_didCancelPushLoginLogicBlock;
@property(copy, nonatomic) CDUnknownBlockType didFailedPushLoginLogicBlock; // @synthesize didFailedPushLoginLogicBlock=_didFailedPushLoginLogicBlock;
@property(copy, nonatomic) CDUnknownBlockType didConfirmPushLoginLogicBlock; // @synthesize didConfirmPushLoginLogicBlock=_didConfirmPushLoginLogicBlock;
@property(retain, nonatomic) PushLoginURLCGI *pushLoginCGI; // @synthesize pushLoginCGI=_pushLoginCGI;
- (void).cxx_destruct;
- (void)stopCGI;
- (void)sendLoginConfirmReqeust;
- (void)cleanupCGICallbacks;
- (void)setupCGICallbacks;
- (void)setupPushLoginCGI;
- (void)dealloc;
- (id)init;

@end

