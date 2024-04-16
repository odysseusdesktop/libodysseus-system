# File: CMakeLists.txt

cmake_minimum_required(VERSION 3.5)

project(libodysseus-system VERSION 1.0.0)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core Gui REQUIRED)

add_library(libodysseus-system STATIC
  libodysseus.h
  libodysseus.cpp
)

target_link_libraries(libodysseus-system Qt5::Core Qt5::Gui)

include(GNUInstallDirs)

install(TARGETS libodysseus-system
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(FILES libodysseus.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

