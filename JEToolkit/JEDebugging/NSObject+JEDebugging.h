//
//  NSObject+JEDebugging.h
//  JEToolkit
//
//  Created by DIT John Estropia on 2013/11/26.
//  Copyright (c) 2013年 John Rommel Estropia. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NSObject+JEDebugging.h"


@interface NSObject (JEDebugging)

- (NSMutableString *)detailedDescriptionIncludeClass:(BOOL)includeClass
                                      includeAddress:(BOOL)includeAddress;

@end
