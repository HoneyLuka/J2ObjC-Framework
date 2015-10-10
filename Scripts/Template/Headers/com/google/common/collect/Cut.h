//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/Cut.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectCut_INCLUDE_ALL")
#if ComGoogleCommonCollectCut_RESTRICT
#define ComGoogleCommonCollectCut_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectCut_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectCut_RESTRICT

#if !defined (_ComGoogleCommonCollectCut_) && (ComGoogleCommonCollectCut_INCLUDE_ALL || ComGoogleCommonCollectCut_INCLUDE)
#define _ComGoogleCommonCollectCut_

#define JavaLangComparable_RESTRICT 1
#define JavaLangComparable_INCLUDE 1
#include <j2objc/java/lang/Comparable.h>

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include <j2objc/java/io/Serializable.h>

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectDiscreteDomain;
@class JavaLangStringBuilder;

@interface ComGoogleCommonCollectCut : NSObject < JavaLangComparable, JavaIoSerializable > {
 @public
  id<JavaLangComparable> endpoint_;
}

#pragma mark Public

- (jint)compareToWithId:(ComGoogleCommonCollectCut *)that;

- (jboolean)isEqual:(id)obj;

#pragma mark Package-Private

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

+ (ComGoogleCommonCollectCut *)aboveAll;

+ (ComGoogleCommonCollectCut *)aboveValueWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

+ (ComGoogleCommonCollectCut *)belowAll;

+ (ComGoogleCommonCollectCut *)belowValueWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

- (ComGoogleCommonCollectCut *)canonicalWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (void)describeAsLowerBoundWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb;

- (void)describeAsUpperBoundWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb;

- (id)endpoint;

- (id)greatestValueBelowWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (jboolean)isLessThanWithJavaLangComparable:(id<JavaLangComparable>)value;

- (id)leastValueAboveWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (ComGoogleCommonCollectBoundTypeEnum *)typeAsLowerBound;

- (ComGoogleCommonCollectBoundTypeEnum *)typeAsUpperBound;

- (ComGoogleCommonCollectCut *)withLowerBoundTypeWithComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType
                                                withComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (ComGoogleCommonCollectCut *)withUpperBoundTypeWithComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType
                                                withComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCut)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectCut, endpoint_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectCut_initWithJavaLangComparable_(ComGoogleCommonCollectCut *self, id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectCut *ComGoogleCommonCollectCut_belowAll();

FOUNDATION_EXPORT ComGoogleCommonCollectCut *ComGoogleCommonCollectCut_aboveAll();

FOUNDATION_EXPORT ComGoogleCommonCollectCut *ComGoogleCommonCollectCut_belowValueWithJavaLangComparable_(id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectCut *ComGoogleCommonCollectCut_aboveValueWithJavaLangComparable_(id<JavaLangComparable> endpoint);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCut)

#endif

#pragma pop_macro("ComGoogleCommonCollectCut_INCLUDE_ALL")