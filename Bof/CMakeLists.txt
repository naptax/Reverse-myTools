cmake_minimum_required(VERSION 3.22)
project(Bof-tuto)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin/LINUX-ELF/)

add_compile_options(-m32)
add_compile_options(--no-stack-protector)
add_link_options(-m32)

add_executable(Bof-tuto bof-1.c)
