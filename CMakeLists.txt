cmake_minimum_required(VERSION 3.27)
project(Hexagone_Jeu_de_Role)

set(CMAKE_CXX_STANDARD 23)

add_executable(rpg main.cpp
        Weapon.cpp
        Character.cpp)
