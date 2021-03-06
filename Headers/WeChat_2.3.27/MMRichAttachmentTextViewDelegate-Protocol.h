//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMRichAttachmentBaseTextViewDelegate.h"

@class MMRichAttachmentTextView, NSArray, NSAttributedString, NSDictionary, NSPasteboardItem, NSString, NSTextAttachment, WeNoteBulletInfo;

@protocol MMRichAttachmentTextViewDelegate <MMRichAttachmentBaseTextViewDelegate>

@optional
- (BOOL)superDeleteNote;
- (BOOL)superShareToFriends;
- (BOOL)superSaveNote;
- (BOOL)superHandlePickFile;
- (BOOL)superHandleEscapeEvent;
- (BOOL)textView:(MMRichAttachmentTextView *)arg1 shouldUpdateToolBarWithBulletType:(WeNoteBulletInfo *)arg2;
- (BOOL)textView:(MMRichAttachmentTextView *)arg1 shouldUpdateToolBarWithAttribtues:(NSDictionary *)arg2;
- (BOOL)textView:(MMRichAttachmentTextView *)arg1 shouldAcceptFileAttachment:(NSString *)arg2;
- (BOOL)textView:(MMRichAttachmentTextView *)arg1 shouldAcceptPastedAttributedString:(NSAttributedString *)arg2;
- (id <NSTextAttachmentCell>)textView:(MMRichAttachmentTextView *)arg1 textAttachmentCellForTextAttachment:(NSTextAttachment *)arg2;
- (NSAttributedString *)textView:(MMRichAttachmentTextView *)arg1 attributedStringFromPasteboardItem:(NSPasteboardItem *)arg2 type:(NSString *)arg3 range:(struct _NSRange)arg4;
- (NSArray *)preferredPasteboardTypesForTextView:(MMRichAttachmentTextView *)arg1;
@end

