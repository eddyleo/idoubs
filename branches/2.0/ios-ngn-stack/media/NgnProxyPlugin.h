/* Copyright (C) 2010-2011, Mamadou Diop.
 * Copyright (c) 2011, Doubango Telecom. All rights reserved.
 *
 * Contact: Mamadou Diop <diopmamadou(at)doubango(dot)org>
 *       
 * This file is part of iDoubs Project ( http://code.google.com/p/idoubs )
 *
 * idoubs is free software: you can redistribute it and/or modify it under the terms of 
 * the GNU General Public License as published by the Free Software Foundation, either version 3 
 * of the License, or (at your option) any later version.
 *       
 * idoubs is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
 * See the GNU General Public License for more details.
 *       
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */
#if TARGET_OS_IPHONE

#import <Foundation/Foundation.h>

class ProxyPlugin;

@interface NgnProxyPlugin : NSObject {
@protected
	uint64_t mId;
	BOOL mValid;
	BOOL mStarted;
	BOOL mPaused;
	BOOL mPrepared;
	
	const ProxyPlugin* mPlugin;
}

@property(readonly,getter=getId) uint64_t id;
@property(readonly,getter=isValid) BOOL valid;
@property(readonly,getter=isStarted) BOOL started;
@property(readonly,getter=isPaused) BOOL paused;
@property(readonly,getter=isPrepared) BOOL prepared;

-(NgnProxyPlugin*) initWithId: (uint64_t)identifier andPlugin: (const ProxyPlugin*)plugin;

-(void)makeInvalidate;
-(BOOL)isValid;
-(BOOL)isStarted;
-(BOOL)isPaused;
-(BOOL)isPrepared;
-(uint64_t)getId;
-(NSNumber*)getIdAsNumber;

@end

#endif /* TARGET_OS_IPHONE */