cmake_minimum_required(VERSION 2.8)

project(rule_of_five_1)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})

set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/source)

set(PROJECT_SOURCES ${PROJECT_SOURCE_DIR}/main.cpp)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})