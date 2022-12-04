cmake_minimum_required(VERSION 3.0.0)

add_executable(25.2_comp main.cpp ${MY_INCLUDE_DIR}/cpu.h cpu.cpp  ${MY_INCLUDE_DIR}/disk.h disk.cpp 
${MY_INCLUDE_DIR}/gpu.h gpu.cpp ${MY_INCLUDE_DIR}/kbd.h kbd.cpp ${MY_INCLUDE_DIR}/ram.h ram.cpp)

target_include_directories(25.2_comp PUBLIC ${MY_INCLUDE_DIR})
