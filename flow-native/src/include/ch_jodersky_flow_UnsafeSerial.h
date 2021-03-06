/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ch_jodersky_flow_UnsafeSerial */

#ifndef _Included_ch_jodersky_flow_UnsafeSerial
#define _Included_ch_jodersky_flow_UnsafeSerial
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ch_jodersky_flow_UnsafeSerial
 * Method:    read
 * Signature: (Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_ch_jodersky_flow_UnsafeSerial_read
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ch_jodersky_flow_UnsafeSerial
 * Method:    cancelRead
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ch_jodersky_flow_UnsafeSerial_cancelRead
  (JNIEnv *, jobject);

/*
 * Class:     ch_jodersky_flow_UnsafeSerial
 * Method:    write
 * Signature: (Ljava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_ch_jodersky_flow_UnsafeSerial_write
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     ch_jodersky_flow_UnsafeSerial
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ch_jodersky_flow_UnsafeSerial_close
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
