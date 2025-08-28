cmake_minimum_required(VERSION 3.10)
project(complex_number)

set(CMAKE_CXX_STANDARD 20)

# 添加库
add_library(complex0_lib complex0.cpp complex0.h)

# 添加可执行文件
add_executable(practice_7 practice_7.cpp)

# 链接库到可执行文件
target_link_libraries(practice_7 PRIVATE complex0_lib)

# 设置输出目录
set_target_properties(practice_7 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
