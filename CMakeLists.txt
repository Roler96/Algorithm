cmake_minimum_required(VERSION 3.19)

project(PathPlanning 
    LANGUAGES CXX
    VERSION 0.0.1
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PathPlanning
    src/main.cpp
)

target_include_directories(PathPlanning 
    PRIVATE
        include
)

