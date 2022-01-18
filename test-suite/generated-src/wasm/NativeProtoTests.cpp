// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proto.djinni

#include "NativeProtoTests.hpp"  // my header
#include "NativeRecordWithEmbeddedCppProto.hpp"
#include "NativeRecordWithEmbeddedProto.hpp"
#include "Outcome_wasm.hpp"

namespace djinni_generated {

em::val NativeProtoTests::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
    });
    return methods;
}

em::val NativeProtoTests::protoToStrings(const em::val& w_x) {
    auto r = ::testsuite::ProtoTests::protoToStrings(::djinni::Protobuf<::djinni::test::AddressBook, ::djinni::JsClassName<'p','r','o','t','o','t','e','s','t','.','A','d','d','r','e','s','s','B','o','o','k'>>::toCpp(w_x));
    return ::djinni::List<::djinni::String>::fromCpp(r);
}
em::val NativeProtoTests::stringsToProto(const em::val& w_x) {
    auto r = ::testsuite::ProtoTests::stringsToProto(::djinni::List<::djinni::String>::toCpp(w_x));
    return ::djinni::Protobuf<::djinni::test::AddressBook, ::djinni::JsClassName<'p','r','o','t','o','t','e','s','t','.','A','d','d','r','e','s','s','B','o','o','k'>>::fromCpp(r);
}
std::string NativeProtoTests::embeddedProtoToString(const em::val& w_x) {
    auto r = ::testsuite::ProtoTests::embeddedProtoToString(::djinni_generated::NativeRecordWithEmbeddedProto::toCpp(w_x));
    return ::djinni::String::fromCpp(r);
}
em::val NativeProtoTests::stringToEmbeddedProto(const std::string& w_x) {
    auto r = ::testsuite::ProtoTests::stringToEmbeddedProto(::djinni::String::toCpp(w_x));
    return ::djinni_generated::NativeRecordWithEmbeddedProto::fromCpp(r);
}
std::string NativeProtoTests::cppProtoToString(const em::val& w_x) {
    auto r = ::testsuite::ProtoTests::cppProtoToString(::djinni::Protobuf<::djinni::test2::PersistingState, ::djinni::JsClassName<'p','r','o','t','o','t','e','s','t','2','.','P','e','r','s','i','s','t','i','n','g','S','t','a','t','e'>>::toCpp(w_x));
    return ::djinni::String::fromCpp(r);
}
em::val NativeProtoTests::stringToCppProto(const std::string& w_x) {
    auto r = ::testsuite::ProtoTests::stringToCppProto(::djinni::String::toCpp(w_x));
    return ::djinni::Protobuf<::djinni::test2::PersistingState, ::djinni::JsClassName<'p','r','o','t','o','t','e','s','t','2','.','P','e','r','s','i','s','t','i','n','g','S','t','a','t','e'>>::fromCpp(r);
}
std::string NativeProtoTests::embeddedCppProtoToString(const em::val& w_x) {
    auto r = ::testsuite::ProtoTests::embeddedCppProtoToString(::djinni_generated::NativeRecordWithEmbeddedCppProto::toCpp(w_x));
    return ::djinni::String::fromCpp(r);
}
em::val NativeProtoTests::stringToEmbeddedCppProto(const std::string& w_x) {
    auto r = ::testsuite::ProtoTests::stringToEmbeddedCppProto(::djinni::String::toCpp(w_x));
    return ::djinni_generated::NativeRecordWithEmbeddedCppProto::fromCpp(r);
}
em::val NativeProtoTests::protoListToStrings(const em::val& w_x) {
    auto r = ::testsuite::ProtoTests::protoListToStrings(::djinni::List<::djinni::Protobuf<::djinni::test::Person, ::djinni::JsClassName<'p','r','o','t','o','t','e','s','t','.','P','e','r','s','o','n'>>>::toCpp(w_x));
    return ::djinni::List<::djinni::String>::fromCpp(r);
}
em::val NativeProtoTests::stringsToProtoList(const em::val& w_x) {
    auto r = ::testsuite::ProtoTests::stringsToProtoList(::djinni::List<::djinni::String>::toCpp(w_x));
    return ::djinni::List<::djinni::Protobuf<::djinni::test::Person, ::djinni::JsClassName<'p','r','o','t','o','t','e','s','t','.','P','e','r','s','o','n'>>>::fromCpp(r);
}
std::string NativeProtoTests::optionalProtoToString(const em::val& w_x) {
    auto r = ::testsuite::ProtoTests::optionalProtoToString(::djinni::Optional<std::experimental::optional, ::djinni::Protobuf<::djinni::test::Person, ::djinni::JsClassName<'p','r','o','t','o','t','e','s','t','.','P','e','r','s','o','n'>>>::toCpp(w_x));
    return ::djinni::String::fromCpp(r);
}
em::val NativeProtoTests::stringToOptionalProto(const std::string& w_x) {
    auto r = ::testsuite::ProtoTests::stringToOptionalProto(::djinni::String::toCpp(w_x));
    return ::djinni::Optional<std::experimental::optional, ::djinni::Protobuf<::djinni::test::Person, ::djinni::JsClassName<'p','r','o','t','o','t','e','s','t','.','P','e','r','s','o','n'>>>::fromCpp(r);
}
em::val NativeProtoTests::stringToProtoOutcome(const std::string& w_x) {
    auto r = ::testsuite::ProtoTests::stringToProtoOutcome(::djinni::String::toCpp(w_x));
    return ::djinni::Outcome<::djinni::Protobuf<::djinni::test::Person, ::djinni::JsClassName<'p','r','o','t','o','t','e','s','t','.','P','e','r','s','o','n'>>, ::djinni::I32>::fromCpp(r);
}

EMSCRIPTEN_BINDINGS(testsuite_proto_tests) {
    ::djinni::DjinniClass_<::testsuite::ProtoTests>("testsuite_ProtoTests", "testsuite.ProtoTests")
        .smart_ptr<std::shared_ptr<::testsuite::ProtoTests>>("testsuite_ProtoTests")
        .function("nativeDestroy", &NativeProtoTests::nativeDestroy)
        .class_function("protoToStrings", NativeProtoTests::protoToStrings)
        .class_function("stringsToProto", NativeProtoTests::stringsToProto)
        .class_function("embeddedProtoToString", NativeProtoTests::embeddedProtoToString)
        .class_function("stringToEmbeddedProto", NativeProtoTests::stringToEmbeddedProto)
        .class_function("cppProtoToString", NativeProtoTests::cppProtoToString)
        .class_function("stringToCppProto", NativeProtoTests::stringToCppProto)
        .class_function("embeddedCppProtoToString", NativeProtoTests::embeddedCppProtoToString)
        .class_function("stringToEmbeddedCppProto", NativeProtoTests::stringToEmbeddedCppProto)
        .class_function("protoListToStrings", NativeProtoTests::protoListToStrings)
        .class_function("stringsToProtoList", NativeProtoTests::stringsToProtoList)
        .class_function("optionalProtoToString", NativeProtoTests::optionalProtoToString)
        .class_function("stringToOptionalProto", NativeProtoTests::stringToOptionalProto)
        .class_function("stringToProtoOutcome", NativeProtoTests::stringToProtoOutcome)
        ;
}

}  // namespace djinni_generated
