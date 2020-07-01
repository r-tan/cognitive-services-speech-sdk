/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_microsoft_cognitiveservices_speech_SpeechSynthesizer */

#ifndef _Included_com_microsoft_cognitiveservices_speech_SpeechSynthesizer
#define _Included_com_microsoft_cognitiveservices_speech_SpeechSynthesizer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    createSpeechSynthesizerFromConfig
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_createSpeechSynthesizerFromConfig
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    createSpeechSynthesizerFromFromAutoDetectSourceLangConfig
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_createSpeechSynthesizerFromAutoDetectSourceLangConfig
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    speakText
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_speakText
  (JNIEnv *, jobject, jobject, jstring, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    speakSsml
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_speakSsml
  (JNIEnv *, jobject, jobject, jstring, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    startSpeakingText
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_startSpeakingText
  (JNIEnv *, jobject, jobject, jstring, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    startSpeakingSsml
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Ljava/lang/String;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_startSpeakingSsml
  (JNIEnv *, jobject, jobject, jstring, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    synthesisStartedSetCallback
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_synthesisStartedSetCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    synthesizingSetCallback
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_synthesizingSetCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    synthesisCompletedSetCallback
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_synthesisCompletedSetCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    synthesisCanceledSetCallback
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_synthesisCanceledSetCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    wordBoundarySetCallback
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_wordBoundarySetCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_microsoft_cognitiveservices_speech_SpeechSynthesizer
 * Method:    getPropertyBagFromSynthesizerHandle
 * Signature: (Lcom/microsoft/cognitiveservices/speech/util/SafeHandle;Lcom/microsoft/cognitiveservices/speech/util/IntRef;)J
 */
JNIEXPORT jlong JNICALL Java_com_microsoft_cognitiveservices_speech_SpeechSynthesizer_getPropertyBagFromSynthesizerHandle
  (JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
