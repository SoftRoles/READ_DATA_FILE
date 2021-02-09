cmake_minimum_required(VERSION 3.0.0)
project(READ_DATA_FILE VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(READ_DATA_FILE main.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
