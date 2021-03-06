//
//  TACAppDelegate.h
//  PMCExhibitionTable
//
//  Created by Nathan on 14-1-6.
//  Copyright (c) 2014年 com.nathan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GCDAsyncSocket.h"

@interface TACAppDelegate : UIResponder <UIApplicationDelegate, GCDAsyncSocketDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) GCDAsyncSocket *asyncSocket;

@end
