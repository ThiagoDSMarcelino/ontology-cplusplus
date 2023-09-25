cmake_minimum_required(VERSION 3.14)

set(This Ontology)

project(${This})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(SRC_CORE_DIR ${SRC_DIR}/core)
set(SRC_OPERATIONS_DIR ${SRC_CORE_DIR}/operations)
set(SRC_LOGARITHMS_DIR ${SRC_CORE_DIR}/logarithms)
set(SRC_TRIGONOMETRY_DIR ${SRC_CORE_DIR}/trigonometry)

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(INCLUDE_CORE_DIR ${INCLUDE_DIR}/core)
set(INCLUDE_OPERATIONS_DIR ${INCLUDE_CORE_DIR}/operations)
set(INCLUDE_LOGARITHMS_DIR ${INCLUDE_CORE_DIR}/logarithms)
set(INCLUDE_TRIGONOMETRY_DIR ${INCLUDE_CORE_DIR}/trigonometry)

set(SRCS
  ${SRC_DIR}/ontology.cpp
  ${SRC_CORE_DIR}/function.cpp
  ${SRC_CORE_DIR}/constant.cpp
  ${SRC_CORE_DIR}/linear.cpp
  ${SRC_LOGARITHMS_DIR}/logarithm.cpp
  ${SRC_LOGARITHMS_DIR}/natural_logarithm.cpp
  ${SRC_TRIGONOMETRY_DIR}/sine.cpp
  ${SRC_TRIGONOMETRY_DIR}/cosine.cpp
  ${SRC_OPERATIONS_DIR}/sum.cpp
  ${SRC_OPERATIONS_DIR}/negative.cpp
  ${SRC_OPERATIONS_DIR}/multiplication.cpp
  ${SRC_OPERATIONS_DIR}/division.cpp
)

set(HEADERS
  ${INCLUDE_DIR}/ontology.hpp
  ${INCLUDE_CORE_DIR}/function.hpp
  ${INCLUDE_CORE_DIR}/constant.hpp
  ${INCLUDE_CORE_DIR}/linear.hpp
  ${INCLUDE_LOGARITHMS_DIR}/logarithm.hpp
  ${INCLUDE_LOGARITHMS_DIR}/natural_logarithm.hpp
  ${INCLUDE_TRIGONOMETRY_DIR}/sine.hpp
  ${INCLUDE_TRIGONOMETRY_DIR}/cosine.hpp
  ${INCLUDE_OPERATIONS_DIR}/sum.hpp
  ${INCLUDE_OPERATIONS_DIR}/negative.hpp
  ${INCLUDE_OPERATIONS_DIR}/multiplication.hpp
  ${INCLUDE_OPERATIONS_DIR}/division.hpp
)

add_library(${This} STATIC ${SRCS} ${HEADERS})

enable_testing()

add_subdirectory(tests)