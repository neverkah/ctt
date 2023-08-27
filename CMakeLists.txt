cmake_minimum_required(VERSION 3.24)
project(ctt CXX)

set(CMAKE_C_STANDARD 11)

file(GLOB_RECURSE files *.cc)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    # 源文件名称中包含[_.c]的文件
    if (${file} MATCHES .cc)
        add_executable(${exe} ${file})
        message(------------ 添加文件:${exe} ${file})
        continue()
    endif ()
    message(************ 跳过文件:${exe} ${file})
endforeach ()
