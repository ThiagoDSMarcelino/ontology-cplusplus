cmake_minimum_required(VERSION 3.14)

set(This Ontology)

project(${This})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

set(SRCS
  ${SRC_DIR}/Function.cpp
  ${SRC_DIR}/Calculus.cpp
  ${SRC_DIR}/BaseFunctions/Constant.cpp
  ${SRC_DIR}/BaseFunctions/Linear.cpp
  ${SRC_DIR}/Operations/Sum.cpp
  ${SRC_DIR}/Operations/Negative.cpp
  ${SRC_DIR}/Operations/Multiplication.cpp
)

set(HEADERS
  ${INCLUDE_DIR}/Function.hpp
  ${INCLUDE_DIR}/Calculus.hpp
  ${INCLUDE_DIR}/BaseFunctions/Constant.hpp
  ${INCLUDE_DIR}/BaseFunctions/Linear.hpp
  ${INCLUDE_DIR}/Operations/Sum.hpp
  ${INCLUDE_DIR}/Operations/Negative.hpp
  ${INCLUDE_DIR}/Operations/Multiplication.hpp
)

add_library(${This} STATIC ${SRCS} ${HEADERS})

enable_testing()

add_subdirectory(tests)