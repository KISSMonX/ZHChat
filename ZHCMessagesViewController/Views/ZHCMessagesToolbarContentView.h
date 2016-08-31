//
//  ZHCMessagesToolbarContentView.h
//  ZHChat
//
//  Created by aimoke on 16/8/19.
//  Copyright © 2016年 zhuo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "ZHCMessagesComposerTextView.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  A constant value representing the default spacing to use for the left and right edges
 *  of the toolbar content view.
 */
FOUNDATION_EXPORT const CGFloat kZHCMessagesToolbarContentViewHorizontalSpacingDefault;

/**
 *  A `ZHCMessagesToolbarContentView` represents the content displayed in a `ZHCMessagesInputToolbar`.
 *  These subviews consist of a left button, a text view, and a right button. One button is used as
 *  the send button, and the other as the accessory button. The text view is used for composing messages.
 */

@interface ZHCMessagesToolbarContentView : UIView


/**
 *  Returns the text view in which the user composes a message.
 */
@property (weak, nonatomic, readonly, nullable) ZHCMessagesComposerTextView *textView;


/**
 *  A custom button item displayed on the left of the toolbar content view.
 *
 *  @discussion The frame height of this button is ignored. When you set this property, the button
 *  is fitted within a pre-defined default content view, the leftBarButtonContainerView,
 *  whose height is determined by the height of the toolbar. However, the width of this button
 *  will be preserved. You may specify a new width using `leftBarButtonItemWidth`.
 *  If the frame of this button is equal to `CGRectZero` when set, then a default frame size will be used.
 *  Set this value to `nil` to remove the button.
 */
@property (weak, nonatomic, nullable) UIButton *leftBarButtonItem;

/**
 *  Specifies the width of the leftBarButtonItem.
 *
 *  @discussion This property modifies the width of the leftBarButtonContainerView.
 */
@property (assign, nonatomic) CGFloat leftBarButtonItemWidth;

/**
 *  Specifies the amount of spacing between the content view and the leading edge of leftBarButtonItem.
 *
 *  @discussion The default value is `8.0f`.
 */
@property (assign, nonatomic) CGFloat leftContentPadding;


/**
 *  The container view for the leftBarButtonItem.
 *
 *  @discussion
 *  You may use this property to add additional button items to the left side of the toolbar content view.
 *  However, you will be completely responsible for responding to all touch events for these buttons
 *  in your `ZHCMessagesViewController` subclass.
 */
@property (weak, nonatomic, readonly, nullable) UIView *leftBarButtonContainerView;


/**
 *  A custom button item displayed on the right of the toolbar content view.
 *
 *  @discussion The frame height of this button is ignored. When you set this property, the button
 *  is fitted within a pre-defined default content view, the rightBarButtonContainerView,
 *  whose height is determined by the height of the toolbar. However, the width of this button
 *  will be preserved. You may specify a new width using `rightBarButtonItemWidth`.
 *  If the frame of this button is equal to `CGRectZero` when set, then a default frame size will be used.
 *  Set this value to `nil` to remove the button.
 */
@property (weak, nonatomic, nullable) UIButton *rightBarButtonItem;

/**
 *  Specifies the width of the rightBarButtonItem.
 *
 *  @discussion This property modifies the width of the rightBarButtonContainerView.
 */
@property (assign, nonatomic) CGFloat rightBarButtonItemWidth;

/**
 *  Specifies the amount of spacing between the content view and the trailing edge of rightBarButtonItem.
 *
 *  @discussion The default value is `8.0f`.
 */
@property (assign, nonatomic) CGFloat rightContentPadding;

/**
 *  The container view for the rightBarButtonItem.
 *
 *  @discussion
 *  You may use this property to add additional button items to the right side of the toolbar content view.
 *  However, you will be completely responsible for responding to all touch events for these buttons
 *  in your `ZHCMessagesViewController` subclass.
 */
@property (weak, nonatomic, readonly, nullable) UIView *rightBarButtonContainerView;


/**
 *  A custom button item displayed on the right of the toolbar content view.
 *
 *  @discussion The frame height of this button is ignored. When you set this property, the button
 *  is fitted within a pre-defined default content view, the middleBarButtonContainerView,
 *  whose height is determined by the height of the toolbar. However, the width of this button
 *  will be preserved. You may specify a new width using `middleBarButtonItemWidth`.
 *  If the frame of this button is equal to `CGRectZero` when set, then a default frame size will be used.
 *  Set this value to `nil` to remove the button.
 */
@property (weak, nonatomic, nullable) UIButton *middleBarButtonItem;

/**
 *  Specifies the width of the middleBarButtonItem.
 *
 *  @discussion This property modifies the width of the middleBarButtonContainerView.
 */
@property (assign, nonatomic) CGFloat middleBarButtonItemWidth;

/**
 *  Specifies the amount of spacing between the content view and the trailing edge of middleBarButtonItem.
 *
 *  @discussion The default value is `8.0f`.
 */
@property (assign, nonatomic) CGFloat middleContentPadding;

/**
 *  The container view for the middleBarButtonItem.
 *
 *  @discussion
 *  You may use this property to add additional button items to the right side of the toolbar content view.
 *  However, you will be completely responsible for responding to all touch events for these buttons
 *  in your `ZHCMessagesViewController` subclass.
 */
@property (weak, nonatomic, readonly, nullable) UIView *middleBarButtonContainerView;


/**
 *  The Voice LongPress Button
 */
@property (strong, nonatomic,nullable) UIButton *longPressButton;


#pragma mark - Class methods

/**
 *  Returns the `UINib` object initialized for a `ZHCMessagesToolbarContentView`.
 *
 *  @return The initialized `UINib` object.
 */
+ (UINib *)nib;


@end
NS_ASSUME_NONNULL_END