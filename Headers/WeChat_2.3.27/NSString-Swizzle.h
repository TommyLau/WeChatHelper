//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (Swizzle)
+ (void)load;
+ (id)safe_stringWithString:(id)arg1;
- (id)safe_initWithString:(id)arg1;
- (id)safe_stringByAppendingString:(id)arg1;
- (struct _NSRange)safe_rangeOfString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)safe_rangeOfString:(id)arg1;
- (id)safe_substringToIndex:(unsigned long long)arg1;
- (id)safe_substringFromIndex:(unsigned long long)arg1;
- (id)safe_substringWithRange:(struct _NSRange)arg1;
- (unsigned short)safe_characterAtIndex:(unsigned long long)arg1;
@end

