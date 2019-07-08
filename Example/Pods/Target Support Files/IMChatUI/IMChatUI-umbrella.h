#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NOCChatCollectionView.h"
#import "NOCChatCollectionViewLayout.h"
#import "NOCChatContainerView.h"
#import "NOCChatInputPanel.h"
#import "NOCChatItem.h"
#import "NOCChatItemCell.h"
#import "NOCChatItemCellLayout.h"
#import "NOCChatViewController.h"
#import "NoChat.h"
#import "NOCImageMessage.h"
#import "NOCMessage.h"

FOUNDATION_EXPORT double IMChatUIVersionNumber;
FOUNDATION_EXPORT const unsigned char IMChatUIVersionString[];

