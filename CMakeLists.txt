cmake_minimum_required(VERSION 3.2)

project(test CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#
# Enable Clang-Tidy use for Static Analysis
#
find_program(CLANGTIDY clang-tidy)
if(CLANGTIDY)
  set(CMAKE_C_CLANG_TIDY ${CLANGTIDY})
  set(CMAKE_CXX_CLANG_TIDY ${CLANGTIDY})
else()
  message(SEND_ERROR "clang-tidy could not be located.")
endif()

add_executable(test
  testMain.cpp
  )


