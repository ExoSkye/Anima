project(anima_dummy_video_backend)

include(params.cmake)

add_library(dummy_video_backend ${BACKEND_STYLE} dummy_video.cpp dummy_video.hpp)