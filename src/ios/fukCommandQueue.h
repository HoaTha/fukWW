//
//  fukCommandQueue.h
//  Pods
//
//  Created by Administrator on 20/01/2024.
//

@class CDVInvokedUrlCommand;
@class fukWW;

@interface fukCommandQueue : NSObject

@property (nonatomic, readonly) BOOL currentlyExecuting;

- (id)initWithViewController:(fukWW*)viewController;
- (void)dispose;

- (void)resetRequestId;
- (void)enqueueCommandBatch:(NSString*)batchJSON;

- (void)fetchCommandsFromJs;
- (void)executePending;
- (BOOL)execute:(CDVInvokedUrlCommand*)command;

@end
