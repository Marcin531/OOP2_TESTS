cmake_minimum_required(VERSION 3.14)
project(main)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp)


link_directories("googletest/build/lib/") #path to lib directories


link_directories("googletest/build/lib/") #above target
add_library(main ${SOURCE_FILES} ) #creates libmain.a
target_include_directories(main PRIVATE "googletest/googletest/include")
target_link_libraries(main PRIVATE gtest pthread)

#add_executable(main ${SOURCE_FILES})