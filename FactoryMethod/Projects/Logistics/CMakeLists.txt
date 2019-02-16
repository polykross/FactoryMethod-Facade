cmake_minimum_required(VERSION 3.0)
project(Logistics)

set(CMAKE_CXX_STANDARD 11)

add_executable(Logistics    src/main.cpp
                            src/cargo.h
                            src/cargo.cpp
                            )