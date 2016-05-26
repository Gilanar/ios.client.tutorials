/**
 * Copyright (c) 2007-2015, Kaazing Corporation. All rights reserved.
 */

#import <UIKit/UIKit.h>

@interface JMSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (NSData *) deviceToken;

@end
