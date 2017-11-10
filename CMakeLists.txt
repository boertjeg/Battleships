cmake_minimum_required(VERSION 3.8)
project(Battleships)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp board.h Board.cpp Ship.h Ship.cpp ui.h ui.cpp Fleet.h Fleet.cpp PlotBoard.h PlotBoard.cpp shot.h shot.cpp checksunk.h checksunk.cpp turn.h turn.cpp setup.h setup.cpp)
add_executable(Battleships ${SOURCE_FILES})