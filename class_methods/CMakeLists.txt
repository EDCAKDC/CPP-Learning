cmake_minimum_required(VERSION 3.16)
project(day16_wordcounter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(wordcounter_lib
    word_counter.cpp
)

add_executable(word_counter_app
    main.cpp
)

target_link_libraries(word_counter_app
    wordcounter_lib
)