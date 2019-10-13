//
//  main.mm
//  WeChatHelper
//
//  Created by Tommy Lau on 2019/10/13.
//  Copyright © 2019 Tommy Lau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <JRSwizzle/JRSwizzle.h>
#import "WeChat+hook.h"

__attribute__((constructor))
static void  initialize(void) {
    // Initialize here
    NSLog(@"========== WeChatHelper ==========\n");
    
    [NSObject hookWeChat];
}
