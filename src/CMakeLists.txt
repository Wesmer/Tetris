add_subdirectory(./game)
#add_subdirectory(./util)
add_subdirectory(./Rendering)
add_subdirectory(./Handler)


# Setup source file list
set(src_SOURCES
    	main.cpp
		App.cpp
		Window.cpp
)


# Build executable
add_executable(tet ${src_SOURCES} ${GAME_SOURCES} ${HANDLER_SOURCES} ${RENDER_SOURCES})
target_link_libraries(tet ${SDL2_LIBRARY} ${SDL2_IMG_LIBRARY})
target_link_libraries(tet m)
