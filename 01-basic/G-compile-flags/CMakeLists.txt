cmake_minimum_required(VERSION 3.5)

# Set a default C compile flag
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DEX2" CACHE STRING "Set C Compiler Flags" FORCE)

# Set the project name
project (compile_flags)

# Add an executable
add_executable(cmake_examples_compile_flags main.c)

target_compile_definitions(cmake_examples_compile_flags PRIVATE EX3)
