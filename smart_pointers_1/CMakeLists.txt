cmake_minimum_required(VERSION 2.8)

project(smart_pointers_1)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})

set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)

set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/inc)

set(PROJECT_SOURCES
    ${PROJECT_SOURCE_DIR}/unique.cpp
    ${PROJECT_SOURCE_DIR}/strc.cpp)

set(PROJECT_HEADERS
    ${PROJECT_INCLUDE_DIR}/strc.h)

include_directories(${PROJECT_INCLUDE_DIR})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

