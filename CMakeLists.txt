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
add_exe_with_output_dir(practice_21 Chapter_2/practice_1.cpp)
add_exe_with_output_dir(practice_22 Chapter_2/practice_1.cpp)
add_exe_with_output_dir(practice_23 Chapter_2/practice_1.cpp)
add_exe_with_output_dir(practice_24 Chapter_2/practice_1.cpp)
add_exe_with_output_dir(practice_25 Chapter_2/practice_1.cpp)
add_exe_with_output_dir(practice_26 Chapter_2/practice_1.cpp)
add_exe_with_output_dir(practice_27 Chapter_2/practice_1.cpp)
add_exe_with_output_dir(practice_31 Chapter_3/practice_1.cpp)
add_exe_with_output_dir(practice_32 Chapter_3/practice_2.cpp)
add_exe_with_output_dir(practice_33 Chapter_3/practice_3.cpp)
add_exe_with_output_dir(practice_34 Chapter_3/practice_4.cpp)
add_exe_with_output_dir(practice_35 Chapter_3/practice_5.cpp)
add_exe_with_output_dir(practice_36 Chapter_3/practice_6.cpp)
add_exe_with_output_dir(practice_37 Chapter_3/practice_7.cpp)
add_exe_with_output_dir(practice_41 Chapter_4/practice_1.cpp)
add_exe_with_output_dir(practice_42 Chapter_4/practice_2.cpp)
add_exe_with_output_dir(practice_43 Chapter_4/practice_3.cpp)
add_exe_with_output_dir(practice_44 Chapter_4/practice_4.cpp)
add_exe_with_output_dir(practice_45 Chapter_4/practice_5.cpp)
add_exe_with_output_dir(practice_46 Chapter_4/practice_6.cpp)
add_exe_with_output_dir(practice_47 Chapter_4/practice_7.cpp)
add_exe_with_output_dir(practice_48 Chapter_4/practice_8.cpp)
add_exe_with_output_dir(practice_49 Chapter_4/practice_9.cpp)
add_exe_with_output_dir(practice_410 Chapter_4/practice_10.cpp)
add_exe_with_output_dir(practice_51 Chapter_5/practice_1.cpp)
add_exe_with_output_dir(practice_52 Chapter_5/practice_2.cpp)
add_exe_with_output_dir(practice_53 Chapter_5/practice_3.cpp)
add_exe_with_output_dir(practice_54 Chapter_5/practice_4.cpp)
add_exe_with_output_dir(practice_55 Chapter_5/practice_5.cpp)
add_exe_with_output_dir(practice_56 Chapter_5/practice_6.cpp)
add_exe_with_output_dir(practice_57 Chapter_5/practice_7.cpp)
add_exe_with_output_dir(practice_58 Chapter_5/practice_8.cpp)
add_exe_with_output_dir(practice_59 Chapter_5/practice_9.cpp)
add_exe_with_output_dir(practice_510 Chapter_5/practice_10.cpp)
add_exe_with_output_dir(practice_61 Chapter_6/practice_1.cpp)
add_exe_with_output_dir(practice_62 Chapter_6/practice_2.cpp)
add_exe_with_output_dir(practice_63 Chapter_6/practice_3.cpp)
add_exe_with_output_dir(practice_64 Chapter_6/practice_4.cpp)
add_exe_with_output_dir(practice_65 Chapter_6/practice_5.cpp)
add_exe_with_output_dir(practice_66 Chapter_6/practice_6.cpp)
add_exe_with_output_dir(practice_67 Chapter_6/practice_7.cpp)
add_exe_with_output_dir(practice_68 Chapter_6/practice_8.cpp)
add_exe_with_output_dir(practice_69 Chapter_6/practice_9.cpp)
add_exe_with_output_dir(practice_71 Chapter_7/practice_1.cpp)
add_exe_with_output_dir(practice_72 Chapter_7/practice_2.cpp)
add_exe_with_output_dir(practice_73 Chapter_7/practice_3.cpp)
add_exe_with_output_dir(practice_74 Chapter_7/practice_4.cpp)
add_exe_with_output_dir(practice_75 Chapter_7/practice_5.cpp)
add_exe_with_output_dir(practice_76 Chapter_7/practice_6.cpp)
add_exe_with_output_dir(practice_77 Chapter_7/practice_7.cpp)
add_exe_with_output_dir(practice_78_1 Chapter_7/practice_8_1.cpp)
add_exe_with_output_dir(practice_78_2 Chapter_7/practice_8_2.cpp)
add_exe_with_output_dir(practice_79 Chapter_7/practice_9.cpp)
add_exe_with_output_dir(practice_710 Chapter_7/practice_10.cpp)
add_exe_with_output_dir(practice_81 Chapter_8/practice_1.cpp)
add_exe_with_output_dir(practice_82 Chapter_8/practice_2.cpp)
add_exe_with_output_dir(practice_83 Chapter_8/practice_3.cpp)
add_exe_with_output_dir(practice_84 Chapter_8/practice_4.cpp)
add_exe_with_output_dir(practice_85 Chapter_8/practice_5.cpp)
add_exe_with_output_dir(practice_86 Chapter_8/practice_6.cpp)
add_exe_with_output_dir(practice_87 Chapter_8/practice_7.cpp)
# 创建 golf 静态库
add_library(golf_lib STATIC Chapter_9/practice_1/golf.cpp)
get_filename_component(golf_lib_dir Chapter_9/practice_1/golf.cpp DIRECTORY)
set_target_properties(golf_lib PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${golf_lib_dir})

