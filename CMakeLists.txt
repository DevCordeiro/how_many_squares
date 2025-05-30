cmake_minimum_required(VERSION 3.10)
project(HowManySquares C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

include_directories(include)

add_library(squares src/squares.c)

add_executable(how_many_squares src/main.c)
target_link_libraries(how_many_squares squares)

add_executable(test_runner tests/test_squares.c)
target_link_libraries(test_runner squares)

add_executable(test_unity tests/test_unity.c tests/unity/src/unity.c)
target_link_libraries(test_unity squares)

enable_testing()
add_test(NAME SquaresTest COMMAND test_runner)
