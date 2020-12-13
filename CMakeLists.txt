cmake_minimum_required(VERSION 3.14)
project(cnc-td)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/")

include("BuildType")

include("${CMAKE_BINARY_DIR}/conanbuildinfo.cmake")
conan_basic_setup()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Mhmm. We're sticking with just Clang. Note that -stdlib is a Clang-only flag.
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -stdlib=libc++")

# Make sure no optimizations are present during a debug build. This will let us
# get accurate profiling results.
if (CMAKE_BUILD_TYPE STREQUAL Debug)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")
endif()

include_directories(src)

add_subdirectory(src)

target_link_libraries(cnc-td
    ${CONAN_LIBS}
)
