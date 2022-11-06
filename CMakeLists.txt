cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(MyProject VERSION 0.1.0 LANGUAGES CXX C)

# Option A
#list(APPEND CMAKE_PREFIX_PATH "WebGPU")
#find_package(WebGPU CONFIG REQUIRED)

# Option B
add_subdirectory(WebGPU)

set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)
set(GLFW_VULKAN_STATIC OFF CACHE BOOL "" FORCE)
add_subdirectory(glfw)

add_executable(MyTarget
	main.cpp
	${WebGPU_DIR}/src/dawn_proc.c
	#${WebGPU_DIR}/src/webgpu_dawn_native_proc.cpp
)
target_link_libraries(MyTarget PUBLIC WebGPU glfw)
target_compile_features(MyTarget PRIVATE cxx_std_17)
set_target_properties(MyTarget PROPERTIES COMPILE_WARNING_AS_ERROR ON)
