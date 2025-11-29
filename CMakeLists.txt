cmake_minimum_required(VERSION 3.10)
project(reactive-engine)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_compile_options(-w)

add_executable(reactive-engine ${SOURCES})