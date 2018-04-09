cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11)

link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

add_executable(app app.cc)
target_link_libraries(app ${GTKMM_LIBRARIES} main_window)