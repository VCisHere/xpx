set(XPX_FOLDER
	${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/device
	${CMAKE_CURRENT_SOURCE_DIR}/device/sdl
)

foreach(folder ${XPX_FOLDER})
    file(GLOB srcs ${folder}/*.cpp)
    list(APPEND XPX_SRC ${srcs})
endforeach()

add_executable(xpx ${XPX_SRC})

target_include_directories(xpx PUBLIC
	${THIRD_PARTY_INCLUDE_DIR}

	${XPX_FOLDER}
)

target_link_libraries(xpx PUBLIC
	SDL2-static
	SDL2main
)
