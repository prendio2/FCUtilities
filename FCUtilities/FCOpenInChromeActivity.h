//
//  FCOpenInChromeActivity.h
//  Part of FCUtilities by Marco Arment. See included LICENSE file for BSD license.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>

FOUNDATION_EXPORT NSString *const FCActivityTypeOpenInChrome;

@interface FCOpenInChromeActivity : UIActivity

- (instancetype)initWithSourceName:(NSString *)xCallbackSource successCallbackURL:(NSURL *)xCallbackURL;

@end
