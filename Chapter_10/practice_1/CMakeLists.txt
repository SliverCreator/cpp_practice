# Chapter 10 - practice_1

# 构建静态库
add_library(bank_lib STATIC bank.cpp)
# 将静态库输出到当前源码目录
set_target_properties(bank_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# 构建可执行文件并链接静态库
add_executable(practice_101 practice_1.cpp)
target_link_libraries(practice_101 PRIVATE bank_lib)
# 将可执行文件输出到当前源码目录
set_target_properties(practice_101 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
