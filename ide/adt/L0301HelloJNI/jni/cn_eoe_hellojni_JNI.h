/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_eoe_hellojni_JNI */

#ifndef _Included_cn_eoe_hellojni_JNI
#define _Included_cn_eoe_hellojni_JNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_eoe_hellojni_JNI
 * Method:    getNum
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_cn_eoe_hellojni_JNI_getNum
  (JNIEnv *, jobject);

/*
 * Class:     cn_eoe_hellojni_JNI
 * Method:    max
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_cn_eoe_hellojni_JNI_max
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     cn_eoe_hellojni_JNI
 * Method:    getString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cn_eoe_hellojni_JNI_getString
  (JNIEnv *, jobject);

/*
 * Class:     cn_eoe_hellojni_JNI
 * Method:    sayHi
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cn_eoe_hellojni_JNI_sayHi
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif