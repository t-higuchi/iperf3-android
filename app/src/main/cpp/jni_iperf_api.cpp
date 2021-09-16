#include <jni.h>
#include <string>
#include "../../../iperf3/src/iperf_locale.h"

extern "C" JNIEXPORT jstring JNICALL
Java_jp_empacket_iperf3_MainActivity_get_1iperf_1usage_1shortstr(
        JNIEnv* env,
        jobject thiz) {
    // TODO: implement get_iperf_usage_shortstr()
    return env->NewStringUTF(usage_shortstr);
}