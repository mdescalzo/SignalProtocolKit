//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import "SPKAsserts.h"
#import <Foundation/Foundation.h>
@import CocoaLumberjack;

#ifdef DEBUG
static const NSUInteger ddLogLevel = DDLogLevelAll;
#else
static const NSUInteger ddLogLevel = DDLogLevelInfo;
#endif
