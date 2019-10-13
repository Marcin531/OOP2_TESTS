cmake_minimum_required(VERSION 3.14)
project(tests)

set(CMAKE_CXX_STANDARD 14)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

link_directories("googletest/build/lib/") #musi być powyżej target'u


add_executable(tests main.cpp) #musi byc przy target_include. Przy kompilacji plikow bedzie widoczna podana sciezka
include(FindPkgConfig)
find_package(Main REQUIRED)

target_include_directories(tests PRIVATE "googletest/googletest/include" ${MAIN_INCLUDE_DIR})
target_link_libraries(tests PRIVATE gtest ${MAIN_LIBRARY} pthread ) ##dodanie bibliotek, pominieto lib, bez pthread komunikat, ze nalezy to dodac
