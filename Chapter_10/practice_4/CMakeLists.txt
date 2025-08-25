# Chapter 10 - practice_4

# 构建静态库
add_library(sale_p4_lib STATIC sale.cpp)
# 将静态库输出到当前源码目录
set_target_properties(sale_p4_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# 构建可执行文件并链接静态库
add_executable(practice_104 practice_4.cpp)
target_link_libraries(practice_104 PRIVATE sale_p4_lib)
# 将可执行文件输出到当前源码目录
set_target_properties(practice_104 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
