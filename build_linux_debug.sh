#!/bin/bash

ROOT_DIR=`pwd`/

echo "[::] Switching to build directory..."
mkdir -p build
cd build

# TODO: Add feature that will allow selecting the build type: debug or release.
BUILD_ACTION_TYPE=""
if [ -n $1 ]
then
    BUILD_ACTION_TYPE=$1
else
    BUILD_ACTION_TYPE="casual"
fi

# Conan time.
if [ "$BUILD_ACTION_TYPE" = "full" ]
then
    echo "[::] Performing a full build."
    
    echo "[::] Clearing CMake-related files."
    rm -rf *

    echo "[::] Running Conan..."
    conan install -pr=$ROOT_DIR/conan_profiles/linux_debug.txt \
                  --build missing \
                  ..

    if [ $? -ne 0 ]
    then
        exit
    fi

    # Hello, CMake. And we gonna use Clang 11.
    echo "[::] Running CMake for a debug build..."
    export CC=/usr/bin/clang-11
    export CXX=/usr/bin/clang++-11
    cmake -DCMAKE_BUILD_TYPE=Debug .. \
        && echo "[::] CMake ran successfully. Time to compile..." \
        && make
    cd ..
else
    echo "[::] Performing a casual build."
    make
    if [ $? -ne 0 ]
    then
        echo "[::] Performing a casual build failed. Maybe run a full build" \
             "first?"
    fi

    cd ..
fi

# Go back to the main directory.
echo "[::] Done with stuff. Switching back to project root..."
