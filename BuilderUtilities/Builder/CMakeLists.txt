set( target Builder )

set( headers Builder.hpp )
set( sources Builder.cpp )

add_library( ${target} ${headers} ${sources} )

target_include_directories(${target} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
    )

target_link_libraries( ${target} PUBLIC
    CelestialBase
    CelestialFactory
    Star
    Utilities    
    )