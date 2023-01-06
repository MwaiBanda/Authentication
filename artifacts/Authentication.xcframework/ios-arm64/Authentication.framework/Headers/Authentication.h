#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AuthenticationAuthResult<T>, AuthenticationUserResponse, AuthenticationUserResponseCompanion, AuthenticationKotlinUnit, AuthenticationKodein_diDITrigger, AuthenticationAuthentication, AuthenticationKodein_diDIModule, AuthenticationKotlinThrowable, AuthenticationKotlinArray<T>, AuthenticationKotlinException, AuthenticationKotlinRuntimeException, AuthenticationKotlinIllegalStateException, AuthenticationKotlinx_serialization_coreSerializersModule, AuthenticationKotlinx_serialization_coreSerialKind, AuthenticationKotlinNothing, AuthenticationKodein_diDIKey<__contravariant C, __contravariant A, __covariant T>, AuthenticationKodein_diDIDefinition<C, A, T>, AuthenticationKotlinTriple<__covariant A, __covariant B, __covariant C>, AuthenticationKodein_diSearchSpecs, AuthenticationKodein_diScopeRegistry, AuthenticationKodein_diDIDefining<C, A, T>, AuthenticationKodein_diReference<__covariant T>;

@protocol AuthenticationKotlinx_serialization_coreKSerializer, AuthenticationAuthenticationService, AuthenticationKodein_diDI, AuthenticationKodein_diDIContext, AuthenticationKodein_diDIAware, AuthenticationAuthenticationController, AuthenticationKotlinx_serialization_coreEncoder, AuthenticationKotlinx_serialization_coreSerialDescriptor, AuthenticationKotlinx_serialization_coreSerializationStrategy, AuthenticationKotlinx_serialization_coreDecoder, AuthenticationKotlinx_serialization_coreDeserializationStrategy, AuthenticationKodein_diDIContainer, AuthenticationKodein_typeTypeToken, AuthenticationKotlinLazy, AuthenticationKodein_diDIBuilder, AuthenticationKotlinx_serialization_coreCompositeEncoder, AuthenticationKotlinAnnotation, AuthenticationKotlinx_serialization_coreCompositeDecoder, AuthenticationKotlinIterator, AuthenticationKodein_diDITree, AuthenticationKodein_diDIBuilderDirectBinder, AuthenticationKodein_diDIBinding, AuthenticationKodein_diDIBuilderTypeBinder, AuthenticationKodein_diContextTranslator, AuthenticationKodein_diDIBuilderConstantBinder, AuthenticationKodein_diDirectDI, AuthenticationKodein_diDIContainerBuilder, AuthenticationKodein_diDIBindBuilder, AuthenticationKodein_diScope, AuthenticationKodein_diDIBindBuilderWithScope, AuthenticationKotlinx_serialization_coreSerializersModuleCollector, AuthenticationKotlinKClass, AuthenticationKodein_diExternalSource, AuthenticationKodein_diDIBindingCopier, AuthenticationKodein_diBindingDI, AuthenticationKodein_diBinding, AuthenticationKodein_diDirectDIAware, AuthenticationKodein_diDirectDIBase, AuthenticationKotlinKDeclarationContainer, AuthenticationKotlinKAnnotatedElement, AuthenticationKotlinKClassifier, AuthenticationKodein_diWithContext, AuthenticationKodein_diScopeCloseable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface AuthenticationBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface AuthenticationBase (AuthenticationBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface AuthenticationMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AuthenticationMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorAuthenticationKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface AuthenticationNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface AuthenticationByte : AuthenticationNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface AuthenticationUByte : AuthenticationNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface AuthenticationShort : AuthenticationNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface AuthenticationUShort : AuthenticationNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface AuthenticationInt : AuthenticationNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface AuthenticationUInt : AuthenticationNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface AuthenticationLong : AuthenticationNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface AuthenticationULong : AuthenticationNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface AuthenticationFloat : AuthenticationNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface AuthenticationDouble : AuthenticationNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface AuthenticationBoolean : AuthenticationNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("AuthResult")))
@interface AuthenticationAuthResult<T> : AuthenticationBase
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthResultFailure")))
@interface AuthenticationAuthResultFailure<T> : AuthenticationAuthResult<T>
- (instancetype)initWithMessage:(NSString *)message data:(T _Nullable)data __attribute__((swift_name("init(message:data:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthResultSuccess")))
@interface AuthenticationAuthResultSuccess<T> : AuthenticationAuthResult<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("AuthenticationController")))
@protocol AuthenticationAuthenticationController
@required
- (void)checkAuthAndSignAsGuestOnCompletion:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> *))onCompletion __attribute__((swift_name("checkAuthAndSignAsGuest(onCompletion:)")));
- (void)deleteUser __attribute__((swift_name("deleteUser()")));
- (void)getCurrentUserOnCompletion:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> *))onCompletion __attribute__((swift_name("getCurrentUser(onCompletion:)")));
- (void)isUserSignedInOnCompletion:(void (^)(AuthenticationBoolean *))onCompletion __attribute__((swift_name("isUserSignedIn(onCompletion:)")));
- (void)signInAsGuestOnCompletion:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> *))onCompletion __attribute__((swift_name("signInAsGuest(onCompletion:)")));
- (void)signInWithEmailEmail:(NSString *)email password:(NSString *)password onCompletion:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> *))onCompletion __attribute__((swift_name("signInWithEmail(email:password:onCompletion:)")));
- (void)signOut __attribute__((swift_name("signOut()")));
- (void)signUpWithEmailEmail:(NSString *)email password:(NSString *)password onCompletion:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> *))onCompletion __attribute__((swift_name("signUpWithEmail(email:password:onCompletion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserResponse")))
@interface AuthenticationUserResponse : AuthenticationBase
- (instancetype)initWithUid:(NSString *)uid email:(NSString * _Nullable)email isAnonymous:(BOOL)isAnonymous __attribute__((swift_name("init(uid:email:isAnonymous:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthenticationUserResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (AuthenticationUserResponse *)doCopyUid:(NSString *)uid email:(NSString * _Nullable)email isAnonymous:(BOOL)isAnonymous __attribute__((swift_name("doCopy(uid:email:isAnonymous:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) BOOL isAnonymous __attribute__((swift_name("isAnonymous")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserResponse.Companion")))
@interface AuthenticationUserResponseCompanion : AuthenticationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthenticationUserResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<AuthenticationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("AuthenticationService")))
@protocol AuthenticationAuthenticationService
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteUserWithCompletionHandler:(void (^)(AuthenticationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteUser(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentUserWithCompletionHandler:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentUser(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isUserSignedInWithCompletionHandler:(void (^)(AuthenticationBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isUserSignedIn(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInAsGuestWithCompletionHandler:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInAsGuest(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInWithEmailEmail:(NSString *)email password:(NSString *)password completionHandler:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInWithEmail(email:password:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signOutWithCompletionHandler:(void (^)(AuthenticationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signOut(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signUpWithEmailEmail:(NSString *)email password:(NSString *)password completionHandler:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signUpWithEmail(email:password:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteUserUseCase")))
@interface AuthenticationDeleteUserUseCase : AuthenticationBase
- (instancetype)initWithAuthenticationService:(id<AuthenticationAuthenticationService>)authenticationService __attribute__((swift_name("init(authenticationService:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(AuthenticationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCurrentUserUseCase")))
@interface AuthenticationGetCurrentUserUseCase : AuthenticationBase
- (instancetype)initWithAuthenticationService:(id<AuthenticationAuthenticationService>)authenticationService __attribute__((swift_name("init(authenticationService:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeOnCompletion:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> *))onCompletion completionHandler:(void (^)(AuthenticationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(onCompletion:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsUserSignedInUseCase")))
@interface AuthenticationIsUserSignedInUseCase : AuthenticationBase
- (instancetype)initWithAuthenticationService:(id<AuthenticationAuthenticationService>)authenticationService __attribute__((swift_name("init(authenticationService:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(AuthenticationBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignInAsGuestUseCase")))
@interface AuthenticationSignInAsGuestUseCase : AuthenticationBase
- (instancetype)initWithAuthenticationService:(id<AuthenticationAuthenticationService>)authenticationService __attribute__((swift_name("init(authenticationService:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeOnCompletion:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> *))onCompletion completionHandler:(void (^)(AuthenticationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(onCompletion:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignInWithEmailUseCase")))
@interface AuthenticationSignInWithEmailUseCase : AuthenticationBase
- (instancetype)initWithAuthenticationService:(id<AuthenticationAuthenticationService>)authenticationService __attribute__((swift_name("init(authenticationService:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeEmail:(NSString *)email password:(NSString *)password onCompletion:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> *))onCompletion completionHandler:(void (^)(AuthenticationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(email:password:onCompletion:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignOutUseCase")))
@interface AuthenticationSignOutUseCase : AuthenticationBase
- (instancetype)initWithAuthenticationService:(id<AuthenticationAuthenticationService>)authenticationService __attribute__((swift_name("init(authenticationService:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(AuthenticationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpWithEmailUseCase")))
@interface AuthenticationSignUpWithEmailUseCase : AuthenticationBase
- (instancetype)initWithAuthenticationService:(id<AuthenticationAuthenticationService>)authenticationService __attribute__((swift_name("init(authenticationService:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeEmail:(NSString *)email password:(NSString *)password onCompletion:(void (^)(AuthenticationAuthResult<AuthenticationUserResponse *> *))onCompletion completionHandler:(void (^)(AuthenticationKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(email:password:onCompletion:completionHandler:)")));
@end;

__attribute__((swift_name("Kodein_diDIAware")))
@protocol AuthenticationKodein_diDIAware
@required
@property (readonly) id<AuthenticationKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<AuthenticationKodein_diDIContext> diContext __attribute__((swift_name("diContext")));
@property (readonly) AuthenticationKodein_diDITrigger * _Nullable diTrigger __attribute__((swift_name("diTrigger")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Authentication")))
@interface AuthenticationAuthentication : AuthenticationBase <AuthenticationKodein_diDIAware>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authentication __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthenticationAuthentication *shared __attribute__((swift_name("shared")));
@property (readonly) id<AuthenticationAuthenticationController> controller __attribute__((swift_name("controller")));
@property (readonly) id<AuthenticationKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<AuthenticationAuthenticationService> service __attribute__((swift_name("service")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllerModuleKt")))
@interface AuthenticationControllerModuleKt : AuthenticationBase
@property (class, readonly) AuthenticationKodein_diDIModule *authControllerModule __attribute__((swift_name("authControllerModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceModuleKt")))
@interface AuthenticationServiceModuleKt : AuthenticationBase
@property (class, readonly) AuthenticationKodein_diDIModule *authServiceModule __attribute__((swift_name("authServiceModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingletonModuleKt")))
@interface AuthenticationSingletonModuleKt : AuthenticationBase
@property (class, readonly) AuthenticationKodein_diDIModule *authSingletonModule __attribute__((swift_name("authSingletonModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UseCaseModuleKt")))
@interface AuthenticationUseCaseModuleKt : AuthenticationBase
@property (class, readonly) AuthenticationKodein_diDIModule *authUseCasesModule __attribute__((swift_name("authUseCasesModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol AuthenticationKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<AuthenticationKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AuthenticationKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol AuthenticationKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AuthenticationKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<AuthenticationKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol AuthenticationKotlinx_serialization_coreKSerializer <AuthenticationKotlinx_serialization_coreSerializationStrategy, AuthenticationKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface AuthenticationKotlinThrowable : AuthenticationBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AuthenticationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AuthenticationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (AuthenticationKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AuthenticationKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface AuthenticationKotlinException : AuthenticationKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AuthenticationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AuthenticationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface AuthenticationKotlinRuntimeException : AuthenticationKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AuthenticationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AuthenticationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface AuthenticationKotlinIllegalStateException : AuthenticationKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AuthenticationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AuthenticationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface AuthenticationKotlinCancellationException : AuthenticationKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AuthenticationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AuthenticationKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface AuthenticationKotlinUnit : AuthenticationBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthenticationKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kodein_diDI")))
@protocol AuthenticationKodein_diDI <AuthenticationKodein_diDIAware>
@required
@property (readonly) id<AuthenticationKodein_diDIContainer> container __attribute__((swift_name("container")));
@end;

__attribute__((swift_name("Kodein_diDIContext")))
@protocol AuthenticationKodein_diDIContext
@required
@property (readonly) id<AuthenticationKodein_typeTypeToken> type __attribute__((swift_name("type")));
@property (readonly) id value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDITrigger")))
@interface AuthenticationKodein_diDITrigger : AuthenticationBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) NSMutableArray<id<AuthenticationKotlinLazy>> *properties __attribute__((swift_name("properties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIModule")))
@interface AuthenticationKodein_diDIModule : AuthenticationBase
- (instancetype)initWithAllowSilentOverride:(BOOL)allowSilentOverride init:(void (^)(id<AuthenticationKodein_diDIBuilder>))init __attribute__((swift_name("init(allowSilentOverride:init:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("You should name your modules, for debug purposes.")));
- (instancetype)initWithName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<AuthenticationKodein_diDIBuilder>))init __attribute__((swift_name("init(name:allowSilentOverride:prefix:init:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (void (^)(id<AuthenticationKodein_diDIBuilder>))component4 __attribute__((swift_name("component4()")));
- (AuthenticationKodein_diDIModule *)doCopyName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<AuthenticationKodein_diDIBuilder>))init __attribute__((swift_name("doCopy(name:allowSilentOverride:prefix:init:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSilentOverride __attribute__((swift_name("allowSilentOverride")));
@property (readonly, getter=doInit) void (^init)(id<AuthenticationKodein_diDIBuilder>) __attribute__((swift_name("init")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol AuthenticationKotlinx_serialization_coreEncoder
@required
- (id<AuthenticationKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<AuthenticationKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<AuthenticationKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<AuthenticationKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AuthenticationKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) AuthenticationKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol AuthenticationKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<AuthenticationKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<AuthenticationKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) AuthenticationKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol AuthenticationKotlinx_serialization_coreDecoder
@required
- (id<AuthenticationKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<AuthenticationKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (AuthenticationKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AuthenticationKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AuthenticationKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) AuthenticationKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AuthenticationKotlinArray<T> : AuthenticationBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(AuthenticationInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AuthenticationKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_diDIContainer")))
@protocol AuthenticationKodein_diDIContainer
@required
- (NSArray<id (^)(id _Nullable)> *)allFactoriesKey:(AuthenticationKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allFactories(key:context:overrideLevel:)")));
- (NSArray<id (^)(void)> *)allProvidersKey:(AuthenticationKodein_diDIKey<id, AuthenticationKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allProviders(key:context:overrideLevel:)")));
- (id (^)(id _Nullable))factoryKey:(AuthenticationKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factory(key:context:overrideLevel:)")));
- (id (^ _Nullable)(id _Nullable))factoryOrNullKey:(AuthenticationKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factoryOrNull(key:context:overrideLevel:)")));
- (id (^)(void))providerKey:(AuthenticationKodein_diDIKey<id, AuthenticationKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("provider(key:context:overrideLevel:)")));
- (id (^ _Nullable)(void))providerOrNullKey:(AuthenticationKodein_diDIKey<id, AuthenticationKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("providerOrNull(key:context:overrideLevel:)")));
@property (readonly) id<AuthenticationKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_typeTypeToken")))
@protocol AuthenticationKodein_typeTypeToken
@required
- (AuthenticationKotlinArray<id<AuthenticationKodein_typeTypeToken>> *)getGenericParameters __attribute__((swift_name("getGenericParameters()")));
- (id<AuthenticationKodein_typeTypeToken>)getRaw __attribute__((swift_name("getRaw()")));
- (NSArray<id<AuthenticationKodein_typeTypeToken>> *)getSuper __attribute__((swift_name("getSuper()")));
- (BOOL)isAssignableFromTypeToken:(id<AuthenticationKodein_typeTypeToken>)typeToken __attribute__((swift_name("isAssignableFrom(typeToken:)")));
- (BOOL)isGeneric __attribute__((swift_name("isGeneric()")));
- (BOOL)isWildcard __attribute__((swift_name("isWildcard()")));
- (NSString *)qualifiedDispString __attribute__((swift_name("qualifiedDispString()")));
- (NSString *)qualifiedErasedDispString __attribute__((swift_name("qualifiedErasedDispString()")));
- (NSString *)simpleDispString __attribute__((swift_name("simpleDispString()")));
- (NSString *)simpleErasedDispString __attribute__((swift_name("simpleErasedDispString()")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol AuthenticationKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kodein_diDIBindBuilder")))
@protocol AuthenticationKodein_diDIBindBuilder
@required
@property (readonly) id<AuthenticationKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) BOOL explicitContext __attribute__((swift_name("explicitContext")));
@end;

__attribute__((swift_name("Kodein_diDIBindBuilderWithScope")))
@protocol AuthenticationKodein_diDIBindBuilderWithScope <AuthenticationKodein_diDIBindBuilder>
@required
@property (readonly) id<AuthenticationKodein_diScope> scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Kodein_diDIBuilder")))
@protocol AuthenticationKodein_diDIBuilder <AuthenticationKodein_diDIBindBuilder, AuthenticationKodein_diDIBindBuilderWithScope>
@required
- (id<AuthenticationKodein_diDIBuilderDirectBinder>)BindTag:(id _Nullable)tag overrides:(AuthenticationBoolean * _Nullable)overrides __attribute__((swift_name("Bind(tag:overrides:)")));
- (void)BindTag:(id _Nullable)tag overrides:(AuthenticationBoolean * _Nullable)overrides binding:(id<AuthenticationKodein_diDIBinding>)binding __attribute__((swift_name("Bind(tag:overrides:binding:)")));
- (id<AuthenticationKodein_diDIBuilderTypeBinder>)BindType:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag overrides:(AuthenticationBoolean * _Nullable)overrides __attribute__((swift_name("Bind(type:tag:overrides:)")));
- (void)BindSetTag:(id _Nullable)tag overrides:(AuthenticationBoolean * _Nullable)overrides binding:(id<AuthenticationKodein_diDIBinding>)binding __attribute__((swift_name("BindSet(tag:overrides:binding:)")));
- (void)RegisterContextTranslatorTranslator:(id<AuthenticationKodein_diContextTranslator>)translator __attribute__((swift_name("RegisterContextTranslator(translator:)")));
- (id<AuthenticationKodein_diDIBuilderConstantBinder>)constantTag:(id)tag overrides:(AuthenticationBoolean * _Nullable)overrides __attribute__((swift_name("constant(tag:overrides:)")));
- (void)importModule:(AuthenticationKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("import(module:allowOverride:)")));
- (void)importAllModules:(AuthenticationKotlinArray<AuthenticationKodein_diDIModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride:)")));
- (void)importAllModules:(id)modules allowOverride_:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride_:)")));
- (void)importOnceModule:(AuthenticationKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("importOnce(module:allowOverride:)")));
- (void)onReadyCb:(void (^)(id<AuthenticationKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
@property (readonly) id<AuthenticationKodein_diDIContainerBuilder> containerBuilder __attribute__((swift_name("containerBuilder")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol AuthenticationKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<AuthenticationKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AuthenticationKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AuthenticationKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) AuthenticationKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface AuthenticationKotlinx_serialization_coreSerializersModule : AuthenticationBase
- (void)dumpToCollector:(id<AuthenticationKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<AuthenticationKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<AuthenticationKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<AuthenticationKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<AuthenticationKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AuthenticationKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<AuthenticationKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AuthenticationKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol AuthenticationKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface AuthenticationKotlinx_serialization_coreSerialKind : AuthenticationBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol AuthenticationKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<AuthenticationKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AuthenticationKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AuthenticationKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AuthenticationKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) AuthenticationKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AuthenticationKotlinNothing : AuthenticationBase
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol AuthenticationKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIKey")))
@interface AuthenticationKodein_diDIKey<__contravariant C, __contravariant A, __covariant T> : AuthenticationBase
- (instancetype)initWithContextType:(id<AuthenticationKodein_typeTypeToken>)contextType argType:(id<AuthenticationKodein_typeTypeToken>)argType type:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (id<AuthenticationKodein_typeTypeToken>)component1 __attribute__((swift_name("component1()")));
- (id<AuthenticationKodein_typeTypeToken>)component2 __attribute__((swift_name("component2()")));
- (id<AuthenticationKodein_typeTypeToken>)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (AuthenticationKodein_diDIKey<C, A, T> *)doCopyContextType:(id<AuthenticationKodein_typeTypeToken>)contextType argType:(id<AuthenticationKodein_typeTypeToken>)argType type:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("doCopy(contextType:argType:type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AuthenticationKodein_typeTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) NSString *bindDescription __attribute__((swift_name("bindDescription")));
@property (readonly) NSString *bindFullDescription __attribute__((swift_name("bindFullDescription")));
@property (readonly) id<AuthenticationKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) NSString *internalDescription __attribute__((swift_name("internalDescription")));
@property (readonly) id _Nullable tag __attribute__((swift_name("tag")));
@property (readonly) id<AuthenticationKodein_typeTypeToken> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diDITree")))
@protocol AuthenticationKodein_diDITree
@required
- (NSArray<AuthenticationKotlinTriple<AuthenticationKodein_diDIKey<id, id, id> *, AuthenticationKodein_diDIDefinition<id, id, id> *, id<AuthenticationKodein_diContextTranslator>> *> *)findKey:(AuthenticationKodein_diDIKey<id, id, id> *)key overrideLevel:(int32_t)overrideLevel all:(BOOL)all __attribute__((swift_name("find(key:overrideLevel:all:)")));
- (NSArray<AuthenticationKotlinTriple<AuthenticationKodein_diDIKey<id, id, id> *, NSArray<AuthenticationKodein_diDIDefinition<id, id, id> *> *, id<AuthenticationKodein_diContextTranslator>> *> *)findSearch:(AuthenticationKodein_diSearchSpecs *)search __attribute__((swift_name("find(search:)")));
- (AuthenticationKotlinTriple<AuthenticationKodein_diDIKey<id, id, id> *, NSArray<AuthenticationKodein_diDIDefinition<id, id, id> *> *, id<AuthenticationKodein_diContextTranslator>> * _Nullable)getKey:(AuthenticationKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("get(key:)")));
@property (readonly) NSDictionary<AuthenticationKodein_diDIKey<id, id, id> *, NSArray<AuthenticationKodein_diDIDefinition<id, id, id> *> *> *bindings __attribute__((swift_name("bindings")));
@property (readonly) NSArray<id<AuthenticationKodein_diExternalSource>> *externalSources __attribute__((swift_name("externalSources")));
@property (readonly) NSArray<id<AuthenticationKodein_diContextTranslator>> *registeredTranslators __attribute__((swift_name("registeredTranslators")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderDirectBinder")))
@protocol AuthenticationKodein_diDIBuilderDirectBinder
@required
- (void)fromBinding:(id<AuthenticationKodein_diDIBinding>)binding __attribute__((swift_name("from(binding:)"))) __attribute__((deprecated("'bind() fron [BINDING]' might be replace by 'bind { [BINDING] }' (This will be remove in Kodein-DI 8.0)")));
@end;

__attribute__((swift_name("Kodein_diBinding")))
@protocol AuthenticationKodein_diBinding
@required
- (id (^)(id _Nullable))getFactoryKey:(AuthenticationKodein_diDIKey<id, id, id> *)key di:(id<AuthenticationKodein_diBindingDI>)di __attribute__((swift_name("getFactory(key:di:)")));
@end;

__attribute__((swift_name("Kodein_diDIBinding")))
@protocol AuthenticationKodein_diDIBinding <AuthenticationKodein_diBinding>
@required
- (NSString *)factoryFullName __attribute__((swift_name("factoryFullName()")));
- (NSString *)factoryName __attribute__((swift_name("factoryName()")));
@property (readonly) id<AuthenticationKodein_typeTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) id<AuthenticationKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<AuthenticationKodein_diDIBindingCopier> _Nullable copier __attribute__((swift_name("copier")));
@property (readonly) id<AuthenticationKodein_typeTypeToken> createdType __attribute__((swift_name("createdType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) id<AuthenticationKodein_diScope> _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) BOOL supportSubTypes __attribute__((swift_name("supportSubTypes")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderTypeBinder")))
@protocol AuthenticationKodein_diDIBuilderTypeBinder
@required
- (void)withBinding:(id<AuthenticationKodein_diDIBinding>)binding __attribute__((swift_name("with(binding:)")));
@end;

__attribute__((swift_name("Kodein_diContextTranslator")))
@protocol AuthenticationKodein_diContextTranslator
@required
- (id _Nullable)translateDi:(id<AuthenticationKodein_diDirectDI>)di ctx:(id)ctx __attribute__((swift_name("translate(di:ctx:)")));
@property (readonly) id<AuthenticationKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<AuthenticationKodein_typeTypeToken> scopeType __attribute__((swift_name("scopeType")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderConstantBinder")))
@protocol AuthenticationKodein_diDIBuilderConstantBinder
@required
- (void)WithValueType:(id<AuthenticationKodein_typeTypeToken>)valueType value:(id)value __attribute__((swift_name("With(valueType:value:)")));
@end;

__attribute__((swift_name("Kodein_diDirectDIAware")))
@protocol AuthenticationKodein_diDirectDIAware
@required
@property (readonly) id<AuthenticationKodein_diDirectDI> directDI __attribute__((swift_name("directDI")));
@end;

__attribute__((swift_name("Kodein_diDirectDIBase")))
@protocol AuthenticationKodein_diDirectDIBase <AuthenticationKodein_diDirectDIAware>
@required
- (id (^)(id _Nullable))FactoryArgType:(id<AuthenticationKodein_typeTypeToken>)argType type:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Factory(argType:type:tag:)")));
- (id (^ _Nullable)(id _Nullable))FactoryOrNullArgType:(id<AuthenticationKodein_typeTypeToken>)argType type:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("FactoryOrNull(argType:type:tag:)")));
- (id)InstanceType:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Instance(type:tag:)")));
- (id)InstanceArgType:(id<AuthenticationKodein_typeTypeToken>)argType type:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("Instance(argType:type:tag:arg:)")));
- (id _Nullable)InstanceOrNullType:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("InstanceOrNull(type:tag:)")));
- (id _Nullable)InstanceOrNullArgType:(id<AuthenticationKodein_typeTypeToken>)argType type:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("InstanceOrNull(argType:type:tag:arg:)")));
- (id<AuthenticationKodein_diDirectDI>)OnContext:(id<AuthenticationKodein_diDIContext>)context __attribute__((swift_name("On(context:)")));
- (id (^)(void))ProviderType:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Provider(type:tag:)")));
- (id (^)(void))ProviderArgType:(id<AuthenticationKodein_typeTypeToken>)argType type:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("Provider(argType:type:tag:arg:)")));
- (id (^ _Nullable)(void))ProviderOrNullType:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("ProviderOrNull(type:tag:)")));
- (id (^ _Nullable)(void))ProviderOrNullArgType:(id<AuthenticationKodein_typeTypeToken>)argType type:(id<AuthenticationKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("ProviderOrNull(argType:type:tag:arg:)")));
@property (readonly) id<AuthenticationKodein_diDIContainer> container __attribute__((swift_name("container")));
@property (readonly) id<AuthenticationKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<AuthenticationKodein_diDI> lazy __attribute__((swift_name("lazy")));
@end;

__attribute__((swift_name("Kodein_diDirectDI")))
@protocol AuthenticationKodein_diDirectDI <AuthenticationKodein_diDirectDIBase>
@required
@end;

__attribute__((swift_name("Kodein_diDIContainerBuilder")))
@protocol AuthenticationKodein_diDIContainerBuilder
@required
- (void)bindKey:(AuthenticationKodein_diDIKey<id, id, id> *)key binding:(id<AuthenticationKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule overrides:(AuthenticationBoolean * _Nullable)overrides __attribute__((swift_name("bind(key:binding:fromModule:overrides:)")));
- (void)extendContainer:(id<AuthenticationKodein_diDIContainer>)container allowOverride:(BOOL)allowOverride copy:(NSSet<AuthenticationKodein_diDIKey<id, id, id> *> *)copy __attribute__((swift_name("extend(container:allowOverride:copy:)")));
- (void)onReadyCb:(void (^)(id<AuthenticationKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
- (void)registerContextTranslatorTranslator:(id<AuthenticationKodein_diContextTranslator>)translator __attribute__((swift_name("registerContextTranslator(translator:)")));
- (id<AuthenticationKodein_diDIContainerBuilder>)subBuilderAllowOverride:(BOOL)allowOverride silentOverride:(BOOL)silentOverride __attribute__((swift_name("subBuilder(allowOverride:silentOverride:)")));
@end;

__attribute__((swift_name("Kodein_diScope")))
@protocol AuthenticationKodein_diScope
@required
- (AuthenticationKodein_diScopeRegistry *)getRegistryContext:(id _Nullable)context __attribute__((swift_name("getRegistry(context:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol AuthenticationKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<AuthenticationKotlinKClass>)kClass provider:(id<AuthenticationKotlinx_serialization_coreKSerializer> (^)(NSArray<id<AuthenticationKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<AuthenticationKotlinKClass>)kClass serializer:(id<AuthenticationKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AuthenticationKotlinKClass>)baseClass actualClass:(id<AuthenticationKotlinKClass>)actualClass actualSerializer:(id<AuthenticationKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<AuthenticationKotlinKClass>)baseClass defaultDeserializerProvider:(id<AuthenticationKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<AuthenticationKotlinKClass>)baseClass defaultDeserializerProvider:(id<AuthenticationKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<AuthenticationKotlinKClass>)baseClass defaultSerializerProvider:(id<AuthenticationKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AuthenticationKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AuthenticationKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol AuthenticationKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol AuthenticationKotlinKClass <AuthenticationKotlinKDeclarationContainer, AuthenticationKotlinKAnnotatedElement, AuthenticationKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kodein_diDIDefining")))
@interface AuthenticationKodein_diDIDefining<C, A, T> : AuthenticationBase
- (instancetype)initWithBinding:(id<AuthenticationKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<AuthenticationKodein_diDIBinding> binding __attribute__((swift_name("binding")));
@property (readonly) NSString * _Nullable fromModule __attribute__((swift_name("fromModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIDefinition")))
@interface AuthenticationKodein_diDIDefinition<C, A, T> : AuthenticationKodein_diDIDefining<C, A, T>
- (instancetype)initWithBinding:(id<AuthenticationKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule tree:(id<AuthenticationKodein_diDITree>)tree __attribute__((swift_name("init(binding:fromModule:tree:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBinding:(id<AuthenticationKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<AuthenticationKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface AuthenticationKotlinTriple<__covariant A, __covariant B, __covariant C> : AuthenticationBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (C _Nullable)component3 __attribute__((swift_name("component3()")));
- (AuthenticationKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end;

__attribute__((swift_name("Kodein_diSearchSpecs")))
@interface AuthenticationKodein_diSearchSpecs : AuthenticationBase
- (instancetype)initWithContextType:(id<AuthenticationKodein_typeTypeToken> _Nullable)contextType argType:(id<AuthenticationKodein_typeTypeToken> _Nullable)argType type:(id<AuthenticationKodein_typeTypeToken> _Nullable)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property id<AuthenticationKodein_typeTypeToken> _Nullable argType __attribute__((swift_name("argType")));
@property id<AuthenticationKodein_typeTypeToken> _Nullable contextType __attribute__((swift_name("contextType")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@property id<AuthenticationKodein_typeTypeToken> _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diExternalSource")))
@protocol AuthenticationKodein_diExternalSource
@required
- (id (^ _Nullable)(id _Nullable))getFactoryDi:(id<AuthenticationKodein_diBindingDI>)di key:(AuthenticationKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("getFactory(di:key:)")));
@end;

__attribute__((swift_name("Kodein_diDIBindingCopier")))
@protocol AuthenticationKodein_diDIBindingCopier
@required
- (id<AuthenticationKodein_diDIBinding>)doCopyBuilder:(id<AuthenticationKodein_diDIContainerBuilder>)builder __attribute__((swift_name("doCopy(builder:)")));
@end;

__attribute__((swift_name("Kodein_diWithContext")))
@protocol AuthenticationKodein_diWithContext
@required
@property (readonly) id context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kodein_diBindingDI")))
@protocol AuthenticationKodein_diBindingDI <AuthenticationKodein_diDirectDI, AuthenticationKodein_diWithContext>
@required
- (id<AuthenticationKodein_diBindingDI>)onErasedContext __attribute__((swift_name("onErasedContext()")));
- (id (^)(id _Nullable))overriddenFactory __attribute__((swift_name("overriddenFactory()")));
- (id (^ _Nullable)(id _Nullable))overriddenFactoryOrNull __attribute__((swift_name("overriddenFactoryOrNull()")));
@end;

__attribute__((swift_name("Kodein_diScopeCloseable")))
@protocol AuthenticationKodein_diScopeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_diScopeRegistry")))
@interface AuthenticationKodein_diScopeRegistry : AuthenticationBase <AuthenticationKodein_diScopeCloseable>
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (id)getOrCreateKey:(id)key sync:(BOOL)sync creator:(AuthenticationKodein_diReference<id> *(^)(void))creator __attribute__((swift_name("getOrCreate(key:sync:creator:)")));
- (id _Nullable (^ _Nullable)(void))getOrNullKey:(id)key __attribute__((swift_name("getOrNull(key:)")));
- (void)removeKey:(id)key __attribute__((swift_name("remove(key:)")));
- (id)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diReference")))
@interface AuthenticationKodein_diReference<__covariant T> : AuthenticationBase
- (instancetype)initWithCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("init(current:next:)"))) __attribute__((objc_designated_initializer));
- (T)component1 __attribute__((swift_name("component1()")));
- (T _Nullable (^)(void))component2 __attribute__((swift_name("component2()")));
- (AuthenticationKodein_diReference<T> *)doCopyCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("doCopy(current:next:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T current __attribute__((swift_name("current")));
@property (readonly) T _Nullable (^next)(void) __attribute__((swift_name("next")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
