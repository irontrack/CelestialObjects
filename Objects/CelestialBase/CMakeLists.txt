set( target CelestialBase )
set( headers CelestialBase.hpp )
set( sources CelestialBase.cpp )

add_library( ${target} ${headers} ${sources} )

target_include_directories( ${target} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
	)

target_link_libraries( ${target} PUBLIC
    Utilities
	)