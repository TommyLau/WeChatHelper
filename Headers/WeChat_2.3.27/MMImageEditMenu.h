//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

#import "NSWindowDelegate.h"

@class NSEvent, NSMutableArray, NSString, NSView;

@interface MMImageEditMenu : NSPanel <NSWindowDelegate>
{
    NSEvent *_localMouseDownEventMonitor;
    NSEvent *_globalMouseDownEventMonitor;
    NSMutableArray *_itemArray;
    NSView *_superView;
    double _cornerRadius;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) __weak NSView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) NSEvent *globalMouseDownEventMonitor; // @synthesize globalMouseDownEventMonitor=_globalMouseDownEventMonitor;
@property(retain, nonatomic) NSEvent *localMouseDownEventMonitor; // @synthesize localMouseDownEventMonitor=_localMouseDownEventMonitor;
- (void).cxx_destruct;
- (void)updateItemFrame;
- (void)updateMenuSize;
- (struct CGSize)menuSize;
- (void)unregisterMouseDownEventMonitor;
- (void)registerMouseDownEventMonitor;
- (void)cancelTracking;
- (void)popUpMenuAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)addItem:(id)arg1;
- (void)configAppearanceAndLayout;
- (void)setupRoundRectBackgroundView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

