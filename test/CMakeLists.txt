
add_executable(test_dojo
  test_dojo.cpp
)

target_link_libraries(test_dojo
  PRIVATE
    dojo
    gmock
    gmock_main
)

add_test(NAME dojo COMMAND test_dojo)