# 修改 practice_91 的定义，链接 golf_lib
add_executable(practice_91 Chapter_9/practice_1/practice_1.cpp)
target_link_libraries(practice_91 PRIVATE golf_lib)
get_filename_component(output_dir Chapter_9/practice_1/practice_1.cpp DIRECTORY)
set_target_properties(practice_91 PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${output_dir})

add_exe_with_output_dir(practice_92 Chapter_9/practice_2.cpp)
add_exe_with_output_dir(practice_93 Chapter_9/practice_3.cpp)
# 创建 静态库
add_library(sale_lib STATIC Chapter_9/practice_4/sale.cpp)
get_filename_component(sale_lib_dir Chapter_9/practice_4/sale.cpp DIRECTORY)
set_target_properties(sale_lib PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${sale_lib_dir})

# 修改 practice_94 的定义，链接
add_executable(practice_94 Chapter_9/practice_4/practice_4.cpp)
target_link_libraries(practice_94 PRIVATE sale_lib)
get_filename_component(output_dir Chapter_9/practice_4/practice_4.cpp DIRECTORY)
set_target_properties(practice_94 PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${output_dir})

# 编译 Chapter_10/practice_1
add_subdirectory(Chapter_10/practice_1)
# 编译 Chapter_10/practice_2
add_subdirectory(Chapter_10/practice_2)
# 编译 Chapter_10/practice_4
add_subdirectory(Chapter_10/practice_4)
# 编译 Chapter_10/practice_3
add_subdirectory(Chapter_10/practice_3)
# 编译 Chapter_10/practice_5
add_subdirectory(Chapter_10/practice_5)
# 编译 Chapter_10/practice_6
add_subdirectory(Chapter_10/practice_6)
# 编译 Chapter_10/practice_7
add_subdirectory(Chapter_10/practice_7)
# 编译 Chapter_10/practice_8
add_subdirectory(Chapter_10/practice_8)
# 编译 Chapter_11/practice_1
add_subdirectory(Chapter_11/practice_1)
# 编译 Chapter_11/practice_2
add_subdirectory(Chapter_11/practice_2)
# 编译 Chapter_11/practice_3
add_subdirectory(Chapter_11/practice_3)
# 编译 Chapter_11/practice_4
add_subdirectory(Chapter_11/practice_4)
# 编译 Chapter_11/practice_6
add_subdirectory(Chapter_11/practice_6)
# 编译 Chapter_11/practice_5
add_subdirectory(Chapter_11/practice_5)
# 编译 Chapter_11/practice_7
add_subdirectory(Chapter_11/practice_7)