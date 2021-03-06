/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */

#import "TiProxy.h"
#import "Bridge.h"
#import "TiEvaluator.h"

@interface TiHost : NSObject 
{
	NSMutableDictionary *modules;
	NSMutableDictionary *contexts;
	NSURL *startURL;
	NSURL *baseURL;
}

-(NSString*)appID;
-(NSURL*)baseURL;
-(NSURL*)startURL;

+(NSURL*)resourceBasedURL:(NSString*)fn baseURL:(NSString**)base;

-(id)moduleNamed:(NSString*)name context:(id<TiEvaluator>)context;

-(void)fireEvent:(id)listener withObject:(id)obj remove:(BOOL)remove context:(id<TiEvaluator>)context thisObject:(TiProxy*)thisObject_;
-(void)removeListener:(id)listener context:(id<TiEvaluator>)context;
-(void)evaluateJS:(NSString*)js context:(id<TiEvaluator>)context;

-(void)registerContext:(id<TiEvaluator>)context forToken:(NSString*)token;
-(void)unregisterContext:(id<TiEvaluator>)context forToken:(NSString*)token;
-(id<TiEvaluator>)contextForToken:(NSString*)token;

@end
