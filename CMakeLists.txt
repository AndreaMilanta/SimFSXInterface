# Minimum version requirements
cmake_minimum_required(VERSION 3.14.2)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Project name and version
project(Cockpit VERSION 1.0.0)

# Project Folder
set(SOURCE "${CMAKE_SOURCE_DIR}/src")
set(INCLUDE "${CMAKE_SOURCE_DIR}/include")
set(DEPS "${CMAKE_SOURCE_DIR}/dependencies")
set(BIN "${CMAKE_SOURCE_DIR}/bin")

# Output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${BIN}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${BIN}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BIN}")

# Include and Link directories
include_directories(${INCLUDE})
link_directories(${DEPS})

# Source directories
add_subdirectory(${SOURCE})