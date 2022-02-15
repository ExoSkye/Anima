project(anima_dummy_keyboard_backend)

include(params.cmake)

add_library(dummy_keyboard_backend ${BACKEND_STYLE} dummy_keyboard.cpp dummy_keyboard.hpp)