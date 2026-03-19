cmake_minimum_required(VERSION 3.16)
project(day14_constructor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(word_counter_app
    main.cpp
    word_counter.cpp
)