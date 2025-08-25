
# Chapter 10 - practice_3

# 构建静态库
add_library(golf_p3_lib STATIC golf.cpp)
# 将静态库输出到当前源码目录
set_target_properties(golf_p3_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# 构建可执行文件并链接静态库
add_executable(practice_103 practice_3.cpp)
target_link_libraries(practice_103 PRIVATE golf_p3_lib)
# 将可执行文件输出到当前源码目录
set_target_properties(practice_103 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)