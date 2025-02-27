// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from single_language_interfaces.djinni

#include "NativeUsesSingleLanguageListeners.hpp"  // my header
#include "NativeJavaOnlyListener.hpp"
#include "NativeObjcOnlyListener.hpp"

namespace djinni_generated {

em::val NativeUsesSingleLanguageListeners::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "callForObjC",
        "returnForObjC",
        "callForJava",
        "returnForJava",
    });
    return methods;
}

void NativeUsesSingleLanguageListeners::callForObjC(const CppType& self, const em::val& w_l) {
    try {
        self->callForObjC(::djinni_generated::NativeObjcOnlyListener::toCpp(w_l));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<void>::handleNativeException(e);
    }
}
em::val NativeUsesSingleLanguageListeners::returnForObjC(const CppType& self) {
    try {
        auto r = self->returnForObjC();
        return ::djinni_generated::NativeObjcOnlyListener::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni_generated::NativeObjcOnlyListener>::handleNativeException(e);
    }
}
void NativeUsesSingleLanguageListeners::callForJava(const CppType& self, const em::val& w_l) {
    try {
        self->callForJava(::djinni_generated::NativeJavaOnlyListener::toCpp(w_l));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<void>::handleNativeException(e);
    }
}
em::val NativeUsesSingleLanguageListeners::returnForJava(const CppType& self) {
    try {
        auto r = self->returnForJava();
        return ::djinni_generated::NativeJavaOnlyListener::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni_generated::NativeJavaOnlyListener>::handleNativeException(e);
    }
}

void NativeUsesSingleLanguageListeners::JsProxy::callForObjC(const /*not-null*/ std::shared_ptr<::testsuite::ObjcOnlyListener> & l) {
    auto ret = callMethod("callForObjC", ::djinni_generated::NativeObjcOnlyListener::fromCpp(l));
    checkError(ret);
}

/*not-null*/ std::shared_ptr<::testsuite::ObjcOnlyListener> NativeUsesSingleLanguageListeners::JsProxy::returnForObjC() {
    auto ret = callMethod("returnForObjC");
    checkError(ret);
    return ::djinni_generated::NativeObjcOnlyListener::toCpp(ret);
}

void NativeUsesSingleLanguageListeners::JsProxy::callForJava(const /*not-null*/ std::shared_ptr<::testsuite::JavaOnlyListener> & l) {
    auto ret = callMethod("callForJava", ::djinni_generated::NativeJavaOnlyListener::fromCpp(l));
    checkError(ret);
}

/*not-null*/ std::shared_ptr<::testsuite::JavaOnlyListener> NativeUsesSingleLanguageListeners::JsProxy::returnForJava() {
    auto ret = callMethod("returnForJava");
    checkError(ret);
    return ::djinni_generated::NativeJavaOnlyListener::toCpp(ret);
}

EMSCRIPTEN_BINDINGS(testsuite_uses_single_language_listeners) {
    ::djinni::DjinniClass_<::testsuite::UsesSingleLanguageListeners>("testsuite_UsesSingleLanguageListeners", "testsuite.UsesSingleLanguageListeners")
        .smart_ptr<std::shared_ptr<::testsuite::UsesSingleLanguageListeners>>("testsuite_UsesSingleLanguageListeners")
        .function("nativeDestroy", &NativeUsesSingleLanguageListeners::nativeDestroy)
        .function("callForObjC", NativeUsesSingleLanguageListeners::callForObjC)
        .function("returnForObjC", NativeUsesSingleLanguageListeners::returnForObjC)
        .function("callForJava", NativeUsesSingleLanguageListeners::callForJava)
        .function("returnForJava", NativeUsesSingleLanguageListeners::returnForJava)
        ;
}

}  // namespace djinni_generated
