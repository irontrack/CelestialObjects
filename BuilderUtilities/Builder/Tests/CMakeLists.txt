set( target BuilderLib )


add_executable( ${target} TestMain.cpp )

target_link_libraries( ${target} PUBLIC
    Builder
    )

add_test( "${target}_Test" BuilderLib )

