add_executable(unit
    tests.cpp
)

target_link_libraries(unit PRIVATE music)

add_test(NAME test_music COMMAND unit)
