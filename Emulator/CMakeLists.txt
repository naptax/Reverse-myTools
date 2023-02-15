cmake_minimum_required(VERSION 3.24)
project(Emulator C)

set(CMAKE_C_FLAGS -m32)
set(CMAKE_CXX_FLAGS -m32)

add_executable(Emulator main.c)
