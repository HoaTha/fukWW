//
//  fukPoolFactory.h
//  AppHrm
//
//  Created by Administrator on 19/01/2024.
//

#import <WebKit/WebKit.h>

@interface fukPoolFactory : NSObject
@property (nonatomic, retain) WKProcessPool* sharedPool;

+(instancetype) sharedFactory;
-(WKProcessPool*) sharedProcessPool;
@end
