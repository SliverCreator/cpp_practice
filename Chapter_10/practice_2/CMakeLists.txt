# Chapter 10 - practice_2

# 构建静态库
add_library(person_lib STATIC person.cpp)
# 将静态库输出到当前源码目录
set_target_properties(person_lib PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# 构建可执行文件并链接静态库
add_executable(practice_102 practice_2.cpp)
target_link_libraries(practice_102 PRIVATE person_lib)
# 将可执行文件输出到当前源码目录
set_target_properties(practice_102 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
