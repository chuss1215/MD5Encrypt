//
//  MD5Encrypt.h
//  MD5Encrypt
//
//  Created by clf on 2018/1/23.
//  Copyright © 2018年 clf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MD5Encrypt : NSObject
// 32位小写
+(NSString *)MD5ForLower32Bate:(NSString *)str;
// 32位大写
+(NSString *)MD5ForUpper32Bate:(NSString *)str;
// 16为大写
+(NSString *)MD5ForUpper16Bate:(NSString *)str;
// 16位小写
+(NSString *)MD5ForLower16Bate:(NSString *)str;
@end
