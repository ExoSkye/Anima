project(anima_sdl_opengl_backend)

include(params.cmake)

add_library(sdl_opengl_backend ${BACKEND_STYLE} sdl_opengl.cpp sdl_opengl.hpp)