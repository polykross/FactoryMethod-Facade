cmake_minimum_required(VERSION 3.0)
project(CatTube)

set(CMAKE_CXX_STANDARD 11)

add_executable(CatTube   
	src/main.cpp src/CatTubeAccount.cpp src/CatTubeAccount.h src/VideoFramework/VideoFile.cpp src/VideoFramework/VideoFile.h src/VideoFramework/Codec.cpp src/VideoFramework/Codec.h src/VideoFramework/BitrateReader.cpp src/VideoFramework/BitrateReader.h)