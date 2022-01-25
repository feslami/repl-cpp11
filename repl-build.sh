set -e

sourceDir=$(pwd)
git submodule update --recursive --init
mkdir -p ../build && cd ../build

cmake -D CMAKE_BUILD_TYPE=Debug -G Ninja $sourceDir
cmake --build .

echo ""

ctest -T Test --verbose
# cpack

cd ..

echo "Built and successfully passed tests."
echo "run the executable directly by typing /home/runner/build/repl-example"
