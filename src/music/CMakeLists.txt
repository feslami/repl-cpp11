
add_library(music
  music.cpp
  inc/music.h
)

target_include_directories(music
  PUBLIC
    inc
)