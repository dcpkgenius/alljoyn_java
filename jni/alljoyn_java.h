/******************************************************************************
 * Copyright 2010 - 2011, Qualcomm Innovation Center, Inc.
 * 
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 * 
 *        http://www.apache.org/licenses/LICENSE-2.0
 * 
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 * 
 ******************************************************************************/
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_alljoyn_bus_BusAuthListener */

#ifndef _Included_org_alljoyn_bus_BusAuthListener
#define _Included_org_alljoyn_bus_BusAuthListener
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_BusAttachment */

#ifndef _Included_org_alljoyn_bus_BusAttachment
#define _Included_org_alljoyn_bus_BusAttachment
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    create
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_BusAttachment_create
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_BusAttachment_destroy
  (JNIEnv *, jobject);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    connect
 * Signature: (Ljava/lang/String;Lorg/alljoyn/bus/KeyStoreListener;Ljava/lang/String;Lorg/alljoyn/bus/BusAttachment$AuthListenerInternal;Ljava/lang/String;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_connect
  (JNIEnv *, jobject, jstring, jobject, jstring, jobject, jstring);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    disconnect
 * Signature: (Ljava/lang/String)V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_BusAttachment_disconnect
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    requestName
 * Signature: (Ljava/lang/String;I)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_requestName
  (JNIEnv *, jobject,
   jstring, jint);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    releaseName
 * Signature: (Ljava/lang/String;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_releaseName
  (JNIEnv *, jobject,
   jstring);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    addMatch
 * Signature: (Ljava/lang/String;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_addMatch
  (JNIEnv *, jobject,
   jstring);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    advertiseName
 * Signature: (Ljava/lang/String;S)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_advertiseName
  (JNIEnv *, jobject,
   jstring, jshort);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    cancelAdvertiseName
 * Signature: (Ljava/lang/String;Lorg/alljoyn/Mutable$IntegerValue;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_cancelAdvertiseName
  (JNIEnv *, jobject,
   jstring, jshort transports);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    findAdvertisedName
 * Signature: (Ljava/lang/String;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_findAdvertisedName
  (JNIEnv *, jobject,
   jstring);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    cancelFindAdvertiseName
 * Signature: (Ljava/lang/String;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_cancelFindAdvertisedName
  (JNIEnv *, jobject,
   jstring);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    bindSessionPort
 * Signature: (Lorg/alljoyn/bus/Mutable$ShortValue;Lorg/alljoyn/bus/SessionOpts;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_bindSessionPort
  (JNIEnv *, jobject, 
   jobject, jobject);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    joinSession
 * Signature: (Ljava/lang/String;SLorg/alljoyn/bus/SessionOpts;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_joinSession
  (JNIEnv *, jobject, 
   jstring, jshort, jobject, jobject);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    leaveSession
 * Signature: (I)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_leaveSession
  (JNIEnv *, jobject,
   jint);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    setDaemonDebug
 * Signature: (Ljava/lang/String;I)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_setDaemonDebug
  (JNIEnv *, jobject,
   jstring, jint);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    registerBusListener
 * Signature: (Lorg/alljoyn/bus/BusListener;)V;
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_BusAttachment_registerBusListener
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    unRregisterBusListener
 * Signature: (Lorg/alljoyn/bus/BusListener;)V;
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_BusAttachment_unRegisterBusListener
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    enablePeerSecurity
 * Signature: (Ljava/lang/String;Lorg/alljoyn/bus/BusAttachment$AuthListenerInternal;Ljava/lang/String;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL 
Java_org_alljoyn_bus_BusAttachment_enablePeerSecurity
  (JNIEnv *env, jobject, jstring, jobject, jstring);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    registerBusObject
 * Signature: (Ljava/lang/String;Lorg/alljoyn/bus/BusObject;[Lorg/alljoyn/bus/InterfaceDescription;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_registerBusObject
  (JNIEnv *, jobject, jstring, jobject, jobjectArray);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    unregisterBusObject
 * Signature: (Lorg/alljoyn/bus/BusObject;)V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_BusAttachment_unregisterBusObject
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    registerNativeSignalHandler
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/reflect/Method;Ljava/lang/String;)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_registerNativeSignalHandler
  (JNIEnv *, jobject, jstring, jstring, jobject, jobject, jstring);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    unregisterSignalHandler
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Method;)V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_BusAttachment_unregisterSignalHandler
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    getUniqueName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_getUniqueName
  (JNIEnv *, jobject);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    clearKeyStore
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_BusAttachment_clearKeyStore
  (JNIEnv *, jobject);

/*
 * Class:     org_alljoyn_bus_BusAttachment
 * Method:    getMessageContext
 * Signature: ()Lorg/alljoyn/bus/MessageContext;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_BusAttachment_getMessageContext
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_BusException */

#ifndef _Included_org_alljoyn_bus_BusException
#define _Included_org_alljoyn_bus_BusException
#ifdef __cplusplus
extern "C" {
#endif
#undef org_alljoyn_bus_BusException_serialVersionUID
#define org_alljoyn_bus_BusException_serialVersionUID -3042686055658047285LL
#undef org_alljoyn_bus_BusException_serialVersionUID
#define org_alljoyn_bus_BusException_serialVersionUID -3387516993124229948LL
/*
 * Class:     org_alljoyn_bus_BusException
 * Method:    logln
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_BusException_logln
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_BusListener */

#ifndef _Included_org_alljoyn_bus_BusListener
#define _Included_org_alljoyn_bus_BusListener
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_Guid */

#ifndef _Included_org_alljoyn_bus_Guid
#define _Included_org_alljoyn_bus_Guid
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_InterfaceDescription */

#ifndef _Included_org_alljoyn_bus_InterfaceDescription
#define _Included_org_alljoyn_bus_InterfaceDescription
#ifdef __cplusplus
extern "C" {
#endif
#undef org_alljoyn_bus_InterfaceDescription_INVALID
#define org_alljoyn_bus_InterfaceDescription_INVALID 0L
#undef org_alljoyn_bus_InterfaceDescription_METHOD_CALL
#define org_alljoyn_bus_InterfaceDescription_METHOD_CALL 1L
#undef org_alljoyn_bus_InterfaceDescription_SIGNAL
#define org_alljoyn_bus_InterfaceDescription_SIGNAL 4L
#undef org_alljoyn_bus_InterfaceDescription_READ
#define org_alljoyn_bus_InterfaceDescription_READ 1L
#undef org_alljoyn_bus_InterfaceDescription_WRITE
#define org_alljoyn_bus_InterfaceDescription_WRITE 2L
#undef org_alljoyn_bus_InterfaceDescription_RW
#define org_alljoyn_bus_InterfaceDescription_RW 3L
/*
 * Class:     org_alljoyn_bus_InterfaceDescription
 * Method:    create
 * Signature: (Lorg/alljoyn/bus/BusAttachment;Ljava/lang/String;Z)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_InterfaceDescription_create
  (JNIEnv *, jobject, jobject, jstring, jboolean);

/*
 * Class:     org_alljoyn_bus_InterfaceDescription
 * Method:    addMember
 * Signature: (ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_InterfaceDescription_addMember
  (JNIEnv *, jobject, jint, jstring, jstring, jstring, jint);

/*
 * Class:     org_alljoyn_bus_InterfaceDescription
 * Method:    addProperty
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)Lorg/alljoyn/bus/Status;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_InterfaceDescription_addProperty
  (JNIEnv *, jobject, jstring, jstring, jint);

/*
 * Class:     org_alljoyn_bus_InterfaceDescription
 * Method:    activate
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_InterfaceDescription_activate
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_InterfaceDescription_Property */

#ifndef _Included_org_alljoyn_bus_InterfaceDescription_Property
#define _Included_org_alljoyn_bus_InterfaceDescription_Property
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_BusObject */

#ifndef _Included_org_alljoyn_bus_BusObject
#define _Included_org_alljoyn_bus_BusObject
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_MessageContext */

#ifndef _Included_org_alljoyn_bus_MessageContext
#define _Included_org_alljoyn_bus_MessageContext
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ProxyBusObject */

#ifndef _Included_org_alljoyn_bus_ProxyBusObject
#define _Included_org_alljoyn_bus_ProxyBusObject
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_alljoyn_bus_ProxyBusObject
 * Method:    create
 * Signature: (Lorg/alljoyn/bus/BusAttachment;Ljava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_ProxyBusObject_create
(JNIEnv *, jobject, jobject, jstring, jstring, jint);

/*
 * Class:     org_alljoyn_bus_ProxyBusObject
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_ProxyBusObject_destroy
  (JNIEnv *, jobject);

/*
 * Class:     org_alljoyn_bus_ProxyBusObject
 * Method:    methodCall
 * Signature: (Lorg/alljoyn/bus/BusAttachment;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/reflect/Type;[Ljava/lang/Object;II)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_ProxyBusObject_methodCall
  (JNIEnv *, jobject, jobject, jstring, jstring, jstring, jobject, jobjectArray, jint, jint);

/*
 * Class:     org_alljoyn_bus_ProxyBusObject
 * Method:    getProperty
 * Signature: (Lorg/alljoyn/bus/BusAttachment;Ljava/lang/String;Ljava/lang/String;)Lorg/alljoyn/bus/Variant;
 */
JNIEXPORT jobject JNICALL Java_org_alljoyn_bus_ProxyBusObject_getProperty
  (JNIEnv *, jobject, jobject, jstring, jstring);

/*
 * Class:     org_alljoyn_bus_ProxyBusObject
 * Method:    setProperty
 * Signature: (Lorg/alljoyn/bus/BusAttachment;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_ProxyBusObject_setProperty
  (JNIEnv *, jobject, jobject, jstring, jstring, jstring, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ProxyBusObject_Handler */

#ifndef _Included_org_alljoyn_bus_ProxyBusObject_Handler
#define _Included_org_alljoyn_bus_ProxyBusObject_Handler
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_SignalEmitter */

#ifndef _Included_org_alljoyn_bus_SignalEmitter
#define _Included_org_alljoyn_bus_SignalEmitter
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_alljoyn_bus_SignalEmitter
 * Method:    signal
 * Signature: (Lorg/alljoyn/bus/BusObject;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;II)V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_SignalEmitter_signal
  (JNIEnv *, jobject, jobject, jstring, jint, jstring, jstring, jstring, jobjectArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_SignalEmitter_Emitter */

#ifndef _Included_org_alljoyn_bus_SignalEmitter_Emitter
#define _Included_org_alljoyn_bus_SignalEmitter_Emitter
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_Signature */

#ifndef _Included_org_alljoyn_bus_Signature
#define _Included_org_alljoyn_bus_Signature
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_alljoyn_bus_Signature
 * Method:    split
 * Signature: (Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_alljoyn_bus_Signature_split
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_Status */

#ifndef _Included_org_alljoyn_bus_Status
#define _Included_org_alljoyn_bus_Status
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_Variant */

#ifndef _Included_org_alljoyn_bus_Variant
#define _Included_org_alljoyn_bus_Variant
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     org_alljoyn_bus_Variant
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_Variant_destroy
  (JNIEnv *, jobject);

/*
 * Class:     org_alljoyn_bus_Variant
 * Method:    setMsgArg
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_alljoyn_bus_Variant_setMsgArg
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_annotation_BusInterface */

#ifndef _Included_org_alljoyn_bus_annotation_BusInterface
#define _Included_org_alljoyn_bus_annotation_BusInterface
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_annotation_BusMethod */

#ifndef _Included_org_alljoyn_bus_annotation_BusMethod
#define _Included_org_alljoyn_bus_annotation_BusMethod
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_annotation_BusSignal */

#ifndef _Included_org_alljoyn_bus_annotation_BusSignal
#define _Included_org_alljoyn_bus_annotation_BusSignal
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_annotation_BusSignalHandler */

#ifndef _Included_org_alljoyn_bus_annotation_BusSignalHandler
#define _Included_org_alljoyn_bus_annotation_BusSignalHandler
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_annotation_Position */

#ifndef _Included_org_alljoyn_bus_annotation_Position
#define _Included_org_alljoyn_bus_annotation_Position
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_annotation_Secure */

#ifndef _Included_org_alljoyn_bus_annotation_Secure
#define _Included_org_alljoyn_bus_annotation_Secure
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_annotation_Signature */

#ifndef _Included_org_alljoyn_bus_annotation_Signature
#define _Included_org_alljoyn_bus_annotation_Signature
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ifaces_DBusProxyObj */

#ifndef _Included_org_alljoyn_bus_ifaces_DBusProxyObj
#define _Included_org_alljoyn_bus_ifaces_DBusProxyObj
#ifdef __cplusplus
extern "C" {
#endif
#undef org_alljoyn_bus_ifaces_DBusProxyObj_REQUEST_NAME_ALLOW_REPLACEMENT
#define org_alljoyn_bus_ifaces_DBusProxyObj_REQUEST_NAME_ALLOW_REPLACEMENT 1L
#undef org_alljoyn_bus_ifaces_DBusProxyObj_REQUEST_NAME_REPLACE_EXISTING
#define org_alljoyn_bus_ifaces_DBusProxyObj_REQUEST_NAME_REPLACE_EXISTING 2L
#undef org_alljoyn_bus_ifaces_DBusProxyObj_REQUEST_NAME_DO_NOT_QUEUE
#define org_alljoyn_bus_ifaces_DBusProxyObj_REQUEST_NAME_DO_NOT_QUEUE 4L
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ifaces_DBusProxyObj_ReleaseNameResult */

#ifndef _Included_org_alljoyn_bus_ifaces_DBusProxyObj_ReleaseNameResult
#define _Included_org_alljoyn_bus_ifaces_DBusProxyObj_ReleaseNameResult
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ifaces_DBusProxyObj_RequestNameResult */

#ifndef _Included_org_alljoyn_bus_ifaces_DBusProxyObj_RequestNameResult
#define _Included_org_alljoyn_bus_ifaces_DBusProxyObj_RequestNameResult
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ifaces_Introspectable */

#ifndef _Included_org_alljoyn_bus_ifaces_Introspectable
#define _Included_org_alljoyn_bus_ifaces_Introspectable
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ifaces_AllJoynProxyObj */

#ifndef _Included_org_alljoyn_bus_ifaces_AllJoynProxyObj
#define _Included_org_alljoyn_bus_ifaces_AllJoynProxyObj
#ifdef __cplusplus
extern "C" {
#endif
#undef org_alljoyn_bus_ifaces_AllJoynProxyObj_REQUEST_NAME_ALLOW_REPLACEMENT
#define org_alljoyn_bus_ifaces_AllJoynProxyObj_REQUEST_NAME_ALLOW_REPLACEMENT 1L
#undef org_alljoyn_bus_ifaces_AllJoynProxyObj_REQUEST_NAME_REPLACE_EXISTING
#define org_alljoyn_bus_ifaces_AllJoynProxyObj_REQUEST_NAME_REPLACE_EXISTING 2L
#undef org_alljoyn_bus_ifaces_AllJoynProxyObj_REQUEST_NAME_DO_NOT_QUEUE
#define org_alljoyn_bus_ifaces_AllJoynProxyObj_REQUEST_NAME_DO_NOT_QUEUE 4L
#undef org_alljoyn_bus_ifaces_AllJoynProxyObj_REQUEST_NAME_EXPORTABLE
#define org_alljoyn_bus_ifaces_AllJoynProxyObj_REQUEST_NAME_EXPORTABLE 8L
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ifaces_AllJoynProxyObj_ReleaseNameResult */

#ifndef _Included_org_alljoyn_bus_ifaces_AllJoynProxyObj_ReleaseNameResult
#define _Included_org_alljoyn_bus_ifaces_AllJoynProxyObj_ReleaseNameResult
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ifaces_AllJoynProxyObj_RequestNameResult */

#ifndef _Included_org_alljoyn_bus_ifaces_AllJoynProxyObj_RequestNameResult
#define _Included_org_alljoyn_bus_ifaces_AllJoynProxyObj_RequestNameResult
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ifaces_Peer */

#ifndef _Included_org_alljoyn_bus_ifaces_Peer
#define _Included_org_alljoyn_bus_ifaces_Peer
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_ifaces_Properties */

#ifndef _Included_org_alljoyn_bus_ifaces_Properties
#define _Included_org_alljoyn_bus_ifaces_Properties
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_alljoyn_bus_MsgArg */

#ifndef _Included_org_alljoyn_bus_MsgArg
#define _Included_org_alljoyn_bus_MsgArg
#ifdef __cplusplus
extern "C" {
#endif
#undef org_alljoyn_bus_MsgArg_ALLJOYN_INVALID
#define org_alljoyn_bus_MsgArg_ALLJOYN_INVALID 0L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_ARRAY
#define org_alljoyn_bus_MsgArg_ALLJOYN_ARRAY 97L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_BOOLEAN
#define org_alljoyn_bus_MsgArg_ALLJOYN_BOOLEAN 98L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_DOUBLE
#define org_alljoyn_bus_MsgArg_ALLJOYN_DOUBLE 100L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_DICT_ENTRY
#define org_alljoyn_bus_MsgArg_ALLJOYN_DICT_ENTRY 101L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_SIGNATURE
#define org_alljoyn_bus_MsgArg_ALLJOYN_SIGNATURE 103L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_INT32
#define org_alljoyn_bus_MsgArg_ALLJOYN_INT32 105L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_INT16
#define org_alljoyn_bus_MsgArg_ALLJOYN_INT16 110L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_OBJECT_PATH
#define org_alljoyn_bus_MsgArg_ALLJOYN_OBJECT_PATH 111L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_UINT16
#define org_alljoyn_bus_MsgArg_ALLJOYN_UINT16 113L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_STRUCT
#define org_alljoyn_bus_MsgArg_ALLJOYN_STRUCT 114L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_STRING
#define org_alljoyn_bus_MsgArg_ALLJOYN_STRING 115L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_UINT64
#define org_alljoyn_bus_MsgArg_ALLJOYN_UINT64 116L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_UINT32
#define org_alljoyn_bus_MsgArg_ALLJOYN_UINT32 117L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_VARIANT
#define org_alljoyn_bus_MsgArg_ALLJOYN_VARIANT 118L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_INT64
#define org_alljoyn_bus_MsgArg_ALLJOYN_INT64 120L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_BYTE
#define org_alljoyn_bus_MsgArg_ALLJOYN_BYTE 121L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_STRUCT_OPEN
#define org_alljoyn_bus_MsgArg_ALLJOYN_STRUCT_OPEN 40L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_STRUCT_CLOSE
#define org_alljoyn_bus_MsgArg_ALLJOYN_STRUCT_CLOSE 41L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_DICT_ENTRY_OPEN
#define org_alljoyn_bus_MsgArg_ALLJOYN_DICT_ENTRY_OPEN 123L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_DICT_ENTRY_CLOSE
#define org_alljoyn_bus_MsgArg_ALLJOYN_DICT_ENTRY_CLOSE 125L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_BOOLEAN_ARRAY
#define org_alljoyn_bus_MsgArg_ALLJOYN_BOOLEAN_ARRAY 25185L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_DOUBLE_ARRAY
#define org_alljoyn_bus_MsgArg_ALLJOYN_DOUBLE_ARRAY 25697L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_INT32_ARRAY
#define org_alljoyn_bus_MsgArg_ALLJOYN_INT32_ARRAY 26977L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_INT16_ARRAY
#define org_alljoyn_bus_MsgArg_ALLJOYN_INT16_ARRAY 28257L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_UINT16_ARRAY
#define org_alljoyn_bus_MsgArg_ALLJOYN_UINT16_ARRAY 29025L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_UINT64_ARRAY
#define org_alljoyn_bus_MsgArg_ALLJOYN_UINT64_ARRAY 29793L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_UINT32_ARRAY
#define org_alljoyn_bus_MsgArg_ALLJOYN_UINT32_ARRAY 30049L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_INT64_ARRAY
#define org_alljoyn_bus_MsgArg_ALLJOYN_INT64_ARRAY 30817L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_BYTE_ARRAY
#define org_alljoyn_bus_MsgArg_ALLJOYN_BYTE_ARRAY 31073L
#undef org_alljoyn_bus_MsgArg_ALLJOYN_WILDCARD
#define org_alljoyn_bus_MsgArg_ALLJOYN_WILDCARD 42L
/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getNumElements
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_alljoyn_bus_MsgArg_getNumElements
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getElement
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_getElement
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getElemSig
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_alljoyn_bus_MsgArg_getElemSig
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getVal
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_getVal
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getNumMembers
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_alljoyn_bus_MsgArg_getNumMembers
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getMember
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_getMember
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getKey
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_getKey
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getByteArray
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_alljoyn_bus_MsgArg_getByteArray
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getInt16Array
 * Signature: (J)[S
 */
JNIEXPORT jshortArray JNICALL Java_org_alljoyn_bus_MsgArg_getInt16Array
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getUint16Array
 * Signature: (J)[S
 */
JNIEXPORT jshortArray JNICALL Java_org_alljoyn_bus_MsgArg_getUint16Array
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getBoolArray
 * Signature: (J)[Z
 */
JNIEXPORT jbooleanArray JNICALL Java_org_alljoyn_bus_MsgArg_getBoolArray
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getUint32Array
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_org_alljoyn_bus_MsgArg_getUint32Array
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getInt32Array
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_org_alljoyn_bus_MsgArg_getInt32Array
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getInt64Array
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_alljoyn_bus_MsgArg_getInt64Array
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getUint64Array
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_alljoyn_bus_MsgArg_getUint64Array
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getDoubleArray
 * Signature: (J)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_org_alljoyn_bus_MsgArg_getDoubleArray
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getTypeId
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_alljoyn_bus_MsgArg_getTypeId
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getByte
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_org_alljoyn_bus_MsgArg_getByte
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getInt16
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_org_alljoyn_bus_MsgArg_getInt16
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getUint16
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_org_alljoyn_bus_MsgArg_getUint16
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getBool
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_alljoyn_bus_MsgArg_getBool
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getUint32
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_alljoyn_bus_MsgArg_getUint32
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getInt32
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_alljoyn_bus_MsgArg_getInt32
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getInt64
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_getInt64
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getUint64
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_getUint64
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getDouble
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_alljoyn_bus_MsgArg_getDouble
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_alljoyn_bus_MsgArg_getString
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getObjPath
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_alljoyn_bus_MsgArg_getObjPath
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getSignature
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_alljoyn_bus_MsgArg_getSignature__J
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    getSignature
 * Signature: ([J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_alljoyn_bus_MsgArg_getSignature___3J
  (JNIEnv *, jclass, jlongArray);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;B)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2B
  (JNIEnv *, jclass, jlong, jstring, jbyte);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;Z)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2Z
  (JNIEnv *, jclass, jlong, jstring, jboolean);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;S)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2S
  (JNIEnv *, jclass, jlong, jstring, jshort);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2I
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2J
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;D)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2D
  (JNIEnv *, jclass, jlong, jstring, jdouble);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;[B)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2_3B
  (JNIEnv *, jclass, jlong, jstring, jbyteArray);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;[Z)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2_3Z
  (JNIEnv *, jclass, jlong, jstring, jbooleanArray);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;[S)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2_3S
  (JNIEnv *, jclass, jlong, jstring, jshortArray);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;[I)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2_3I
  (JNIEnv *, jclass, jlong, jstring, jintArray);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;[J)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2_3J
  (JNIEnv *, jclass, jlong, jstring, jlongArray);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    set
 * Signature: (JLjava/lang/String;[D)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_set__JLjava_lang_String_2_3D
  (JNIEnv *, jclass, jlong, jstring, jdoubleArray);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    setArray
 * Signature: (JLjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_setArray
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    setStruct
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_setStruct
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    setDictEntry
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_setDictEntry
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    setVariant
 * Signature: (JLjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_setVariant__JLjava_lang_String_2J
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     org_alljoyn_bus_MsgArg
 * Method:    setVariant
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_alljoyn_bus_MsgArg_setVariant__J
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
