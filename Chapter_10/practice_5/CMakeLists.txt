# Chapter 10 - practice_5

# 构建静态库
add_library(stack_p5_lib STATIC stack.cpp)
# 将静态库输出到当前源码目录
set_target_properties(stack_p5_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# 构建可执行文件并链接静态库
add_executable(practice_105 main.cpp)
target_link_libraries(practice_105 PRIVATE stack_p5_lib)
# 将可执行文件输出到当前源码目录
set_target_properties(practice_105 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
