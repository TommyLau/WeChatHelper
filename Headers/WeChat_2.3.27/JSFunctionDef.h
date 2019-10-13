//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSAPIPermissionBitSet, NSString;

@interface JSFunctionDef : NSObject
{
    NSString *funcName;
    JSAPIPermissionBitSet *permissionBitset;
    long long permissionByteIndex;
    unsigned long long _runInWebViewType;
}

+ (id)FuncDefWithFunc:(id)arg1 PermissionByteIndex:(long long)arg2 RunInWebViewType:(unsigned long long)arg3;
+ (id)FuncDefWithFunc:(id)arg1 PermissionBitSet3:(unsigned int)arg2 RunInWebViewType:(unsigned long long)arg3;
+ (id)FuncDefWithFunc:(id)arg1 PermissionBitSet2:(unsigned int)arg2 RunInWebViewType:(unsigned long long)arg3;
+ (id)FuncDefWithFunc:(id)arg1 PermissionBitSet:(unsigned int)arg2 RunInWebViewType:(unsigned long long)arg3;
@property(nonatomic) unsigned long long runInWebViewType; // @synthesize runInWebViewType=_runInWebViewType;
@property(nonatomic) long long permissionByteIndex; // @synthesize permissionByteIndex;
@property(copy, nonatomic) JSAPIPermissionBitSet *permissionBitset; // @synthesize permissionBitset;
@property(copy, nonatomic) NSString *funcName; // @synthesize funcName;
- (void).cxx_destruct;
- (id)init;

@end
