#add_subdirectory(./Functionals) 


# Setup source file list
set(GAME_SOURCES

	#${CMAKE_CURRENT_SOURCE_DIR}/RenderHelper/BaseRenderer.cpp

	${CMAKE_CURRENT_SOURCE_DIR}/CompleteStone.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/EntityRegister.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Grid.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/Square.cpp

	#${Functionals_SOURCES}

	PARENT_SCOPE
)


