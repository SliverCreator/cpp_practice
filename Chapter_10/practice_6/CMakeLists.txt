# Chapter 10 - practice_6

# 构建静态库
add_library(move_p6_lib STATIC Move.cpp)
# 将静态库输出到当前源码目录
set_target_properties(move_p6_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# 构建可执行文件并链接静态库
add_executable(practice_106 practice_6.cpp)
target_link_libraries(practice_106 PRIVATE move_p6_lib)
# 将可执行文件输出到当前源码目录
set_target_properties(practice_106 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
