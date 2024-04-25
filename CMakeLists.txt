cmake_minimum_required(VERSION 3.28)
project(ejercicio_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(ejercicio_1 main.cpp
        Producto/Producto.cpp
        Producto/Producto.h
        Fruta/Fruta.cpp
        Fruta/Fruta.h
        Lacteo/Lacteo.cpp
        Lacteo/Lacteo.h
        Limpieza/Limpieza.cpp
        Limpieza/Limpieza.h
        NoPerecible/NoPerecible.cpp
        NoPerecible/NoPerecible.h)
