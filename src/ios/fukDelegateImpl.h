//
//  fukDelegateImpl.h
//  Pods
//
//  Created by Administrator on 20/01/2024.
//

@import UIKit;
#import <Cordova/CDVCommandDelegate.h>

@class fukWW;
@class CDVCommandQueue;

@interface fukDelegateImpl : NSObject <CDVCommandDelegate>{
    @private
    __weak fukWW* _viewController;
    NSRegularExpression* _callbackIdPattern;
    @protected
    __weak CDVCommandQueue* _commandQueue;
    BOOL _delayResponses;
}
- (id)initWithViewController:(fukWW*)viewController;
- (void)flushCommandQueueWithDelayedJs;
@end
