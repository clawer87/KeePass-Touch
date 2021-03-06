/*
 * Copyright 2011-2012 Jason Rush and John Flanagan. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import "KeePassTouchAppDelegate.h"
#import <UIKit/UIKit.h>

@protocol TextFieldCellDelegate;

@interface TextFieldCell : UITableViewCell <UITextFieldDelegate>

@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) UITextField *textField;
@property (nonatomic, unsafe_unretained) id<TextFieldCellDelegate> textFieldCellDelegate;

@property (nonatomic, strong) UIButton *accessoryButton;
@property (nonatomic, strong) UIButton *editAccessoryButton;

@property (nonatomic, assign) BOOL showGrayBar;

@end

@protocol TextFieldCellDelegate <NSObject>
- (void)textFieldCellWillReturn:(TextFieldCell*)textFieldCell;
- (void)textFieldCellDidEndEditing:(TextFieldCell*)textFieldCell;
@end
