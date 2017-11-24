

#import <Foundation/Foundation.h>

@interface NSString (Base64)

- (NSString *)base64EncodedString;

- (NSString *)base64DecodedString;

- (BOOL)judgeStringRangeWith:(NSArray *)array;

- (BOOL)judgeEqualWith:(NSArray *)array;

- (NSString *)replaceStringWith:(NSArray *)array;

@end
