//
// Created by migu on 2020/5/27.
//
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_code_lab_android_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) {
    // TODO: implement stringFromJNI()
    std::string hello = "hello world from c++";
    return env -> NewStringUTF(hello.c_str());
}