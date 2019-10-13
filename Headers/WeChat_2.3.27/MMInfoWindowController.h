//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowController.h"

#import "NSWindowDelegate.h"

@class MMDevice, MMOutlineButton, MMUpgradeHistoryLogger, NSData, NSString, NSView, RFOverlayScrollView;

@interface MMInfoWindowController : MMWindowController <NSWindowDelegate>
{
    MMDevice *_device;
    MMUpgradeHistoryLogger *_hLogger;
    NSString *_netStatus;
    RFOverlayScrollView *_scrollView;
    NSView *_bgContainer;
    MMOutlineButton *_cpInfoButton;
    NSView *_keyValueRow;
    NSView *_contentView;
    NSData *_kvRowPrototype;
    double _currHeight;
    NSString *_infoString;
}

@property(retain, nonatomic) NSString *infoString; // @synthesize infoString=_infoString;
@property(nonatomic) double currHeight; // @synthesize currHeight=_currHeight;
@property(retain, nonatomic) NSData *kvRowPrototype; // @synthesize kvRowPrototype=_kvRowPrototype;
@property __weak NSView *contentView; // @synthesize contentView=_contentView;
@property(retain) NSView *keyValueRow; // @synthesize keyValueRow=_keyValueRow;
@property(retain, nonatomic) MMOutlineButton *cpInfoButton; // @synthesize cpInfoButton=_cpInfoButton;
@property __weak NSView *bgContainer; // @synthesize bgContainer=_bgContainer;
@property __weak RFOverlayScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *netStatus; // @synthesize netStatus=_netStatus;
@property(retain, nonatomic) MMUpgradeHistoryLogger *hLogger; // @synthesize hLogger=_hLogger;
@property(retain, nonatomic) MMDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)doCody;
- (void)afnReachabilityTest;
- (id)getScreenInfo;
- (id)getPreVersion;
- (id)getSystemVersion;
- (id)getVersionInfo;
- (id)genInfoItemWithKey:(id)arg1 value:(id)arg2;
- (void)addInfoItemWithKey:(id)arg1 value:(id)arg2;
- (void)resetContainerView;
- (void)setupInfo;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

