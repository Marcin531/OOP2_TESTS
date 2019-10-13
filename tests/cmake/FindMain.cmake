set(FIND_MAIN_PATHS /../main) # where is second project
find_path(MAIN_INCLUDE_DIR add.h #to header file
        PATHS ${FIND_MAIN_PATHS})
find_library(MAIN_LIBRARY
        NAMES main
        PATH_SUFFIXES cmake-build-debug
        PATHS ${FIND_MAIN_PATHS})