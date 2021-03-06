//
//  PEAServer.h
//  DemoX
//
//  Created by Lun on 2017/9/25.
//  Copyright © 2017年 Lun. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^PEAServerResponseHandler)(NSDictionary * _Nullable response, NSError * _Nullable error);

@interface PEAServer : NSObject

- (instancetype _Nonnull)init __attribute__((unavailable("use serverWithAddress:")));

+ (PEAServer * _Nonnull)serverWithAddress:(NSString * _Nullable)address;
- (void)sendData:(NSData * _Nonnull)data
 responseHandler:(PEAServerResponseHandler _Nonnull)responseHandler;
- (NSDictionary * _Nonnull)getLandmarksMap;

@end
