cmake_minimum_required(VERSION 2.4)

project(hello_world)

enable_testing()
find_package(GTest REQUIRED)

add_executable(app main.cpp)
add_executable(app_test test.cpp)

target_link_libraries(app_test GTest::GTest GTest::Main)
add_test(AllTests app_test)