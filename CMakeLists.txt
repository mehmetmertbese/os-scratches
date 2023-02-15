cmake_minimum_required(VERSION 3.21)
project(os_scratches C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(ch2)

add_executable(os_scratches
        ch2/hello.c
        ch2/kernel_module.c
        ch2/kernel_module_2.c
        ch2/simple.c)
