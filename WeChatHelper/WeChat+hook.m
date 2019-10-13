//
//  WeChat+hook.m
//  WeChatHelper
//
//  Created by Tommy Lau on 2019/10/13.
//  Copyright © 2019 Tommy Lau. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <objc/runtime.h>
#import <JRSwizzle/JRSwizzle.h>
#import "WeChat+hook.h"

@implementation NSObject (WeChat_hook)

+ (void)hookWeChat {
    [objc_getClass("MessageService") jr_swizzleMethod:NSSelectorFromString(@"FFToNameFavChatZZ:") withMethod:@selector(wch_onRevokeMsg:) error:nil];
}

- (void)wch_onRevokeMsg:(id)msg {
    NSLog(@"++++++++++ Revoke Msg ++++++++++\n");
    /*
    if (msg && [[TKWeChatPluginConfig sharedConfig] preventRevokeEnable]) {
        //      转换群聊的 msg
        NSString *msgContent = [msg substringFromIndex:[msg rangeOfString:@"<sysmsg"].location];
        
        //      xml 转 dict
        NSError *error;
        NSDictionary *msgDict = [XMLReader dictionaryForXMLString:msgContent error:&error];
        
        if (!error && msgDict && msgDict[@"sysmsg"] && msgDict[@"sysmsg"][@"revokemsg"]) {
            NSString *newmsgid = msgDict[@"sysmsg"][@"revokemsg"][@"newmsgid"][@"text"];
            NSString *session =  msgDict[@"sysmsg"][@"revokemsg"][@"session"][@"text"];
            
            //      获取原始的撤回提示消息
            MessageService *msgService = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("MessageService")];
            MessageData *revokeMsgData = [msgService GetMsgData:session svrId:[newmsgid integerValue]];
            
            //      获取自己的联系人信息
            ContactStorage *contactStorage = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("ContactStorage")];
            WCContactData *selfContact = [contactStorage GetSelfContact];
            
            NSString *newMsgContent;
            //      判断是否是自己发起撤回
            if ([selfContact.m_nsUsrName isEqualToString:revokeMsgData.fromUsrName]) {
                newMsgContent = [NSString stringWithFormat:@"TK拦截到你撤回了一条消息：\n %@",revokeMsgData.msgContent];
            } else {
                newMsgContent = [NSString stringWithFormat:@"TK拦截到一条撤回消息：\n %@",revokeMsgData.msgPushContent];
            }
            MessageData *newMsgData = ({
                MessageData *msg = [[objc_getClass("MessageData") alloc] initWithMsgType:0x2710];
                [msg setFromUsrName:revokeMsgData.toUsrName];
                [msg setToUsrName:revokeMsgData.fromUsrName];
                [msg setMsgStatus:4];
                [msg setMsgContent:newMsgContent];
                [msg setMsgCreateTime:[revokeMsgData msgCreateTime]];
                [msg setMesLocalID:[revokeMsgData mesLocalID]];
                
                msg;
            });
            
            [msgService AddLocalMsg:session msgData:newMsgData];
            return;
        }
    }
    
     */
    [self wch_onRevokeMsg:msg];
}

/*
- (void)wch_OnSyncBatchAddMsgs:(NSArray *)msgs isFirstSync:(BOOL)arg2 {
    [self hook_OnSyncBatchAddMsgs:msgs isFirstSync:arg2];
    
    if ([[TKWeChatPluginConfig sharedConfig] autoReplyEnable]) {
        [msgs enumerateObjectsUsingBlock:^(AddMsg *addMsg, NSUInteger idx, BOOL * _Nonnull stop) {
            if ([addMsg.fromUserName.string containsString:@"@chatroom"]) {                 // 过滤群聊消息
                return ;
            }
            
            ContactStorage *contactStorage = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("ContactStorage")];
            WCContactData *selfContact = [contactStorage GetSelfContact];
            
            if ([addMsg.fromUserName.string isEqualToString:selfContact.m_nsUsrName]) {     // 过滤自己发送的消息
                return ;
            }
            
            if (addMsg.msgType == 1 || addMsg.msgType == 3) {
                MessageService *service = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("MessageService")];
                //                NSString *content = addMsg.content.string;
                //                if ([addMsg.fromUserName.string containsString:@"@chatroom"]) {
                //                    NSRange range = [addMsg.content.string rangeOfString:@":\n"];
                //                    if (range.length != 0) {
                //                        content = [addMsg.content.string substringFromIndex:range.location + range.length];
                //                    }
                //                }
                NSString *keyword = [[TKWeChatPluginConfig sharedConfig] autoReplyKeyword];
                if ([keyword isEqualToString:@""] || [addMsg.content.string isEqualToString:keyword]) {
                    [service SendTextMessage:selfContact.m_nsUsrName toUsrName:addMsg.fromUserName.string msgText:[[TKWeChatPluginConfig sharedConfig] autoReplyText] atUserList:nil];
                }
            }
        }];
    }
}
*/

@end
