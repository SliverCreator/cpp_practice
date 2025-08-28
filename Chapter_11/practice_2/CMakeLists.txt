cmake_minimum_required(VERSION 3.10)
project(random_walk_p2)

set(CMAKE_CXX_STANDARD 20)

# 创建向量库
add_library(vector_lib_p2 vector_2.cpp vector_2.h)

# 可执行文件
add_executable(randwalk_2 randwalk.cpp)

# 连接库
target_link_libraries(randwalk_2 PRIVATE vector_lib_p2)

# 设置可执行文件输出到当前源码目录
set_target_properties(randwalk_2 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
