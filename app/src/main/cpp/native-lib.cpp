#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_adeds_testsecureapi_MainActivity_getApiKey(
        JNIEnv* env,
        jobject /* this */) {
    std::string api_key = "this is your api key";
    return env->NewStringUTF(api_key.c_str());
}
