# CMake instructions to make the static lib

include_directories(include/)

add_library( mystaticlib STATIC
  src/mylib.cpp )


set (CMAKE_CXX_STANDARD 11)


set( APP_EXE test )

add_executable( ${APP_EXE}
  src/main.cpp )

target_link_libraries( ${APP_EXE}
  mystaticlib )
