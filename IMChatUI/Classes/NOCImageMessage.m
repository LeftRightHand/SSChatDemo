//
//  NOCImageMessage.m
//  NoChat-Example
//
//  Created by iOS Developer on 2019/6/28.
//  Copyright © 2019 little2s. All rights reserved.
//

#import "NOCImageMessage.h"

@implementation NOCImageMessage


- (instancetype)init
{
    self = [super init];
    if (self) {
        self.type = @"Image";
    }
    return self;
}

@end
