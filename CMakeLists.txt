cmake_minimum_required(VERSION 3.14)

set(This Ontology)

project(${This})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(TEST_DIR ${CMAKE_SOURCE_DIR}/tests)

set(SRCS
  ${SRC_DIR}/Linear.cpp
  ${SRC_DIR}/Constant.cpp
  ${SRC_DIR}/Calculus.cpp
)

set(HEADERS
  ${INCLUDE_DIR}/Calculus.hpp
  ${INCLUDE_DIR}/Constant.hpp
  ${INCLUDE_DIR}/IFunction.hpp
  ${INCLUDE_DIR}/Linear.hpp
)

add_library(${This} STATIC ${SRCS} ${HEADERS})

enable_testing()

add_subdirectory(tests)