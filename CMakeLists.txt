cmake_minimum_required(VERSION 3.16)
project(cpp_demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(block
    block.cpp
)

add_executable(main
    main.cpp
)

target_link_libraries(main
    block
)

add_executable(test
    test.cpp
)
target_link_libraries(test
    block
)