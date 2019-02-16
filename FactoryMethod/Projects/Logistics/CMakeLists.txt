cmake_minimum_required(VERSION 3.0)
project(Logistics)

set(CMAKE_CXX_STANDARD 11)

add_executable(Logistics    src/main.cpp
                            src/Cargo.h
                            src/Cargo.cpp
                            src/Destination.h
                            src/Destination.cpp
                            src/Truck.h
                            src/Truck.cpp
                            )