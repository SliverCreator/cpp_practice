cmake_minimum_required(VERSION 3.16)
project(ch11_practice_5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(stonewt_lib stonewt.cpp stonewt.h)

add_executable(practice_115 practice_5.cpp)
target_link_libraries(practice_115 PRIVATE stonewt_lib)

# 可执行文件输出到当前源码目录，便于直接运行
set_target_properties(practice_115 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# 静态库输出到当前源码目录
set_target_properties(stonewt_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
