# mcpelauncher-nethernetlog

This is a mod for mcpelauncher-manifest that enables NetherNet logging.

Intended for debugging network related issues and creating third party nethernet implementations (https://github.com/df-mc/nethernet-playground/)

## Building
`PATH_TO_NDK="/path/to/ndk"`
- x86

  `cmake -DCMAKE_TOOLCHAIN_FILE=$PATH_TO_NDK/build/cmake/android.toolchain.cmake -DANDROID_ABI=x86 -DCMAKE_CXX_FLAGS=-fvisibility=hidden ..`
- x86_64

  `cmake -DCMAKE_TOOLCHAIN_FILE=$PATH_TO_NDK/build/cmake/android.toolchain.cmake -DANDROID_ABI=x86_64 -DCMAKE_CXX_FLAGS=-fvisibility=hidden ..`
- armeabi-v7a

  `cmake -DCMAKE_TOOLCHAIN_FILE=$PATH_TO_NDK/build/cmake/android.toolchain.cmake -DANDROID_ABI=armeabi-v7a -DCMAKE_CXX_FLAGS=-fvisibility=hidden ..`
- arm64-v8a

  `cmake -DCMAKE_TOOLCHAIN_FILE=$PATH_TO_NDK/build/cmake/android.toolchain.cmake -DANDROID_ABI=arm64-v8a -DCMAKE_CXX_FLAGS=-fvisibility=hidden ..`
