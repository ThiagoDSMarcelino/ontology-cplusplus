cmake_minimum_required(VERSION 3.14)

set(This Ontology)

project(${This})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(SRC_CORE_DIR ${SRC_DIR}/core)
set(SRC_BASE_FUNCTIONS_DIR ${SRC_CORE_DIR}/base_functions)
set(SRC_OPERATIONS_DIR ${SRC_CORE_DIR}/operations)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(INCLUDE_CORE_DIR ${INCLUDE_DIR}/core)
set(INCLUDE_BASE_FUNCTIONS_DIR ${INCLUDE_CORE_DIR}/base_functions)
set(INCLUDE_OPERATIONS_DIR ${INCLUDE_CORE_DIR}/operations)

set(SRCS
  ${SRC_DIR}/calculus.cpp
  ${SRC_CORE_DIR}/function.cpp
  ${SRC_BASE_FUNCTIONS_DIR}/constant.cpp
  ${SRC_BASE_FUNCTIONS_DIR}/linear.cpp
  ${SRC_OPERATIONS_DIR}/sum.cpp
  ${SRC_OPERATIONS_DIR}/negative.cpp
  ${SRC_OPERATIONS_DIR}/multiplication.cpp
)

set(HEADERS
  ${INCLUDE_DIR}/calculus.hpp
  ${INCLUDE_CORE_DIR}/function.hpp
  ${INCLUDE_BASE_FUNCTIONS_DIR}/constant.hpp
  ${INCLUDE_BASE_FUNCTIONS_DIR}/linear.hpp
  ${INCLUDE_OPERATIONS_DIR}/sum.hpp
  ${INCLUDE_OPERATIONS_DIR}/negative.hpp
  ${INCLUDE_OPERATIONS_DIR}/multiplication.hpp
)

add_library(${This} STATIC ${SRCS} ${HEADERS})

enable_testing()

add_subdirectory(tests)