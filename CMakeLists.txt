cmake_minimum_required(VERSION 2.8)
project(iwyu_samples)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -stdlib=libc++ -Wall")
set(CMAKE_CXX_FLAGS_IWYU "${CMAKE_CXX_FLAGS} -isystem ~/Documents/dev/llvm/libcxx/include/ -isystem ~/Documents/dev/clang_3.5/lib/clang/3.5.0/include/")

include_directories(src/ src/shared_ptr/ )
set(SRC_LIST src/main.cpp src/shared_ptr/B.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})