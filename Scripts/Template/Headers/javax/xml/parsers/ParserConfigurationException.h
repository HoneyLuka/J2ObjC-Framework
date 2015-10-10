//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/parsers/ParserConfigurationException.java
//

#ifndef _JavaxXmlParsersParserConfigurationException_H_
#define _JavaxXmlParsersParserConfigurationException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/Exception.h>

/*!
 @brief Indicates a serious configuration error.
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 569981 $, $Date: 2007-08-26 20:59:07 -0700 (Sun, 26 Aug 2007) $
 */
@interface JavaxXmlParsersParserConfigurationException : JavaLangException

#pragma mark Public

/*!
 @brief Create a new <code>ParserConfigurationException</code> with no
 detail message.
 */
- (instancetype)init;

/*!
 @brief Create a new <code>ParserConfigurationException</code> with
 the <code>String</code> specified as an error message.
 @param msg The error message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlParsersParserConfigurationException)

FOUNDATION_EXPORT void JavaxXmlParsersParserConfigurationException_init(JavaxXmlParsersParserConfigurationException *self);

FOUNDATION_EXPORT JavaxXmlParsersParserConfigurationException *new_JavaxXmlParsersParserConfigurationException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlParsersParserConfigurationException_initWithNSString_(JavaxXmlParsersParserConfigurationException *self, NSString *msg);

FOUNDATION_EXPORT JavaxXmlParsersParserConfigurationException *new_JavaxXmlParsersParserConfigurationException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlParsersParserConfigurationException)

#endif // _JavaxXmlParsersParserConfigurationException_H_