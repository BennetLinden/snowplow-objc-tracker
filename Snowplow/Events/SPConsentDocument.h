//
//  SPConsentDocument.h
//  Snowplow
//
//  Created by Alex Benini on 14/02/2020.
//  Copyright © 2020 Snowplow Analytics. All rights reserved.
//

#import "SPEvent.h"

NS_ASSUME_NONNULL_BEGIN

/*!
 @protocol SPConsentDocumentBuilder
 @brief The protocol for building consent documents.
 */
@protocol SPConsentDocumentBuilder <SPEventBuilder>

/*!
 @brief Set the ID associated with a document that defines consent.

 @param documentId The document ID.
 */
- (void) setDocumentId:(NSString *)documentId;

/*!
 @brief Set the version of the consent document.

 @param version The version of the document.
 */
- (void) setVersion:(NSString *)version;

/*!
 @brief Set the name of the consent document.

 @param name Name of the consent document.
 */
- (void) setName:(NSString *)name;

/*!
 @brief Set the description of the consent document.

 @param description The consent document description.
 */
- (void) setDescription:(NSString *)description;
@end

/*!
 @class SPConsentDocument
 @brief A consent document event.
 */
@interface SPConsentDocument : SPEvent <SPConsentDocumentBuilder>
+ (instancetype) build:(void(^)(id<SPConsentDocumentBuilder>builder))buildBlock;
- (SPSelfDescribingJson *) getPayload;
@end

NS_ASSUME_NONNULL_END
