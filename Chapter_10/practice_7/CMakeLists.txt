# Chapter 10 - practice_7

# 构建静态库
add_library(plorg_p7_lib STATIC Plorg.cpp)
# 将静态库输出到当前源码目录
set_target_properties(plorg_p7_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# 构建可执行文件并链接静态库
add_executable(practice_107 practice_7.cpp)
target_link_libraries(practice_107 PRIVATE plorg_p7_lib)
# 将可执行文件输出到当前源码目录
set_target_properties(practice_107 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
