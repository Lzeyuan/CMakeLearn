project(simple_test VERSION 1.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable (
	simple_test   
	"main.ixx" 
	"shader.ixx"
)

target_link_libraries(simple_test PRIVATE glad)
target_link_libraries(simple_test PRIVATE glfw)