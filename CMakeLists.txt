cmake_minimum_required(VERSION 3.14)

project(qt_MusicEquipmentCatalogue LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets)

add_executable(qt_MusicEquipmentCatalogue
  main.cpp

  equipmentcatalogue.h
  equipmentcatalogue.cpp
  equipmentcatalogue.ui

  compressor.h
  compressor.cpp

  res.qrc

)
target_link_libraries(qt_MusicEquipmentCatalogue Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Widgets)

install(TARGETS qt_MusicEquipmentCatalogue
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
