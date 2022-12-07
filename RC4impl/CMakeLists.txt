cmake_minimum_required(VERSION 3.23)
project(RC4impl C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin/Windows/)

add_executable(RC4impl main.c)
