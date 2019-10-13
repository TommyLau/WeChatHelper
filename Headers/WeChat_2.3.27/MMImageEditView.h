//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MMImageEditItem, MMImageEditUndoManager, NSColor, NSImageView, NSMutableArray, NSString, NSTrackingArea;

@interface MMImageEditView : NSView
{
    unsigned char _shouldResponseMouseMove;
    NSColor *_normalStrokeColor;
    double _normalStrokeWidth;
    long long _graphTypeShowed;
    long long _graphType;
    NSImageView *_backgroundView;
    NSMutableArray *_itemArray;
    MMImageEditItem *_focusItem;
    NSTrackingArea *_trackingArea;
    NSString *_textItemContentBeforeEdit;
    MMImageEditUndoManager *_undoManager;
}

@property(retain, nonatomic) MMImageEditUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) NSString *textItemContentBeforeEdit; // @synthesize textItemContentBeforeEdit=_textItemContentBeforeEdit;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) unsigned char shouldResponseMouseMove; // @synthesize shouldResponseMouseMove=_shouldResponseMouseMove;
@property(nonatomic) __weak MMImageEditItem *focusItem; // @synthesize focusItem=_focusItem;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(nonatomic) __weak NSImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long graphType; // @synthesize graphType=_graphType;
@property(nonatomic) long long graphTypeShowed; // @synthesize graphTypeShowed=_graphTypeShowed;
@property(nonatomic) double normalStrokeWidth; // @synthesize normalStrokeWidth=_normalStrokeWidth;
@property(nonatomic) NSColor *normalStrokeColor; // @synthesize normalStrokeColor=_normalStrokeColor;
- (void).cxx_destruct;
- (void)imageEditTailorComplete:(id)arg1;
- (void)imageEditTailorCancel:(id)arg1;
- (unsigned long long)updateCursorTypeWhenRotateWithPoint:(struct CGPoint)arg1;
- (void)redrawWithScale:(double)arg1;
- (void)resetPalletView;
- (id)getLastOperateItem:(long long)arg1;
- (void)clean;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)redoWidth:(id)arg1 width:(double)arg2 toWidth:(double)arg3;
- (void)undoWidth:(id)arg1 width:(double)arg2 toWidth:(double)arg3;
- (void)redoColor:(id)arg1 color:(id)arg2 toColor:(id)arg3;
- (void)undoColor:(id)arg1 color:(id)arg2 toColor:(id)arg3;
- (void)redoEditTextViewBasedItem:(id)arg1 fromString:(id)arg2 toString:(id)arg3;
- (void)undoEditTextViewBasedItem:(id)arg1 fromString:(id)arg2 toString:(id)arg3;
- (void)redoMove:(id)arg1 point:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (void)undoMove:(id)arg1 point:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (void)redoMove:(id)arg1 moveVector:(struct CGPoint)arg2;
- (void)undoMove:(id)arg1 moveVector:(struct CGPoint)arg2;
- (void)redoRotate:(id)arg1 degrees:(double)arg2 toDegrees:(double)arg3;
- (void)undoRotate:(id)arg1 degrees:(double)arg2 toDegrees:(double)arg3;
- (void)redoItem:(id)arg1 resizeType:(unsigned long long)arg2 fixedPoint:(struct CGPoint)arg3 changePoint:(struct CGPoint)arg4 toFixedPoint:(struct CGPoint)arg5 toChangePoint:(struct CGPoint)arg6;
- (void)undoItem:(id)arg1 resizeType:(unsigned long long)arg2 fixedPoint:(struct CGPoint)arg3 changePoint:(struct CGPoint)arg4 toFixedPoint:(struct CGPoint)arg5 toChangePoint:(struct CGPoint)arg6;
- (void)setUndoManagerEnable:(BOOL)arg1;
- (BOOL)redo;
- (BOOL)undo;
- (unsigned long long)cursorTypeOfResizeOperation:(BOOL)arg1 ControlPointType:(unsigned long long)arg2;
- (BOOL)itemIsBottomLevel:(id)arg1;
- (BOOL)itemIsTextViewBaseItem:(id)arg1;
- (BOOL)itemIsEmoticonViewBaseItem:(id)arg1;
- (void)unfocus;
- (void)removeFocusItem;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)newItem;
- (BOOL)handelMoveWithMouseDown:(id)arg1;
- (BOOL)handelRotateWithMouseDown:(id)arg1;
- (BOOL)handelEndResizeWithMouseDown:(id)arg1;
- (BOOL)handelBeginResizeWithMouseDown:(id)arg1;
- (BOOL)handelHorizontalResizeWithMouseDown:(id)arg1;
- (BOOL)handelVerticalResizeWithMouseDown:(id)arg1;
- (BOOL)handelCornerResizeWithMouseDown:(id)arg1;
- (void)handelCreateItemWithMouseDown:(id)arg1;
- (BOOL)updateFocusItem:(id *)arg1 CursorType:(unsigned long long *)arg2 byMousePoint:(struct CGPoint)arg3;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

