set -e

mkdir -p build && cd build

cmake -D CMAKE_BUILD_TYPE=Debug -G Ninja ..
cmake --build .

echo ""

ctest
# cpack

cd ..
