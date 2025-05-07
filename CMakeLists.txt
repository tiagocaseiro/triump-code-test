cmake_minimum_required(VERSION 3.31)

project(code-test  LANGUAGES CXX)

include_directories(src)

add_executable(code-test 
  codetest.cpp  
)

target_compile_options(code-test  PRIVATE /Wall /WX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

target_compile_features(code-test PUBLIC cxx_std_20)
