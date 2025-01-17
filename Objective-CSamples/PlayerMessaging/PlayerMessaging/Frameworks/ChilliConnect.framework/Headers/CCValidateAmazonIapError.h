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

#import "ForwardDeclarations.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 An enum describing each of the possible error codes that can be returned from a
 CCValidateAmazonIapRequest.
 */
typedef NS_ENUM(NSInteger, CCValidateAmazonIapErrorCode) {
	
	/// A connection could not be established.
	CCValidateAmazonIapErrorCodeCouldNotConnect = -2,
	
	/// The request timed out.
	CCValidateAmazonIapErrorCodeTimeout = -1,
	
	/// An unexpected, fatal error has occured on the server. 
	CCValidateAmazonIapErrorCodeUnexpectedError = 1,
	
	/// Invalid Request. One of more of the provided fields were not correctly formatted.
	/// The data property of the response body will contain specific error messages for
	/// each field.
	CCValidateAmazonIapErrorCodeInvalidRequest = 1007,
	
	/// Expired Connect Access Token. The Connect Access Token used to authenticate with
	/// the server has expired and should be renewed.
	CCValidateAmazonIapErrorCodeExpiredConnectAccessToken = 1003,
	
	/// Invalid Connect Access Token. The Connect Access Token was not valid and cannot
	/// be used to authenticate requests.
	CCValidateAmazonIapErrorCodeInvalidConnectAccessToken = 1004,
	
	/// Temporary Service Error. A temporary error is preventing the request from being
	/// processed.
	CCValidateAmazonIapErrorCodeTemporaryServiceError = 1008,
	
	/// IAP Validation Service Unreachable. The external service used to validate the IAP
	/// was unreachable.
	CCValidateAmazonIapErrorCodeIapValidationServiceUnreachable = 8001,
	
	/// IAP Validation Service Response Invalid. The external service used to validate
	/// the IAP returned an unrecognised response.
	CCValidateAmazonIapErrorCodeIapValidationServiceResponseInvalid = 8003,
	
	/// IAP Configuration Not Specified. The configuration required to perform IAP
	/// validation has not been set via the ChilliConnect dashboard.
	CCValidateAmazonIapErrorCodeIapConfigurationNotSpecified = 8004
};

/*!
 A container for information on any errors that occur during a
 CCValidateAmazonIapRequest

 This is immutable after construction and is therefore thread safe.
 */
@interface CCValidateAmazonIapError : NSObject

/// A code describing the error that has occurred.
@property (readonly) CCValidateAmazonIapErrorCode errorCode;

/// A description of the error that as occurred.
@property (readonly) NSString *errorDescription;

/// Additional, error specific information.
@property (readonly) SCMultiTypeValue *errorData;

/*!
 Convenience factory method for creating new instances of CCValidateAmazonIapError
 with the given server response.
 
 @param serverResponse The server response. Must represent an error otherwise this will
 assert.

 @return The new instance.
 */
+ (instancetype)validateAmazonIapErrorWithServerResponse:(SCServerResponse *)serverResponse;

/*!
 Convenience factory method for creating new instances of CCValidateAmazonIapError
 with the given error code.
 
 @param errorCode A code describing the error that has occurred.

 @return The new instance.
 */
+ (instancetype)validateAmazonIapErrorWithErrorCode:(CCValidateAmazonIapErrorCode)errorCode;

/*!
 Default init method cannot be called for this class.
 */
-(instancetype) __unavailable init;

/*!
 Initialises with the given error code.
 
 @param errorCode A code describing the error that has occurred.
 @param errorData A dictionary of extra information on the specific error that 
        occurred.

 @return The new instance.
 */
- (instancetype)initWithErrorCode:(CCValidateAmazonIapErrorCode)errorCode errorData:(SCMultiTypeValue *)errorData NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
