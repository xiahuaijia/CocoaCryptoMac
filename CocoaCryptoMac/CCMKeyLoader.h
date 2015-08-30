//
//  CCMKeyLoader.h
//  CocoaCryptoMac
//
//  Created by Nik Youdale on 30/08/2015.
//  Copyright (c) 2015 Nik Youdale. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CCMPublicKey;


@interface CCMKeyLoader : NSObject

- (CCMPublicKey *)loadRSAPEMPublicKey:(NSString *)pemKey;
- (CCMPublicKey *)loadX509PEMPublicKey:(NSString *)pemKey;

@end
