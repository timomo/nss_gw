cmake_minimum_required(VERSION 3.10)
project(untitled1 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled1 main.c include/nss.h nss_gw.c nss_gw.h)