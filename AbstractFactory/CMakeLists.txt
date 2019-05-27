SET(MODULE_NAME "AbstractFactory")
SET(MODULE_DIRECTORY "AbstractFactory")

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

file(GLOB_RECURSE ABSTRACT_FACTORY_SOURCE_FILES ${PROJECT_SOURCE_DIR}/${MODULE_DIRECTORY}/*.cpp)

include_directories("${PROJECT_INCLUDE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")

add_library(${MODULE_NAME} SHARED ${ABSTRACT_FACTORY_SOURCE_FILES})
target_include_directories(${MODULE_NAME} PUBLIC ${PROJECT_INCLUDE_DIR})

add_executable(AbstractFactoryPattern ${PROJECT_SOURCE_DIR}/main.cpp)
target_link_libraries(AbstractFactoryPattern ${MODULE_NAME})
