cmake_minimum_required(VERSION 3.13)
project(project2)

set(CMAKE_CXX_STANDARD 14)

add_executable(project2 main.cpp Server.cpp Server.h MySerialServer.cpp MySerialServer.h ClientHandler.cpp
        ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h Solver.h Solver.cpp CacheManager.cpp
        CacheManager.h FileCacheManager.cpp FileCacheManager.h)