# Minimum version requirements
cmake_minimum_required(VERSION 3.14.2)

# Include and Source Directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Headers)
    
set(EX_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Source")

# Target of build
add_library(Examples STATIC ${EX_SRC_DIR}/ClientEvent.cpp)

# SimConnect
add_library(SimConnect IMPORTED STATIC)
set_target_properties(SimConnect PROPERTIES IMPORTED_LOCATION ${DEPS_DIR}/SimConnect.lib)

# Target link libraries
target_link_libraries(Examples SimConnect)