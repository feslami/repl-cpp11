cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(ReplCpp11)

add_executable(repl-example
  app/main.cpp
)
target_link_libraries(repl-example PRIVATE music)

add_subdirectory(src/music)

include(CTest)
add_subdirectory(src/music/tests)
add_test(NAME run_executable COMMAND repl-example)

# include(CPack)
# include(GNUInstallDirs)

# install(TARGETS foo
#   RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )
