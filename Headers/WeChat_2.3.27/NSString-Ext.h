//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (Ext)
+ (id)getStringFromUrl:(id)arg1 needle:(id)arg2;
+ (id)generatePrivacyString:(id)arg1;
+ (id)safeStringWithUTF8String:(const char *)arg1;
+ (id)stringWithUInt64:(unsigned long long)arg1;
- (id)stringByOmitPrefixAndSuffix:(id)arg1;
- (id)stringByOmitSuffix:(id)arg1;
- (id)stringByReplacingJavaScriptUnsupportString;
- (id)stringByOmitPrefix:(id)arg1;
- (unsigned long long)characterLengthOfComposedCharacter;
- (id)stringWithMaxLength:(unsigned long long)arg1;
- (id)safeSubstringWithRange:(struct _NSRange)arg1;
- (id)safeSubstringToIndex:(long long)arg1;
- (id)safeSubstringFromIndex:(long long)arg1;
- (BOOL)containsSubstring:(id)arg1 option:(unsigned long long)arg2;
- (BOOL)containsSubstring:(id)arg1;
- (long long)compareWithUInt64:(id)arg1;
- (id)stringByEscapingAllLineBreak;
- (id)stringByTrimmingRight;
- (id)stringByTrimmingLeft;
- (id)stringByTrimming;
- (id)stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (unsigned long long)uint64Value;
- (unsigned long long)unsignLongLongValue;
@end

