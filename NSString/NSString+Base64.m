

#import "NSString+Base64.h"

@implementation NSString (Base64)

- (NSString *)base64EncodedString{

    NSData *data = [self dataUsingEncoding:NSUTF8StringEncoding];
    
    return [data base64EncodedStringWithOptions:0];
}

- (NSString *)base64DecodedString{

    NSData *data = [[NSData alloc] initWithBase64EncodedString:self options:0];
    
    return [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
}

- (BOOL)judgeStringRangeWith:(NSArray *)array{

    for (NSString *str in array) {
        
        if ([self rangeOfString:str].length) {
            
            return YES;
        }
    }
    
    return NO;
}

- (NSString *)replaceStringWith:(NSArray *)array{

    for (NSString *str in array) {
        
        if ([self rangeOfString:str].length) {
            
            [self stringByReplacingOccurrencesOfString:str withString:@""];
        }
    }
    
    return self;
}

- (BOOL)judgeEqualWith:(NSArray *)array{

    for (NSString *str in array) {
        
        if ([self isEqualToString:str]) {
            
            return YES;
        }
    }
    
    return NO;
}

@end
