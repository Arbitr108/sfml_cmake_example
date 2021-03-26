#!/usr/bin/env bash

set -e

UBUNTU="$(grep 'NAME="Ubuntu"' < <(cat /etc/*-release) | wc -l)"

[ "${UBUNTU}" -ne 1 ] && echo Wrong OS && exit 1

set -x

rm -fr build/

mkdir build

cd build

CMAKE_BUILD_TYPE='Release' && \
  CMAKE_MODULE_PATH='' && \
  CMAKE_PREFIX_PATH='/usr/lib/x86_64-linux-gnu/' && \
  cmake ..

make

./SFML_CMake_Example

exit 0

