/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class UIImage;

@interface SBUserNotificationAlertSheet : SBUnknownSuperclass {
	UIImage *_alertImage;	// 156 = 0x9c
}
@property(retain, nonatomic) UIImage *alertImage;	// G=0x8fbfd; S=0x8fd99; @synthesize=_alertImage
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x90275
- (void)layout;	// 0x8ff75
- (void)dealloc;	// 0x8ff29
- (id)_maskedAlertImage;	// 0x8fdc1
// declared property getter: - (id)alertImage;	// 0x8fbfd
// declared property setter: - (void)setAlertImage:(id)image;	// 0x8fd99
@end
