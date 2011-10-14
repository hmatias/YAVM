include( ${QT_USE_FILE} )

include_directories(
	"common/include"
	 ${CMAKE_CURRENT_BINARY_DIR}
)

set( common_SRCS
	common/src/Actor.cpp
     	common/src/Movie.cpp
	main.cpp
)

SET( QT_LIB
       "QtCore"
        ${QT_LIBRARIES}
)

add_executable( yavm ${common_SRCS} )
target_link_libraries( yavm ${QT_LIB} )
