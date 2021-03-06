//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTColumnCoding.h"
#import "WCTTableCoding.h"

@class ChatRoomData, ChatRoomDetail, MMOpenIMInfo, NSArray, NSData, NSDictionary, NSLock, NSString, SubscriptBrandInfo, WCContactDataPackedInfo;

@interface WCContactData : NSObject <WCTTableCoding, WCTColumnCoding>
{
    NSLock *m_lockForChatRoomData;
    BOOL m_isShowRedDot;
    unsigned int m_uiConType;
    unsigned int m_uiCertificationFlag;
    unsigned int m_uiSex;
    unsigned int m_uiType;
    unsigned int m_uiImgKey;
    unsigned int m_uiChatRoomStatus;
    unsigned int m_uiChatState;
    unsigned int m_uiExtKey;
    unsigned int m_uiImgKeyAtLastGet;
    unsigned int m_uiQQUin;
    unsigned int m_uiFriendScene;
    unsigned int m_uiWeiboFlag;
    unsigned int m_uiNeedUpdate;
    unsigned int m_uiWCFlag;
    unsigned int m_uiBrandSubscriptionSettings;
    unsigned int m_uiDraftTime;
    unsigned int m_uiUpdateTime;
    unsigned int m_uiChatRoomVersion;
    unsigned int m_uiChatRoomMaxCount;
    WCContactDataPackedInfo *m_packedInfo;
    ChatRoomData *m_chatRoomData;
    NSString *m_nsUsrName;
    NSString *m_nsNickName;
    NSString *m_nsFullPY;
    NSString *m_nsShortPY;
    NSString *m_nsRemark;
    NSString *m_nsRemarkPYFull;
    NSString *m_nsRemarkPYShort;
    NSString *m_nsImgStatus;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
    NSString *m_nsHeadHDMd5;
    NSString *m_nsChatRoomMemList;
    NSString *m_nsDraft;
    NSString *m_nsBrandIconUrl;
    NSString *m_nsGoogleContactName;
    NSString *m_nsMobileIdentify;
    NSString *m_nsQQNickName;
    NSString *m_nsQQRemark;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    NSString *m_nsHDImgStatus;
    NSString *m_nsCertificationInfo;
    NSString *m_nsWeiboAddress;
    NSString *m_nsWeiboNickName;
    NSString *m_nsOwner;
    NSString *m_nsWCBGImgObjectID;
    NSString *m_pcWCBGImgID;
    NSString *m_nsExternalInfo;
    NSString *m_nsBrandSubscriptConfigUrl;
    SubscriptBrandInfo *m_subBrandInfo;
    NSString *m_nsChatRoomData;
    NSString *m_nsTagList;
    NSString *m_nsDescription;
    NSString *m_nsDescriptionPY;
    NSString *m_nsCardUrl;
    NSString *m_nsAliasName;
    NSString *m_nsEncodeUserName;
    NSString *m_nsAntispamTicket;
    MMOpenIMInfo *m_openIMInfo;
    NSString *m_nsChatRoomDesc;
    ChatRoomDetail *m_chatRoomDetail;
    NSData *_m_dtUsrImg;
    NSString *_m_nsDisplayNamePY;
    NSDictionary *_m_externalInfoJSONCache;
    NSString *_m_nsNormalizeNamePY;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (BOOL)IsReservedGroupTopic:(id)arg1;
+ (id)getMicroBlogUsrDisplayName:(id)arg1;
+ (void)initialize;
+ (void)_initPBTableOfWCContactData;
+ (const struct WCTProperty *)m_openIMInfo;
+ (const struct WCTProperty *)m_packedInfo;
+ (const struct WCTProperty *)m_uiChatRoomMaxCount;
+ (const struct WCTProperty *)m_uiChatRoomVersion;
+ (const struct WCTProperty *)m_nsEncodeUserName;
+ (const struct WCTProperty *)m_nsAliasName;
+ (const struct WCTProperty *)m_nsGoogleContactName;
+ (const struct WCTProperty *)m_nsBrandIconUrl;
+ (const struct WCTProperty *)m_nsDraft;
+ (const struct WCTProperty *)m_nsChatRoomDesc;
+ (const struct WCTProperty *)m_uiChatRoomStatus;
+ (const struct WCTProperty *)m_nsChatRoomMemList;
+ (const struct WCTProperty *)m_nsHeadHDMd5;
+ (const struct WCTProperty *)m_nsHeadHDImgUrl;
+ (const struct WCTProperty *)m_nsHeadImgUrl;
+ (const struct WCTProperty *)m_uiImgKey;
+ (const struct WCTProperty *)m_nsImgStatus;
+ (const struct WCTProperty *)m_uiType;
+ (const struct WCTProperty *)m_uiSex;
+ (const struct WCTProperty *)m_uiCertificationFlag;
+ (const struct WCTProperty *)m_nsRemarkPYShort;
+ (const struct WCTProperty *)m_nsRemarkPYFull;
+ (const struct WCTProperty *)m_nsRemark;
+ (const struct WCTProperty *)m_nsShortPY;
+ (const struct WCTProperty *)m_nsFullPY;
+ (const struct WCTProperty *)m_nsNickName;
+ (const struct WCTProperty *)m_uiConType;
+ (const struct WCTProperty *)m_nsUsrName;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (id)contactsFromPasteboard:(id)arg1;
+ (id)GetContactWithUserName:(id)arg1;
@property(retain, nonatomic) NSString *m_nsNormalizeNamePY; // @synthesize m_nsNormalizeNamePY=_m_nsNormalizeNamePY;
@property(retain, nonatomic) NSDictionary *m_externalInfoJSONCache; // @synthesize m_externalInfoJSONCache=_m_externalInfoJSONCache;
@property(copy, nonatomic) NSString *m_nsDisplayNamePY; // @synthesize m_nsDisplayNamePY=_m_nsDisplayNamePY;
@property(retain, nonatomic) NSData *m_dtUsrImg; // @synthesize m_dtUsrImg=_m_dtUsrImg;
@property(retain, nonatomic) ChatRoomDetail *m_chatRoomDetail; // @synthesize m_chatRoomDetail;
@property(retain, nonatomic) NSString *m_nsChatRoomDesc; // @synthesize m_nsChatRoomDesc;
@property(retain, nonatomic) MMOpenIMInfo *m_openIMInfo; // @synthesize m_openIMInfo;
@property(retain, nonatomic) NSString *m_nsAntispamTicket; // @synthesize m_nsAntispamTicket;
@property(nonatomic) unsigned int m_uiChatRoomMaxCount; // @synthesize m_uiChatRoomMaxCount;
@property(nonatomic) unsigned int m_uiChatRoomVersion; // @synthesize m_uiChatRoomVersion;
@property(retain, nonatomic) NSString *m_nsEncodeUserName; // @synthesize m_nsEncodeUserName;
@property(retain, nonatomic) NSString *m_nsAliasName; // @synthesize m_nsAliasName;
@property(retain, nonatomic) NSString *m_nsCardUrl; // @synthesize m_nsCardUrl;
@property(retain, nonatomic) NSString *m_nsDescriptionPY; // @synthesize m_nsDescriptionPY;
@property(retain, nonatomic) NSString *m_nsDescription; // @synthesize m_nsDescription;
@property(retain, nonatomic) NSString *m_nsTagList; // @synthesize m_nsTagList;
@property(nonatomic) unsigned int m_uiUpdateTime; // @synthesize m_uiUpdateTime;
@property(nonatomic) unsigned int m_uiDraftTime; // @synthesize m_uiDraftTime;
@property(nonatomic) BOOL m_isShowRedDot; // @synthesize m_isShowRedDot;
@property(copy, nonatomic) NSString *m_nsChatRoomData; // @synthesize m_nsChatRoomData;
@property(retain, nonatomic) SubscriptBrandInfo *m_subBrandInfo; // @synthesize m_subBrandInfo;
@property(nonatomic) unsigned int m_uiBrandSubscriptionSettings; // @synthesize m_uiBrandSubscriptionSettings;
@property(copy, nonatomic) NSString *m_nsBrandSubscriptConfigUrl; // @synthesize m_nsBrandSubscriptConfigUrl;
@property(copy, nonatomic) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo;
@property(retain, nonatomic) NSString *m_pcWCBGImgID; // @synthesize m_pcWCBGImgID;
@property(nonatomic) unsigned int m_uiWCFlag; // @synthesize m_uiWCFlag;
@property(copy, nonatomic) NSString *m_nsWCBGImgObjectID; // @synthesize m_nsWCBGImgObjectID;
@property(nonatomic) unsigned int m_uiNeedUpdate; // @synthesize m_uiNeedUpdate;
@property(copy, nonatomic) NSString *m_nsOwner; // @synthesize m_nsOwner;
@property(nonatomic) unsigned int m_uiWeiboFlag; // @synthesize m_uiWeiboFlag;
@property(copy, nonatomic) NSString *m_nsWeiboNickName; // @synthesize m_nsWeiboNickName;
@property(copy, nonatomic) NSString *m_nsWeiboAddress; // @synthesize m_nsWeiboAddress;
@property(nonatomic) unsigned int m_uiFriendScene; // @synthesize m_uiFriendScene;
@property(retain, nonatomic) NSString *m_nsCertificationInfo; // @synthesize m_nsCertificationInfo;
@property(copy, nonatomic) NSString *m_nsHDImgStatus; // @synthesize m_nsHDImgStatus;
@property(copy, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(copy, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(copy, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(copy, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(retain, nonatomic) NSString *m_nsQQRemark; // @synthesize m_nsQQRemark;
@property(retain, nonatomic) NSString *m_nsQQNickName; // @synthesize m_nsQQNickName;
@property(nonatomic) unsigned int m_uiQQUin; // @synthesize m_uiQQUin;
@property(retain, nonatomic) NSString *m_nsMobileIdentify; // @synthesize m_nsMobileIdentify;
@property(nonatomic) unsigned int m_uiImgKeyAtLastGet; // @synthesize m_uiImgKeyAtLastGet;
@property(nonatomic) unsigned int m_uiExtKey; // @synthesize m_uiExtKey;
@property(nonatomic) unsigned int m_uiChatState; // @synthesize m_uiChatState;
@property(retain, nonatomic) NSString *m_nsGoogleContactName; // @synthesize m_nsGoogleContactName;
@property(retain, nonatomic) NSString *m_nsBrandIconUrl; // @synthesize m_nsBrandIconUrl;
@property(retain, nonatomic) NSString *m_nsDraft; // @synthesize m_nsDraft;
@property(nonatomic) unsigned int m_uiChatRoomStatus; // @synthesize m_uiChatRoomStatus;
@property(retain, nonatomic) NSString *m_nsChatRoomMemList; // @synthesize m_nsChatRoomMemList;
@property(retain, nonatomic) NSString *m_nsHeadHDMd5; // @synthesize m_nsHeadHDMd5;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(nonatomic) unsigned int m_uiImgKey; // @synthesize m_uiImgKey;
@property(retain, nonatomic) NSString *m_nsImgStatus; // @synthesize m_nsImgStatus;
@property(nonatomic) unsigned int m_uiType; // @synthesize m_uiType;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
@property(nonatomic) unsigned int m_uiCertificationFlag; // @synthesize m_uiCertificationFlag;
@property(retain, nonatomic) NSString *m_nsRemarkPYShort; // @synthesize m_nsRemarkPYShort;
@property(retain, nonatomic) NSString *m_nsRemarkPYFull; // @synthesize m_nsRemarkPYFull;
@property(retain, nonatomic) NSString *m_nsRemark; // @synthesize m_nsRemark;
@property(retain, nonatomic) NSString *m_nsShortPY; // @synthesize m_nsShortPY;
@property(retain, nonatomic) NSString *m_nsFullPY; // @synthesize m_nsFullPY;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(nonatomic) unsigned int m_uiConType; // @synthesize m_uiConType;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(retain, nonatomic) ChatRoomData *m_chatRoomData; // @synthesize m_chatRoomData;
- (void).cxx_destruct;
- (id)archivedWCTValue;
@property(retain, nonatomic) WCContactDataPackedInfo *m_packedInfo; // @synthesize m_packedInfo;
- (id)avatarHDUrl;
- (id)avatarUrl;
- (id)getGroupDisplayName;
- (id)getOpenIMCustomItem;
- (id)getOpenIMCustomDescInfo;
- (BOOL)hasContactDisplayUsrName;
- (id)getContactDisplayUsrName;
- (id)getIndiviualContactNoRemarkDisplayName;
- (id)getIndiviualContactDisplayName;
- (id)getContactDisplayName;
- (id)getRemark;
- (BOOL)isChatStatusNotifyOpen;
- (BOOL)needShowUnreadCountOnSession;
- (BOOL)IsShake;
- (BOOL)IsLbs;
- (BOOL)isNeedUpdateUsrImg;
- (BOOL)hasUsrImg;
- (void)parseUsrImgFromModContact:(id)arg1;
- (id)getGroupShowName;
- (BOOL)isUserInGroup:(id)arg1;
- (BOOL)isMatchType:(unsigned int)arg1 conType:(unsigned int)arg2;
- (BOOL)isTopSession;
- (BOOL)isGroupOwner;
- (BOOL)isGroupMemberContact;
- (BOOL)isGroupChat;
- (BOOL)isLocalHardCodeContact;
- (BOOL)isOfficialPluginContact;
- (BOOL)isLocalizedPluginContact;
- (BOOL)isPluginContact;
- (BOOL)isFlagBrand;
- (BOOL)isBrandContact;
- (BOOL)isOpenIMContact;
- (BOOL)isWeixinTeamContact;
- (BOOL)isQQMailContact;
- (BOOL)isTencentNewsContact;
- (BOOL)isFaved;
- (BOOL)isMMChat;
- (BOOL)isMMContact;
- (BOOL)isBlack;
- (BOOL)isSelf;
- (id)description;
@property(readonly, nonatomic) NSArray *m_nsTagListArray;
- (id)init;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (BOOL)hasBrandMenuItem;
- (id)getHistoryRecordUrl;
- (BOOL)canShareThisBrandContact;
- (BOOL)canSendMessageToThisBrandContact;
- (id)enterPriseMainBrandUserName;
- (id)getExternalInfoDictionary;
- (int)getBrandContactType;
- (unsigned int)getEnterpriseSubBrandChildType;
- (BOOL)isEnterpriseDisableBrand;
- (BOOL)isEnterpriseWebSubBrand;
- (BOOL)isEnterpriseChatSubBrand;
- (BOOL)isEnterpriseSubBrand;
- (BOOL)isEnterpriseMainBrand;
- (BOOL)isEnterpriseBrand;
- (BOOL)isSubscriptionContact;
- (BOOL)isServiceContact;
- (void)writeToPasteboard:(id)arg1;
- (void)writeToPasteboardItem:(id)arg1;
- (id)avatarHDCacheKey;
- (id)avatarCacheKey;
- (id)displayRegion;
- (id)localizedAddScene;
- (BOOL)allowSendingMessage;
- (id)getContactDisplayNamePrivary;
- (id)displayNamePinYin;
- (id)displayName;
- (BOOL)shouldUpdateGroupDetail;
- (BOOL)shouldUpdateGroupMemberDetail;
- (BOOL)shouldShowGroupChatDisplayName;
- (id)groupDisplayName;
- (void)setGroupDisplayNameInGroup:(id)arg1 forUserName:(id)arg2 userDisplayName:(id)arg3;
- (id)groupChatNickNameInGroup:(id)arg1;
- (BOOL)containsMember:(id)arg1;
@property(readonly, nonatomic) unsigned long long groupMemberCount;
- (id)groupChatDisplayNameInGroup:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

