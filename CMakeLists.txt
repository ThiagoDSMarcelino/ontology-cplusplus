cmake_minimum_required(VERSION 3.14)

set(This Ontology)

project(${This})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(SRC_CORE_DIR ${SRC_DIR}/core)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(INCLUDE_CORE_DIR ${INCLUDE_DIR}/core)

set(SRCS
  ${SRC_DIR}/calculus.cpp
  ${SRC_CORE_DIR}/function.cpp
  ${SRC_CORE_DIR}/constant.cpp
  ${SRC_CORE_DIR}/linear.cpp
  ${SRC_CORE_DIR}/sum.cpp
  ${SRC_CORE_DIR}/negative.cpp
  ${SRC_CORE_DIR}/multiplication.cpp
)

set(HEADERS
  ${INCLUDE_DIR}/calculus.hpp
  ${INCLUDE_CORE_DIR}/function.hpp
  ${INCLUDE_CORE_DIR}/constant.hpp
  ${INCLUDE_CORE_DIR}/linear.hpp
  ${INCLUDE_CORE_DIR}/sum.hpp
  ${INCLUDE_CORE_DIR}/negative.hpp
  ${INCLUDE_CORE_DIR}/multiplication.hpp
)

add_library(${This} STATIC ${SRCS} ${HEADERS})

enable_testing()

add_subdirectory(tests)