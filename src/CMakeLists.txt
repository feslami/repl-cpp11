
add_library(dojo STATIC
  dojo.h
  dojo.cpp
)

target_include_directories(dojo
  PUBLIC
    .
)

