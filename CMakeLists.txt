cmake_minimum_required(VERSION 3.28)
project(Linkedlist C)

set(CMAKE_C_STANDARD 11)

add_executable(Linkedlist main.c
        Linkedlist.c
        Linkedlist.h)
