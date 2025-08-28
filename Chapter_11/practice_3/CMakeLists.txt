cmake_minimum_required(VERSION 3.10)
project(random_walk_3)

set(CMAKE_CXX_STANDARD 20)

# 添加库
add_library(vector_lib_3 vector.cpp vector.h)

# 添加可执行文件
add_executable(randwalk_3 randwalk.cpp)

# 链接库到可执行文件
target_link_libraries(randwalk_3 PRIVATE vector_lib_3)

# 设置输出目录
set_target_properties(randwalk_3 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
