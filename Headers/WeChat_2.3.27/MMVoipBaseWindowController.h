//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "CAAnimationDelegate.h"
#import "IVOIPExt.h"
#import "IVOIPModeSwitchExt.h"
#import "IVOIPVideoDeviceDelegate.h"
#import "NSWindowDelegate.h"

@class AVAudioPlayer, MMTimer, MMVoipBaseWindow, MessageData, NSString, WCContactData;

@interface MMVoipBaseWindowController : NSWindowController <NSWindowDelegate, CAAnimationDelegate, IVOIPExt, IVOIPModeSwitchExt, IVOIPVideoDeviceDelegate>
{
    BOOL _hasHanguped;
    BOOL _isSelfSwitchToVoice;
    BOOL _hasStopBellSound;
    BOOL _forceToVoice;
    BOOL _isConnectOK;
    BOOL _isMute;
    BOOL _isEndCall;
    BOOL _isCaller;
    int _status;
    int _viewInitMode;
    unsigned int _mStartTalkingTime;
    int _orienOffset;
    int _currentMode;
    id <MMVoipBaseWindowControllerDelegate> _delegate;
    MessageData *_message;
    WCContactData *_contact;
    MMTimer *_actingTimer;
    MMTimer *_netStatusUpdateTimer;
    AVAudioPlayer *_player;
    double _forceToRotateDegrees;
    double _lastDegrees;
}

@property(nonatomic) BOOL isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) int currentMode; // @synthesize currentMode=_currentMode;
@property(nonatomic) double lastDegrees; // @synthesize lastDegrees=_lastDegrees;
@property(nonatomic) int orienOffset; // @synthesize orienOffset=_orienOffset;
@property(nonatomic) double forceToRotateDegrees; // @synthesize forceToRotateDegrees=_forceToRotateDegrees;
@property(nonatomic) unsigned int mStartTalkingTime; // @synthesize mStartTalkingTime=_mStartTalkingTime;
@property(nonatomic) BOOL isEndCall; // @synthesize isEndCall=_isEndCall;
@property(nonatomic) BOOL isMute; // @synthesize isMute=_isMute;
@property(nonatomic) BOOL isConnectOK; // @synthesize isConnectOK=_isConnectOK;
@property(nonatomic) BOOL forceToVoice; // @synthesize forceToVoice=_forceToVoice;
@property(nonatomic) int viewInitMode; // @synthesize viewInitMode=_viewInitMode;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) BOOL hasStopBellSound; // @synthesize hasStopBellSound=_hasStopBellSound;
@property(nonatomic) BOOL isSelfSwitchToVoice; // @synthesize isSelfSwitchToVoice=_isSelfSwitchToVoice;
@property(nonatomic) BOOL hasHanguped; // @synthesize hasHanguped=_hasHanguped;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) MMTimer *netStatusUpdateTimer; // @synthesize netStatusUpdateTimer=_netStatusUpdateTimer;
@property(retain, nonatomic) MMTimer *actingTimer; // @synthesize actingTimer=_actingTimer;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MessageData *message; // @synthesize message=_message;
@property(nonatomic) __weak id <MMVoipBaseWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)formVOIPUserNotification;
- (void)formVOIPMessageWhenCallFromMyself:(BOOL)arg1;
- (void)renderOnOppsiteRenderLayer:(id)arg1 Degree:(float)arg2;
- (void)renderOnPreviewRenderLayerWith:(id)arg1;
- (void)rotateLayerToFillWindow;
- (int)getVideoOrientationWithDegrees:(double)arg1;
- (void)setAudioDeviceMute;
- (void)autoUpdateMainStatusStringAndDotViewImage;
- (void)acceptVoipInvite;
- (void)switchToVoiceChat;
- (void)endCall;
- (void)cancelCall;
- (void)cancelMakeControlViewSubViewVisiable;
- (void)delayMakeControlViewSubViewsHidden;
- (void)makeControlViewSubViewsHidden:(BOOL)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)isInitVideoMode;
- (BOOL)isVideoMode;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)layoutButtonContainerAnimate;
- (void)layoutVoiceModeAnimateDotViewWithMode:(int)arg1;
- (void)layoutCallTimeLabelWithMode:(int)arg1;
- (void)layoutNameLabelWithContact:(id)arg1 andMode:(int)arg2;
- (void)layoutHDAvatarWithContact:(id)arg1 andMode:(int)arg2;
- (void)LayoutNameLabelAndCallTimeLabelWithAnimateAvatar:(id)arg1 andMode:(int)arg2;
- (void)layoutAvatarWithContact:(id)arg1 andMode:(int)arg2;
- (void)layoutActionBtnWithMode:(int)arg1;
- (void)updateNetStatus;
- (void)clearNetStatusUpdateTimer;
- (void)startNetStatusTimerToUpdateNetSatus;
- (void)clearActingTimer;
- (void)startActingTimerToUpdateStatusLabelAndDotView;
- (void)showCurrentTips:(id)arg1;
- (void)hidePreviousTips;
- (void)layoutTipsLabelWithMode:(int)arg1;
- (void)layoutRelatedControlsWithContact:(id)arg1 andSetCurrentMode:(int)arg2;
- (void)makeHangUpBtnUnavailable;
- (void)makeRotateBtnUnavailable:(BOOL)arg1;
- (void)bringSublayerToFront:(id)arg1;
- (void)swapPreviewRenderLayerAndOppsiteRenderLayer;
- (void)changeMovableLayerFrameWhenRotated;
- (void)changeRenderLayerDisplayFromW16H9ToW9H16OnFullScreen;
- (void)changeRenderLayerDisplayFromW9H16ToW16H9OnFullScreen;
- (void)changeRenderLayerDisplayNotOnFullScreen;
- (void)playEndingSound;
- (void)resumePlaySound;
- (void)pausePlaySound;
- (void)stopPlaySound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)fadeOutWindowAnimate;
- (void)adjustFrameOriginDependOnWechatMainWindow;
- (void)setWindowAndContentFrame:(struct CGRect)arg1;
- (void)orderFrontWindow;
- (void)hideWindow;
- (void)didFinishClosing:(BOOL)arg1;
- (void)willStartClosing:(BOOL)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)closeWindowAnimated:(BOOL)arg1;
- (void)showWindowAnimated:(BOOL)arg1;
- (void)loadContent;
- (id)title;
- (struct CGSize)minimumSize;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) MMVoipBaseWindow *window; // @dynamic window;

@end

