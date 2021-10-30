
cmake_minimum_required( VERSION 3.19.1 )

project( CelestialObjects )

set( CMAKE_BUILD_DIRECTORY bin )

add_subdirectory( Objects )
add_subdirectory( Factories )
add_subdirectory( BuilderUtilities )

set( target pGeneratedSystem )
add_executable( ${target} main.cpp )

target_link_libraries( ${target} 
    Utilities
    Builder
    CelestialBase
	)
