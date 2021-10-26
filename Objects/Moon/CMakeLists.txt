set( target Moon )
set( headers Moon.hpp )
set( sources Moon.cpp )

add_library( ${target} ${headers} ${sources} )

target_include_directories( ${target} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
	)

target_link_libraries( ${target} PUBLIC
    Utilities
	CelestialBase
	CelestialFactory
	)