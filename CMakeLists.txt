cmake_minimum_required(VERSION 3.16)
project(Crypto)

set(CMAKE_CXX_STANDARD 14)

add_executable(Crypto monoalphabetic.h monoalphabetic.cpp main.cpp )
