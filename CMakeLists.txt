cmake_minimum_required(VERSION 3.0.0)
project(leecode VERSION 0.1.0)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O0 -fPIC -ggdb -std=c++11 -Wall -Wno-deprecated -Werror -Wno-unused-function -Wno-builtin-macro-redefined -Wno-deprecated-declarations")
include_directories(./include)
set(LIB_SRC
    ./src/Solution.cpp)
set(LIBS leecode)
add_library(leecode SHARED ${LIB_SRC})

add_executable(test_findMedianSortedArrays ./tests/test_findMedianSortedArrays.cpp)
add_dependencies(test_findMedianSortedArrays leecode)
target_link_libraries(test_findMedianSortedArrays ${LIBS})

add_executable(test_threeSumClosest ./tests/test_threeSumClosest.cpp)
add_dependencies(test_threeSumClosest leecode)
target_link_libraries(test_threeSumClosest ${LIBS})

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)