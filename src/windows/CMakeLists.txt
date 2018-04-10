cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11)

link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

add_library(main_window STATIC main_window.cc connect_window.cc)
target_link_libraries(main_window ${GTKMM_LIBRARIES})
