#include <dlfcn.h>
#include <android/log.h>

void (*mcpelauncher_preinithook)(const char*sym, void*val, void **orig);

void nethernetLog(int severity, char const* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    __android_log_vprint(severity, "NetherNet", fmt, args);
    va_end(args);
}

extern "C" void __attribute__ ((visibility ("default"))) mod_preinit() {
    auto h = dlopen("libmcpelauncher_mod.so", 0);

    mcpelauncher_preinithook = (decltype(mcpelauncher_preinithook)) dlsym(h, "mcpelauncher_preinithook");

    mcpelauncher_preinithook("_ZN9NetherNet29NetherNetTransport_LogMessageENS_11LogSeverityEPKcz",  reinterpret_cast<void*>(&nethernetLog), nullptr);
    //dlclose(h);
}

extern "C" __attribute__ ((visibility ("default"))) void mod_init() {

}
