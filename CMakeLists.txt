# CMakeLists.txt for GlitchTechSDL2

# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.26)

# Set the project name
project(GlitchTechSDL2)

# Set the C++ standard to some version of C++
set(CMAKE_CXX_STANDARD 23)

# Must set the path to the main.cpp, for example: scripts/main.cpp if it is inside a folder
add_executable(${PROJECT_NAME} src/main.cpp)

# Inject SDL2 into PATH
set(CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/libs/SDL2/x86_64-w64-mingw32)

# Set SDL2_LIBRARY to the path of the SDL2 main and lib files
set(SDL2_LOCAL_LIB_MAIN ${CMAKE_SOURCE_DIR}/libs/SDL2/x86_64-w64-mingw32/lib/libSDL2main.a)
set(SDL2_LOCAL_LIB_DLL ${CMAKE_SOURCE_DIR}/libs/SDL2/x86_64-w64-mingw32/lib/libSDL2.dll.a)
set(SDL2_LIBRARY ${SDL2_LIBRARY} ${SDL2_LOCAL_LIB_MAIN} ${SDL2_LOCAL_LIB_DLL})

# SDL2 include and lib directories
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)
set(SDL2_PATH "libs/SDL2/x86_64-w64-mingw32")

# Project setup and linking
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR} ${SDL2_LIBRARY_DIRS})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})