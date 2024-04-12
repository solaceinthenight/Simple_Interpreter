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

# set(DIJKSTRAS_SRC_FILES
#   src/dijkstras.h
#   src/dijkstras.cpp
# )

# add_executable(dijkstra_main
#   ${DIJKSTRAS_SRC_FILES}
#   src/dijkstras_main.cpp
# )

# set(LADDER_SRC_FILES
#   src/ladder.h
#   src/ladder.cpp
# )

# add_executable(ladder_main
#   ${LADDER_SRC_FILES}
#   src/ladder_main.cpp
# )

# find_package(GTest)
# if (GTest_FOUND)
#   set(STUDENT_TEST_FILES
#     gtest/gtestmain.cpp
#     gtest/student_gtests.cpp
#   )

#   add_executable(student_gtests 
#     ${STUDENT_TEST_FILES}
#     ${DIJKSTRAS_SRC_FILES}
#     ${LADDER_SRC_FILES}
#   )
#   target_include_directories(student_gtests PRIVATE src ${GTEST_INCLUDE_DIRS})
#   target_link_libraries(student_gtests PRIVATE ${GTEST_LIBRARIES})
# endif()

