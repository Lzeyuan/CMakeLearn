project(create_window VERSION 1.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable (
	${PROJECT_NAME}
	"main.ixx" 
	"base/shader.ixx"
	"stdafx.h"
)

target_include_directories(
	${PROJECT_NAME}
	PRIVATE
	"/"
)

target_link_libraries(${PROJECT_NAME} PRIVATE glad)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw)
target_precompile_headers(${PROJECT_NAME} PRIVATE "stdafx.h")