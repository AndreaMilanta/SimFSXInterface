# Minimum version requirements
cmake_minimum_required(VERSION 3.14.2)

# Project name and version
project(Cockpit VERSION 1.0.0)

# Project Folder
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(DEPS_DIR "${CMAKE_SOURCE_DIR}/dependencies")
set(BINARY_DIR "${CMAKE_SOURCE_DIR}/bin")

# # Output directories
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${DEBUG_PATH}")
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG "${DEBUG_PATH}")
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${dEBUG_PATH}")
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${RELEASE_PATH}")
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE "${RELEASE_PATH}")
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${RELEASE_PATH}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BINARY_DIR}")

# Include and Link directories
include_directories(${INCLUDE_DIR})
link_directories(${DEPS_DIR})

# Source directories
add_subdirectory(${SOURCE_DIR})