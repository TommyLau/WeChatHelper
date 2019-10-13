//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowController.h"

#import "NSWindowDelegate.h"

@class NSString, NSTextField, NSVisualEffectView;

@interface WhatsNewWindowController : MMWindowController <NSWindowDelegate>
{
    NSTextField *_versionLabel;
    NSTextField *_descriptionLabel;
    NSVisualEffectView *_visualEffectView;
}

@property(nonatomic) __weak NSVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak NSTextField *versionLabel; // @synthesize versionLabel=_versionLabel;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)closeWindow:(id)arg1;
- (void)setupDescription;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
