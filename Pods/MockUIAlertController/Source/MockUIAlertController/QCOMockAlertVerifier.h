//  MockUIAlertController by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2015 Jonathan M. Reid. See LICENSE.txt

#import <UIKit/UIKit.h>

#import <MockUIAlertController/QCOMockPopoverPresentationController.h> // Convenience import instead of @class


/*!
 * @abstract Captures mocked UIAlertController arguments.
 * @discussion Instantiate a QCOMockAlertVerifier before the execution phase of the test. Then
 * invoke the code to create and present your alert. Information about the alert is then available
 * through the QCOMockAlertVerifier.
 */
@interface QCOMockAlertVerifier : NSObject

@property (nonatomic, assign) NSUInteger presentedCount;
@property (nonatomic, strong) NSNumber *animated;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, assign) UIAlertControllerStyle preferredStyle;
@property (nonatomic, readonly) NSArray *actionTitles;
@property (nonatomic, strong) QCOMockPopoverPresentationController *popover;

/*!
 * @abstract Initializes a newly allocated verifier.
 * @discussion Instantiating a QCOMockAlertVerifier swizzles UIAlertController. It remains swizzled
 * until the QCOMockAlertVerifier is deallocated.
 */
- (instancetype)init;

/*!
 * @abstract Returns the UIAlertActionStyle for the button with the specified title.
 * @discussion Throws an exception if no button with that title is found.
 */
- (UIAlertActionStyle)styleForButtonWithTitle:(NSString *)title;

/*!
 * @abstract Executes the action for the button with the specified title.
 * @discussion Throws an exception if no button with that title is found.
 */
- (void)executeActionForButtonWithTitle:(NSString *)title;

@end
