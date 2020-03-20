cmake_policy(SET CMP0048 NEW)
project(histogram VERSION 1.0.0 DESCRIPTION "letter histogram count")

add_library(histogram SHARED
    src/histogram.cpp)
pybind11_add_module(example src/example.cpp)
add_executable(histogram_test test/histogram_test.cpp)
target_link_libraries(histogram_test histogram GTest::GTest GTest::Main pthread)
add_test(histogram_test histogram_test)

set_target_properties(histogram PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(histogram PROPERTIES SOVERSION 1)
set_target_properties(histogram PROPERTIES PUBLIC_HEADER include/histogram.h)
target_include_directories(histogram PUBLIC include/)
include(GNUInstallDirs)
install(TARGETS histogram
    DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

configure_file(histogram.pc.in histogram.pc @ONLY)

install(FILES ${CMAKE_BINARY_DIR}/library/histogram.pc DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)