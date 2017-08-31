cmake_minimum_required(VERSION 3.6)

option(ENABLE_TESTS
        "Set to OFF|ON (default: OFF) to control building the tests" OFF)

if (ENABLE_TESTS)
    enable_testing()
    message(STATUS "Building project with tests")
elseif ()
    message(STATUS "Building project without tests")
endif ()

add_subdirectory(Builder)
add_subdirectory(Command)
add_subdirectory(Visitor)
add_subdirectory(Interpreter)
add_subdirectory(ChainOfResponsibility)
