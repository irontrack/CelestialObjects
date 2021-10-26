set( target CelestialFactory )
set( headers CelestialFactory.hpp )
set( sources CelestialFactory.cpp )

add_library( ${target} ${headers} ${sources} )

target_include_directories( ${target} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    )

target_link_libraries( ${target} PUBLIC
    AbstractFactory
    CelestialBase
    StarFactory
    PlanetFactory
    MoonFactory
    )