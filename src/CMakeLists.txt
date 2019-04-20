# Source Directories
# add_subdirectory(SOURCE)

# Main executables
add_executable(Cockpit ClientEvent.cpp)

# LIBRARIES
set(PUBLIC_LIBS "")
# SimConnect
add_library(SimConnect IMPORTED STATIC)
set_target_properties(SimConnect PROPERTIES IMPORTED_LOCATION ${DEPS}/SimConnect.lib)
set(PUBLIC_LIBS "${LIBRARIES}SimConnect")

# Target link libraries
target_link_libraries(Cockpit ${PUBLIC_LIBS})
