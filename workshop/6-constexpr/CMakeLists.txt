cmake_minimum_required(VERSION 2.8)
project(constexpr_example CXX)

file(GLOB sources
    "src/*.hpp"
    "src/*.cpp"
)

add_executable(${CMAKE_PROJECT_NAME} ${sources})
set_property(TARGET ${CMAKE_PROJECT_NAME} PROPERTY CXX_STANDARD 14)

add_custom_target(run
    COMMAND ${CMAKE_PROJECT_NAME}
    DEPENDS ${CMAKE_PROJECT_NAME}
)
