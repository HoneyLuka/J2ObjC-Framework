//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ClassFormatError.java
//

#ifndef _JavaLangClassFormatError_H_
#define _JavaLangClassFormatError_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/LinkageError.h>

/*!
 @brief Thrown by a class loader when a class file has an illegal format or if the
 data that it contains can not be interpreted as a class.
 */
@interface JavaLangClassFormatError : JavaLangLinkageError

#pragma mark Public

/*!
 @brief Constructs a new <code>ClassFormatError</code> that includes the current stack
 trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>ClassFormatError</code> with the current stack trace
 and the specified detail message.
 @param detailMessage
 the detail message for this error.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangClassFormatError)

FOUNDATION_EXPORT void JavaLangClassFormatError_init(JavaLangClassFormatError *self);

FOUNDATION_EXPORT JavaLangClassFormatError *new_JavaLangClassFormatError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangClassFormatError_initWithNSString_(JavaLangClassFormatError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangClassFormatError *new_JavaLangClassFormatError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangClassFormatError)

#endif // _JavaLangClassFormatError_H_