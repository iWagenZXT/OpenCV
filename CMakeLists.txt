cmake_minimum_required(VERSION 3.19)
project(openCV_1)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)

add_executable(openCV_1 main.cpp)
target_link_libraries(openCV_1 ${OpenCV_LIBS})