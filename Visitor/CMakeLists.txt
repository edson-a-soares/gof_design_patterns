SET(MODULE_NAME "Visitor")
SET(MODULE_DIRECTORY "Visitor")

set(CMAKE_C_COMPILER /usr/bin/gcc)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

# It removes the prefix "lib" from the .so application's files
set(CMAKE_SHARED_LIBRARY_PREFIX "")

# It defines the custom directory structure.
set(PROJECT_SOURCE_DIR ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/src)
set(PROJECT_INCLUDE_DIR ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/include)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/bin)

file(GLOB_RECURSE VISITOR_SOURCE_FILES ${PROJECT_SOURCE_DIR}/${MODULE_DIRECTORY}/*.cpp)

include_directories("${PROJECT_INCLUDE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")

add_library(${MODULE_NAME} SHARED ${VISITOR_SOURCE_FILES})
target_include_directories(${MODULE_NAME} PUBLIC ${PROJECT_INCLUDE_DIR})

add_executable(VisitorPattern ${PROJECT_SOURCE_DIR}/main.cpp)
target_link_libraries(VisitorPattern ${MODULE_NAME})

# handling module tests
if (ENABLE_TESTS)
    add_subdirectory(tests)
endif ()
