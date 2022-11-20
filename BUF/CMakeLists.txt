cmake_minimum_required(VERSION 3.23)
project(BUF C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin/LINUX-ELF/)
add_compile_options(-m32)
add_compile_options(--no-stack-protector)
add_link_options(-m32)
add_executable(BUF main.c)
