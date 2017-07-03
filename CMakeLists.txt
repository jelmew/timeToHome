cmake_minimum_required(VERSION 3.7)
project(timeToHome)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(timeToHome ${SOURCE_FILES})
install(TARGETS timeToHome
        RUNTIME DESTINATION $ENV{HOME}/bin)