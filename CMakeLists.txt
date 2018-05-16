cmake_minimum_required (VERSION 2.6)

project("RAMCloudDB")

# Set Compiler Flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -DNDEBUG -std=c++11")

include_directories(src RAMCloud/src RAMCloud/obj.master)

add_executable(main src/main.cc src/Graph.cc)
