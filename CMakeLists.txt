cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

project(ReplExample)

add_executable(repl-example
  src/main.cpp
)

include(CTest)
add_test(NAME run_executable COMMAND repl-example)

# include(CPack)
# include(GNUInstallDirs)

# install(TARGETS foo
#   RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )
