cmake_minimum_required(VERSION 3.28)
project(code_testing C)

set(CMAKE_C_STANDARD 90)

add_executable(code_testing main.c
        anti-afk-test.c
        main.h)
