project(anima_linux_keyboard_backend)

include(params.cmake)

add_library(linux_keyboard_backend ${BACKEND_STYLE} linux_keyboard.cpp linux_keyboard.hpp)