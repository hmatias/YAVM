project( yavm )
cmake_minimum_required( VERSION 2.6.2 )

set( CMAKE_BUILD_TYPE Debug )
set( CMAKE_CXX_FLAGS "-Wall -Wuninitialized -O0 -g3" )

find_package( Qt4 REQUIRED )
add_subdirectory( src )
