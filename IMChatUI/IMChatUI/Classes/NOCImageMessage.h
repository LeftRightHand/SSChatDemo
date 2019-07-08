//
//  NOCImageMessage.h
//  NoChat-Example
//
//  Created by iOS Developer on 2019/6/28.
//  Copyright © 2019 little2s. All rights reserved.
//

#import "NOCMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface NOCImageMessage : NOCMessage
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@end

NS_ASSUME_NONNULL_END
