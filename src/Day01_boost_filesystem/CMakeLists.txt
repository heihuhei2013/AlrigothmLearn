cmake_minimum_required(VERSION 3.14)
project(day01)

set(CMAKE_CXX_STANDARD 14)

##boost
set(Boost_NO_SYSTEM_PATHS YES)
set(BOOST_ROOT ../Dependency/boost_1.70/)

find_package(Boost REQUIRED COMPONENTS
#        system
        filesystem
        )

if(Boost_FOUND)

    message("发现boost")

    message(${Boost_INCLUDE_DIR})

    message(${Boost_LIBRARY_DIRS})

    message(${Boost_LIBRARIES})


endif()

include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIRS})

add_executable(day01 main.cpp Student.cpp Student.hpp)

target_link_libraries(day01 ${Boost_LIBRARIES})
