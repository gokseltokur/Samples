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
 setPlayerDetails api call.

 This is immutable after construction and is therefore thread safe.
 */
@interface CCSetPlayerDetailsRequest : NSObject<SCImmediateServerRequest>

/// The url the request will be sent to.
@property (readonly) NSURL *url;

/// The HTTP request method that should be used.
@property (readonly) SCHttpRequestMethod httpRequestMethod;

/// A valid session ConnectAccessToken obtained through one of the login endpoints.
@property (readonly) NSString *connectAccessToken;
	
/// The UserName of the new player account. If provided, this must be unique across
/// all players within the game, contain only alpha, numeric, underscore or dash
/// characters, and a minimum size of 3 characters, maximum 50.
@property (readonly, nullable) NSString *userName;
	
/// A DisplayName that can be used to identify the Player within the game. If
/// provided it can contain only alpha, numeric, underscore or dash characters, and a
/// minimum size of 3 characters, maximum 50.
@property (readonly, nullable) NSString *displayName;
	
/// Email address to be associated with the new player account. If provided, this
/// must be unique across all players within the game.
@property (readonly, nullable) NSString *email;
	
/// Password to be assigned to the new player account. If provided must be greater
/// than 3 and less than 50 characters in length.
@property (readonly, nullable) NSString *password;

/*!
 A convenience factory method for creating new instances of CCSetPlayerDetails
 with the given description.
 
 @param desc The description to build the new request from.
 @param connectAccessToken A valid session ConnectAccessToken obtained through one of the login endpoints.

 @return The new instance.
 */
+ (instancetype)setPlayerDetailsRequestWithDesc:(CCSetPlayerDetailsRequestDesc *)desc connectAccessToken:(NSString *)connectAccessToken;

/*!
 Default init method cannot be called for this class.
 */
-(instancetype) __unavailable init;

/*!
 Initialises with the given description.
 
 @param desc The description to build the new request from.
 @param connectAccessToken A valid session ConnectAccessToken obtained through one of the login endpoints.

 @return The initialised request.
 */
- (instancetype)initWithDesc:(CCSetPlayerDetailsRequestDesc *)desc connectAccessToken:(NSString *)connectAccessToken NS_DESIGNATED_INITIALIZER;

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
