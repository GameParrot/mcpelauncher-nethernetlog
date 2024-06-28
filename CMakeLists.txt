cmake_minimum_required (VERSION 2.6)

project(mcpelaunchernethernetlog LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

find_library(log-lib log android-lib android)


add_library(mcpelaunchernethernetlog SHARED src/main.cpp)
target_link_libraries(mcpelaunchernethernetlog PUBLIC ${log-lib} android)
