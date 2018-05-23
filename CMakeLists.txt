cmake_minimum_required(VERSION 3.7)
project(GraphAlgorithms)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp GraphNode.cpp GraphNode.h GraphEdge.cpp GraphEdge.h Graph.cpp Graph.h)
add_executable(GraphAlgorithms ${SOURCE_FILES})