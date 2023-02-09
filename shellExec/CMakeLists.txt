cmake_minimum_required(VERSION 3.24)
project(shellExec C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_C_FLAGS -m32)
set(CMAKE_CXX_FLAGS -m32)
add_executable(shellExec main.c)
