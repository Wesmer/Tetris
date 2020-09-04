project(Tetris)

# States that CMake required version must be greater than 3.1
cmake_minimum_required(VERSION 3.1.0)

# Appends the cmake/modules path inside the MAKE_MODULE_PATH variable 
# which holds the directories with additional CMakeModules 
# (i.e. the FindSDLXXX cmake scripts):
set(CMAKE_MODULE_PATH ${Tetris_SOURCE_DIR}/cmake/ ${CMAKE_MODULE_PATH})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Since we are using template packs with typename keyword for 
# template-templates, we need to compile in C++17 mode
set(CMAKE_CXX_STANDARD 17)

# Setup C++ compiler flags for debug mode
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wextra")

# Find SDL2 libraries using the custom made module in 
# the cmake/ path
find_package(SDL2 REQUIRED) 
find_package(SDL2_IMAGE REQUIRED)

# Find and add Boost libraries
find_package(Boost REQUIRED)
find_package(Boost 1.54 COMPONENTS filesystem system REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

# Add SDL2 include directory to search path
include_directories(${SDL2_INCLUDE_DIR})
include_directories(${SDL2_IMG_INCLUDE_DIR})

# Add sub-projects for editor, game and menu
add_subdirectory(src)
