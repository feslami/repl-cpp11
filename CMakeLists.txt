cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(ReplCpp11)

add_executable(repl-example
  main.cpp
)

find_package(Threads)

target_link_libraries(repl-example PRIVATE Threads::Threads)

include(CTest)
add_test(NAME run_executable COMMAND repl-example)
