cmake_minimum_required(VERSION 3.31)
project(cpp_practice)

set(CMAKE_CXX_STANDARD 20)

# 定义一个函数来添加可执行文件并自动设置输出目录
function(add_exe_with_output_dir target_name source_file)
    add_executable(${target_name} ${source_file})
    get_filename_component(output_dir ${source_file} DIRECTORY)
    if(output_dir)
        set_target_properties(${target_name} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${output_dir})
    else()
        set_target_properties(${target_name} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
    endif()
endfunction()

# 使用函数添加所有可执行文件
add_exe_with_output_dir(practice_1 Chapter_3/practice_1.cpp)
add_exe_with_output_dir(practice_2 Chapter_3/practice_2.cpp)
add_exe_with_output_dir(practice_3 Chapter_3/practice_3.cpp)
add_exe_with_output_dir(practice_4 Chapter_3/practice_4.cpp)
add_exe_with_output_dir(practice_5 Chapter_3/practice_5.cpp)
add_exe_with_output_dir(practice_6 Chapter_3/practice_6.cpp)
add_exe_with_output_dir(practice_7 Chapter_3/practice_7.cpp)