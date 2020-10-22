cmake_minimum_required(VERSION 3.17)
project(intro C)

set(CMAKE_C_STANDARD 11)

add_executable(intro main.c test.c main.h)