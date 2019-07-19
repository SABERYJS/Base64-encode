cmake_minimum_required(VERSION 3.13)
project(base64)

set(CMAKE_CXX_STANDARD 14)

add_executable(base64 main.c base_64.h base_64.c memory.c memory.h)