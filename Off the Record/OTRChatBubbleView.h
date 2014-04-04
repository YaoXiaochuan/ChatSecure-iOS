//
//  OTRChatBubbleView.h
//  Off the Record
//
//  Created by David Chiles on 1/9/14.
//  Copyright (c) 2014 Chris Ballinger. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TTTAttributedLabel.h"

@interface OTRChatBubbleView : UIView
{
    NSLayoutConstraint * imageViewSideConstraint;
    NSLayoutConstraint * labelSideConstraint;
    NSLayoutConstraint * textWidthConstraint;
    NSLayoutConstraint * textHeightConstraint;
    NSLayoutConstraint * deliveredSideConstraint;
}

@property (nonatomic, strong) UIImageView * messageBackgroundImageView;
@property (nonatomic, strong) UIImageView * deliveredImageView;
@property (nonatomic, strong, readonly) TTTAttributedLabel * messageTextLabel;
@property (nonatomic, getter = isIncoming) BOOL incoming;
@property (nonatomic, getter = isDelivierd) BOOL delivered;

- (void)updateLayout;

+(TTTAttributedLabel *)defaultLabel;

@end