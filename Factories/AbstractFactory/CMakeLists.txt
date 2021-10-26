set( target AbstractFactory )
set( headers AbstractFactory.hpp )

add_library( ${target} INTERFACE )

target_include_directories( ${target} INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
    )
