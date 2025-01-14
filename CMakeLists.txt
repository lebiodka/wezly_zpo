cmake_minimum_required(VERSION 3.27)
project(NetSim__wzy____dodatkowe_testy)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(NetSim__wzy____dodatkowe_testy
        helpers.cpp
        helpers.hxx
        main.cpp
        nodes.cpp
        nodes.hxx
        package.cpp
        package.hxx
        storage_types.cpp
        storage_types.hxx
        tests.cpp
        types.hxx)
