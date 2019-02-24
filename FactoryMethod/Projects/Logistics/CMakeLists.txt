cmake_minimum_required(VERSION 3.0)
project(Logistics)

set(CMAKE_CXX_STANDARD 11)

add_executable(Logistics    src/main.cpp
							src/transport/Transport.h
                            src/transport/Truck.h
                            src/transport/Truck.cpp
							src/transport/Transport.cpp 
							src/transport/Ship.cpp 
							src/transport/Ship.h 
							src/logistic/Logistics.h
                            src/logistic/Logistics.cpp
                            src/logistic/RoadLogistics.h
                            src/logistic/RoadLogistics.cpp
							src/logistic/SeaLogistics.cpp 
							src/logistic/SeaLogistics.h
                            src/Cargo.h
                            src/Cargo.cpp
                            src/Destination.h
                            src/Destination.cpp                            
							src/storage/TransportPool.h
							src/storage/TransportStorage.h
							src/storage/Storage.h
							src/benchmark/Benchmarker.h
							src/benchmark/Benchmarker.cpp
)