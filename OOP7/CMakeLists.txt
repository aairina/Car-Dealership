cmake_minimum_required(VERSION 3.5)

project(OOP7 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        Domain/ElectricCar.h
        Domain/ElectricCar.cpp
        Repository/carrepository.h
        Repository/carrepository.cpp
        UI/carui.h
        UI/carui.cpp
        Controller/carcontroller.h
        Controller/carcontroller.cpp
        mainwindow.h
        mainwindow.ui
        CarViewDialog.h
        CarViewDialog.cpp
        CarViewDialog.ui
        clientviewdialog.cpp
        clientviewdialog.h
        clientviewdialog.ui
        errordialog.cpp
        errordialog.h
        errordialog.ui
        adddialog.cpp
        adddialog.h
        adddialog.ui
        logindialog.cpp
        logindialog.h
        logindialog.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(OOP7
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET OOP7 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(OOP7 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(OOP7
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(OOP7 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(OOP7 PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(OOP7)
endif()
