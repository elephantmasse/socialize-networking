//
//  SZTestCase.h
//  SocializeAPIClient
//
//  Created by Nate Griswold on 11/1/12.
//  Copyright (c) 2012 Socialize. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GHUnitIOS/GHUnit.h>
#import <OCMock/OCMock.h>
#import "SZGlobal.h"
#import "NSURLConnection+Testing.h"
#import "SZFakeOperationQueue.h"
#import "NSOperation+Testing.h"
#import "TestHelpers.h"
#import "SZURLRequestOperation+Testing.h"

@interface SZTestCase : GHAsyncTestCase

- (void)incrementAsyncCount;
- (void)waitForAsyncCount:(NSUInteger)count;

@end
