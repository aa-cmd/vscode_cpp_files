cmake_minimum_required(VERSION 2.8)

project(Simple_Inheritance_1)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})

set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/source)

set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)

set(PROJECT_SOURCES
    ${PROJECT_SOURCE_DIR}/simple_inheritance_1.cpp
    ${PROJECT_SOURCE_DIR}/main.cpp)

set(PROJECT_HEADERS
    ${PROJECT_INCLUDE_DIR}/simple_inheritance_1.h)

include_directories(${PROJECT_INCLUDE_DIR})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})