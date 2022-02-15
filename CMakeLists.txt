cmake_minimum_required(VERSION 3.17)
project(Anima)

set(CMAKE_CXX_STANDARD 17)

option(SELECT_BACKENDS "Select backends when backends are already selected" OFF)

add_subdirectory(nall)

set(BUILD_SHARED_LIBS ON)
add_subdirectory(glm)

include(backends.cmake)

add_library(Anima ${LINKAGE_TYPE} src/Engine/Instance.cpp include/Engine/Instance.hpp include/Engine/pch.hpp src/Engine/Scene.cpp include/Engine/Scene.hpp src/Engine/Entity.cpp include/Engine/Entity.hpp src/Engine/Mesh.cpp include/Engine/Mesh.hpp src/Engine/Voxel.cpp include/Engine/Voxel.hpp include/Backend/VideoBackend.hpp include/Backend/IOBackend.hpp)
add_executable(AnimaRuntime src/Runtime/main.cpp)

target_link_libraries(Anima nall glm_shared ${BACKEND_LIBS})
target_include_directories(Anima PUBLIC include)

target_link_libraries(AnimaRuntime Anima)