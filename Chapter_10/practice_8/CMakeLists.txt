# Chapter 10 - practice_8

add_executable(practice_108
    practice_8.cpp
    list.cpp
)

# 将可执行文件输出到当前源码目录
set_target_properties(practice_108 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
