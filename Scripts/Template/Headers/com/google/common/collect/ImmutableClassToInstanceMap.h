//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ImmutableClassToInstanceMap.java
//

#include <j2objc/J2ObjC_header.h>

#pragma push_macro("ComGoogleCommonCollectImmutableClassToInstanceMap_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableClassToInstanceMap_RESTRICT
#define ComGoogleCommonCollectImmutableClassToInstanceMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableClassToInstanceMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableClassToInstanceMap_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableClassToInstanceMap_) && (ComGoogleCommonCollectImmutableClassToInstanceMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableClassToInstanceMap_INCLUDE)
#define _ComGoogleCommonCollectImmutableClassToInstanceMap_

#define ComGoogleCommonCollectForwardingMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMap_INCLUDE 1
#include <j2objc/com/google/common/collect/ForwardingMap.h>

#define ComGoogleCommonCollectClassToInstanceMap_RESTRICT 1
#define ComGoogleCommonCollectClassToInstanceMap_INCLUDE 1
#include <j2objc/com/google/common/collect/ClassToInstanceMap.h>

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include <j2objc/java/io/Serializable.h>

@class ComGoogleCommonCollectImmutableClassToInstanceMap_Builder;
@class IOSClass;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectImmutableClassToInstanceMap : ComGoogleCommonCollectForwardingMap < ComGoogleCommonCollectClassToInstanceMap, JavaIoSerializable >

#pragma mark Public

+ (ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *)builder;

+ (ComGoogleCommonCollectImmutableClassToInstanceMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap>)map OBJC_METHOD_FAMILY_NONE;

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableClassToInstanceMap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *ComGoogleCommonCollectImmutableClassToInstanceMap_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableClassToInstanceMap *ComGoogleCommonCollectImmutableClassToInstanceMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableClassToInstanceMap)

#endif

#if !defined (_ComGoogleCommonCollectImmutableClassToInstanceMap_Builder_) && (ComGoogleCommonCollectImmutableClassToInstanceMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableClassToInstanceMap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableClassToInstanceMap_Builder_

@class ComGoogleCommonCollectImmutableClassToInstanceMap;
@class IOSClass;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectImmutableClassToInstanceMap_Builder : NSObject

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableClassToInstanceMap *)build;

- (ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *)putWithIOSClass:(IOSClass *)key
                                                                        withId:(id)value;

- (ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableClassToInstanceMap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableClassToInstanceMap_Builder_init(ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *new_ComGoogleCommonCollectImmutableClassToInstanceMap_Builder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableClassToInstanceMap_Builder)

#endif

#pragma pop_macro("ComGoogleCommonCollectImmutableClassToInstanceMap_INCLUDE_ALL")