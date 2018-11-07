CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

PROJECT(CommonAlgorithms)

INCLUDE_DIRECTORIES(BEFORE ${CMAKE_SOURCE_DIR})

FIND_PACKAGE(Threads REQUIRED)

ADD_COMPILE_OPTIONS(-Wall -Werror -Wextra)

SET(CMAKE_CXX_STANDARD "14")

ADD_SUBDIRECTORY(UnitTests)

ADD_EXECUTABLE(Thi
  Main.cpp)

ENABLE_TESTING()                                                                    
ADD_TEST(NAME RunTests COMMAND UnitTestsRun)
