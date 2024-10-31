//
//  ExceptionCatcher.h
//  Moment
//
//  Created by junkyu kang on 10/31/24.
//


// ExceptionCatcher.h

#import <Foundation/Foundation.h>

@interface ExceptionCatcher : NSObject

+ (nullable id)JSONObjectWithData:(NSData *)data options:(NSJSONReadingOptions)opt error:(NSError **)error;

@end
