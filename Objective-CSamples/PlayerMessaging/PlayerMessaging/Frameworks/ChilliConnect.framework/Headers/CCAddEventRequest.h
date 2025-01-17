//
//  This file was auto-generated using the ChilliConnect SDK Generator.
//
//  The MIT License (MIT)
//
//  Copyright (c) 2015 Tag Games Ltd
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

@import Foundation;

#import "SCImmediateServerRequest.h"

#import "ForwardDeclarations.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 A container for all information that will be sent to the server during a
 addEvent api call.

 This is immutable after construction and is therefore thread safe.
 */
@interface CCAddEventRequest : NSObject<SCImmediateServerRequest>

/// The url the request will be sent to.
@property (readonly) NSURL *url;

/// The HTTP request method that should be used.
@property (readonly) SCHttpRequestMethod httpRequestMethod;

/// MetricsAccessToken as returned from a call to SessionStart.
@property (readonly) NSString *metricsAccessToken;
	
/// The type of custom event. This should map to a custom event type defined within
/// the ChilliConnect dashboard.
@property (readonly) NSString *type;
	
/// Date that indicates the local, device time that the event occurred. Format:
/// ISO8601 e.g. 2016-01-12T11:08:23.
@property (readonly) NSDate *date;
	
/// A number representing the player's in game level.
@property (readonly, nullable) NSNumber *userGrade;
	
/// A string indicating the test group the player belongs to.
@property (readonly, nullable) NSString *testGroup;
	
/// Object containing Key-Value pairs that map on to the custom event parameter
/// definitions for this event. All parameters are considered optional - however, any
/// parameters submitted for a custom event must be defined otherwise the event will
/// be considered invalid and not be processed.
@property (readonly, nullable) NSDictionary *parameters;
	
/// The number of times this event occurred. If not provided, this will be defaulted
/// to 1.
@property (readonly, nullable) NSNumber *count;

/*!
 A convenience factory method for creating new instances of CCAddEvent
 with the given description.
 
 @param desc The description to build the new request from.
 @param metricsAccessToken MetricsAccessToken as returned from a call to SessionStart.

 @return The new instance.
 */
+ (instancetype)addEventRequestWithDesc:(CCAddEventRequestDesc *)desc metricsAccessToken:(NSString *)metricsAccessToken;

/*!
 Default init method cannot be called for this class.
 */
-(instancetype) __unavailable init;

/*!
 Initialises with the given description.
 
 @param desc The description to build the new request from.
 @param metricsAccessToken MetricsAccessToken as returned from a call to SessionStart.

 @return The initialised request.
 */
- (instancetype)initWithDesc:(CCAddEventRequestDesc *)desc metricsAccessToken:(NSString *)metricsAccessToken NS_DESIGNATED_INITIALIZER;

/*!
 Serialises all header properties. The output will be a dictionary containing the
 extra header key-value pairs in addition the standard headers sent with all server
 requests. Will return an empty dictionary if there are no headers.
 
 @return The header dictionary.
 */
- (NSDictionary *)serialiseHeaders;

/*!
 Serialises all body properties. The output will be a dictionary containing the body
 of the request in a form that can easily be converted to Json. Will return an empty
 dictionary if there is no body.
 
 @return The body dictionary.
 */
- (NSDictionary *)serialiseBody;

@end

NS_ASSUME_NONNULL_END
