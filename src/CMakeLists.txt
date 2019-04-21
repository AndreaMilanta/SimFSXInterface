# Minimum version requirements
cmake_minimum_required(VERSION 3.14.2)

# include directories
include_directories(${SOURCE_DIR}/examples/Headers)

# Source Directories
add_subdirectory(${SOURCE_DIR}/examples)

# Main executables
add_executable(Cockpit main.cpp)

# Add libraries
target_link_libraries(Cockpit Examples)