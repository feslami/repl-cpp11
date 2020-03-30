cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

project(Foo)

add_executable(foo
  src/main.cpp
)

include(CTest)
add_test(NAME run_executable COMMAND foo)

# include(CPack)
# include(GNUInstallDirs)

# install(TARGETS foo
#   RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )
