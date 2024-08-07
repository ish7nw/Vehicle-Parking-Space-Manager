cmake_minimum_required(VERSION 3.28)
project(Vehicle_Parking_Space_Manager)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Vehicle_Parking_Space_Manager
        ParkedVehicle.cpp
        ParkedVehicle.h
        main.cpp)
