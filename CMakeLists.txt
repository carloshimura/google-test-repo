cmake_minimum_required(VERSION 3.23)

project(
        google-test-codam
        VERSION 1.0
        LANGUAGES C CXX)


find_package(GTest CONFIG REQUIRED)
set(SOURCES
    include/example.h
    src/example.cpp
    )


set(TEST_SRC
    tests/tests.cpp)



add_executable(project_tests ${SOURCES} ${TEST_SRC})
target_include_directories(project_tests PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(project_tests
        PUBLIC
        gtest::gtest
)
