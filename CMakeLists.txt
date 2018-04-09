cmake_minimum_required(VERSION 3.5)
project(LightROV-client-linux)
set(CMAKE_CXX_STANDARD 11)

find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)
add_subdirectory(src)
