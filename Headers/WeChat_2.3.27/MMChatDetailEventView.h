//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMView.h"

@interface MMChatDetailEventView : MMView
{
    CDUnknownBlockType _mouseUpEventBlock;
    CDUnknownBlockType _doubleMouseUpEventBlock;
    CDUnknownBlockType _rightMouseUpEventBlock;
    CDUnknownBlockType _doubleRightMouseUpEventBlock;
}

@property(copy, nonatomic) CDUnknownBlockType doubleRightMouseUpEventBlock; // @synthesize doubleRightMouseUpEventBlock=_doubleRightMouseUpEventBlock;
@property(copy, nonatomic) CDUnknownBlockType rightMouseUpEventBlock; // @synthesize rightMouseUpEventBlock=_rightMouseUpEventBlock;
@property(copy, nonatomic) CDUnknownBlockType doubleMouseUpEventBlock; // @synthesize doubleMouseUpEventBlock=_doubleMouseUpEventBlock;
@property(copy, nonatomic) CDUnknownBlockType mouseUpEventBlock; // @synthesize mouseUpEventBlock=_mouseUpEventBlock;
- (void).cxx_destruct;
- (void)mouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

