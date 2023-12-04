cmake_minimum_required(VERSION 3.24)
project(ConsoleGames)
set(CMAKE_CXX_STANDARD 14)

add_executable(console_games main.cpp)

target_include_directories(console_games PRIVATE ${CMAKE_SOURCE_DIR}/lib/rapidjson/include)
