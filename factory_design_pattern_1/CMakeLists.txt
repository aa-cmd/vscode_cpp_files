cmake_minimum_required(VERSION 2.8)

project(Factory_Design_Pattern_1)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})

set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/source)

set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)

set(PROJECT_SOURCES
    ${PROJECT_SOURCE_DIR}/client.cpp
    ${PROJECT_SOURCE_DIR}/object.cpp
    ${PROJECT_SOURCE_DIR}/toyfactory.cpp)

set(PROJECT_HEADERS
    ${PROJECT_INCLUDE_DIR}/toyfactory.h
    ${PROJECT_INCLUDE_DIR}/object.h)

include_directories(${PROJECT_INCLUDE_DIR})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
