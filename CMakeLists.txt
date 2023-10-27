cmake_minimum_required(VERSION 3.0.0)
project(lab3 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(lab3 main.cpp
        Player.hpp
        Player.cpp
        Playercontroller.cpp
        Playercontroller.hpp
        Field/cell.cpp
        Field/cell.hpp
        Field/gamefield.hpp
        Field/gamefield.cpp
        Events/Event.hpp
        Events/PlayerEvent.hpp
        Events/HealEvent.hpp
        Events/HealEvent.cpp
        Field/FieldBuilder.hpp
        Field/FieldBuilder.cpp
        Events/PlayerEvent.cpp
        Events/Score.hpp
        Events/Score.cpp
        Events/Enemy.cpp
        Events/Enemy.hpp
        Events/Teleport.cpp
        Events/Teleport.hpp
        Events/FieldEvent.cpp
        Events/FieldEvent.hpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
