cmake_minimum_required(VERSION 3.00)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-w)

project(BlackJackTrainer)


add_subdirectory(./public/src ${CMAKE_BINARY_DIR}/public)

target_include_directories(fssimplewindow PUBLIC ${HEADER_PATH})
target_include_directories(ysclass PUBLIC ${HEADER_PATH})
target_include_directories(ysbitmapfont PUBLIC ${HEADER_PATH})
target_include_directories(yssimplesound PUBLIC ${HEADER_PATH})
target_include_directories(ysbitmap PUBLIC ${HEADER_PATH})


add_subdirectory(codebase)