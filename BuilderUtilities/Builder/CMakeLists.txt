set( target Builder )

set( headers Builder.hpp )
set( sources Builder.cpp )

add_library( ${target} ${headers} ${sources} )

target_include_directories(${target} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
    )

target_link_directories( ${target}
    CelsetialBase
    CelestialFactory
    Utilities
    Star
    )