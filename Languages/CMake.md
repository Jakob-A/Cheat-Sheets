### cmake build type

Decides over different optimization levels `debug` for example turns off most optimizations
Turn on optimizations if on debug level:
```
-DCMAKE_C_FLAGS_DEBUG="-g -O1" \
-DCMAKE_CXX_FLAGS_DEBUG="-g -O1" \
```
See [unix.stackexchange.com](https://unix.stackexchange.com/questions/187455/how-to-compile-without-optimizations-o0-using-cmake)
