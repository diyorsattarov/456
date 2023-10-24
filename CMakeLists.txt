cmake_minimum_required(VERSION 3.10)
set(PROJECT_NAME cpp-http-server)
project(${PROJECT_NAME})

add_subdirectory(src)
add_executable(tests
    tests/boost/test_boost.cpp
)

find_package(GTest REQUIRED)
find_package(Boost REQUIRED)

include_directories(include)
include_directories(${Boost_INCLUDE_DIRS})

target_link_libraries(tests PRIVATE ${GTEST_BOTH_LIBRARIES} pthread Boost::boost)
target_include_directories(tests PRIVATE ${GTEST_INCLUDE_DIRS})

add_custom_target(run_tests COMMAND tests)