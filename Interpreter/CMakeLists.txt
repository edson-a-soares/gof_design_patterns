SET(MODULE_NAME "Interpreter")
SET(MODULE_DIRECTORY "Interpreter")

set(CMAKE_C_COMPILER /usr/bin/gcc)
set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# including source code
set(PROJECT_SOURCE_DIR ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/src)
set(PROJECT_INCLUDE_DIR ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/include)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/${MODULE_DIRECTORY}/bin)

file(GLOB INTERPRETER_SOURCE_FILES_TOP "${PROJECT_SOURCE_DIR}/${MODULE_DIRECTORY}/*.cpp")
file(GLOB_RECURSE INTERPRETER_SOURCE_FILES_NESTED ${PROJECT_SOURCE_DIR}/${MODULE_DIRECTORY}/*.cpp)
set(INTERPRETER_SOURCE_FILES ${INTERPRETER_SOURCE_FILES_TOP} ${INTERPRETER_SOURCE_FILES_NESTED})

include_directories("${PROJECT_INCLUDE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")

add_library(${MODULE_NAME} SHARED ${INTERPRETER_SOURCE_FILES})
target_include_directories(${MODULE_NAME} PUBLIC ${PROJECT_INCLUDE_DIR})

add_executable(InterpreterPattern ${PROJECT_SOURCE_DIR}/main.cpp)
target_link_libraries(InterpreterPattern ${MODULE_NAME})
