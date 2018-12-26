cmake_minimum_required(VERSION 3.12)
project(desginMode)

set(CMAKE_CXX_STANDARD 14)


macro(add_design_path path)
    file(GLOB souce_file "mode/${path}/*.hpp" "mode/${path}/*.cpp")
    add_executable("${path}" ${souce_file})
    target_include_directories(${path} PUBLIC "mode/${path}")
endmacro()



set(design_path
        factory
        BuilderPattern
        prototype)

foreach(path ${design_path})
    add_design_path(${path})
    message(STATUS "config name : ${path}" )
endforeach()



add_executable(desginMode main.cpp)
