cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(WIADemo LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 REQUIRED COMPONENTS
    Core
    Gui
    Widgets
)

add_executable(wiademo
    ControlDlg.cpp
    DeviceModel.cpp
    main.cpp
    WIADemo.cpp
    ControlDlg.ui
    WIADemo.ui
)

target_link_libraries(wiademo
    PRIVATE
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)
