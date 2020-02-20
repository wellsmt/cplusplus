
add_executable(app src/main.cpp)
add_executable(app_test test/test.cpp)

target_link_libraries(app histogram)
target_link_libraries(app_test GTest::GTest GTest::Main pthread)
add_test(AllTests app_test)