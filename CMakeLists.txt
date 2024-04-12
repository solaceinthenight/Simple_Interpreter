cmake_minimum_required(VERSION 3.20)

project(Simple_Interpreter)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(INTERPRETER_FILES
  include/interpreter.h
  src/interpreter.cpp
)

set(OPERATIONS_FILES
  include/operations.h
  src/operations.cpp
)

add_executable(interpreter_main
  ${INTERPRETER_FILES}
  ${OPERATIONS_FILES}
  src/main.cpp
)