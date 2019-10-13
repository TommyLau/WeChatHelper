//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

@class MMImageView, MMLockView, MMOutlineButton, NSTextField, NSView;

@interface MMLockViewController : MMViewController
{
    int _lockType;
    MMOutlineButton *_openMacHelperButton;
    MMImageView *_iconImageView;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    NSView *_lockContainerView;
    MMLockView *_lockView;
    unsigned long long _unlockCount;
}

@property(nonatomic) unsigned long long unlockCount; // @synthesize unlockCount=_unlockCount;
@property(nonatomic) __weak MMLockView *lockView; // @synthesize lockView=_lockView;
@property(nonatomic) __weak NSView *lockContainerView; // @synthesize lockContainerView=_lockContainerView;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak MMOutlineButton *openMacHelperButton; // @synthesize openMacHelperButton=_openMacHelperButton;
@property(nonatomic) int lockType; // @synthesize lockType=_lockType;
- (void).cxx_destruct;
- (void)updateTitleDesc:(id)arg1;
- (void)openMacHelperOnPhone;
- (void)setupOpenMacHelperButton;
- (void)setupDescriptionLabel;
- (void)setupTitleLabel;
- (void)setupVibrantView;
- (void)setupLockContainerView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

