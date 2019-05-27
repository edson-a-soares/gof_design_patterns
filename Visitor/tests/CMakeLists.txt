SET(TEST_UNIT "VisitorTests")
SET(TEST_UNIT_MODULE_NAME "Visitor")
SET(TEST_UNIT_MODULE_DIRECTORY "Visitor")

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

if(NOT GTEST_FOUND)
    message(WARNING "Failed to find the GTest libraries.")
endif()

file(GLOB_RECURSE TEST_VISITOR_SOURCE_FILES ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/tests/${TEST_UNIT_MODULE_DIRECTORY}/*.cpp)

add_executable(${TEST_UNIT} ${TEST_VISITOR_SOURCE_FILES})
target_link_libraries(${TEST_UNIT} gtest gtest_main pthread ${MODULE_NAME})

add_test(NAME ${TEST_UNIT} COMMAND ${TEST_UNIT})
