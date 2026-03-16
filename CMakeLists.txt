cmake_minimum_required(VERSION 3.16)
project(cpp_demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ===== block library =====
add_library(block
    block.cpp
)

target_include_directories(block PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
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

# ===== utils library =====
add_library(utils
    utils.cpp
)

target_include_directories(utils PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(freq_count
    freq_count.cpp
)

target_link_libraries(freq_count
    utils
)

add_executable(topk
    topk.cpp
)

target_link_libraries(topk
    utils
)

# ===== word_counter library =====
add_library(word_counter
    word_counter.cpp
)

target_include_directories(word_counter PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(word_counter_app
    main_word_counter.cpp
)

target_link_libraries(word_counter_app
    word_counter
)