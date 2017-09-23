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

#import "QCOMockAlertVerifier.h"
#import "QCOMockPopoverPresentationController.h"

FOUNDATION_EXPORT double MockUIAlertControllerVersionNumber;
FOUNDATION_EXPORT const unsigned char MockUIAlertControllerVersionString[];

