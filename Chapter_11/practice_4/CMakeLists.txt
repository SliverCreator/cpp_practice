cmake_minimum_required(VERSION 3.16)
project(time_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(time_lib mytime.cpp mytime.h)

add_executable(usetime usetime.cpp)
target_link_libraries(usetime PRIVATE time_lib)

# 可执行文件输出到当前源码目录，便于直接运行
set_target_properties(usetime PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)