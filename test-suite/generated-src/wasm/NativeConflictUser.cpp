// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#include "NativeConflictUser.hpp"  // my header
#include "NativeConflict.hpp"

namespace djinni_generated {

em::val NativeConflictUser::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "Conflict",
        "conflictArg",
    });
    return methods;
}

em::val NativeConflictUser::Conflict(const CppType& self) {
    auto r = self->Conflict();
    return ::djinni_generated::NativeConflict::fromCpp(r);
}
bool NativeConflictUser::conflict_arg(const CppType& self, const em::val& w_cs) {
    auto r = self->conflict_arg(::djinni::Set<::djinni_generated::NativeConflict>::toCpp(w_cs));
    return ::djinni::Bool::fromCpp(r);
}

EMSCRIPTEN_BINDINGS(testsuite_conflict_user) {
    ::djinni::DjinniClass_<::testsuite::ConflictUser>("testsuite_ConflictUser", "testsuite.ConflictUser")
        .smart_ptr<std::shared_ptr<::testsuite::ConflictUser>>("testsuite_ConflictUser")
        .function("nativeDestroy", &NativeConflictUser::nativeDestroy)
        .function("Conflict", NativeConflictUser::Conflict)
        .function("conflictArg", NativeConflictUser::conflict_arg)
        ;
}

}  // namespace djinni_generated
