cmake_minimum_required(VERSION 3.12)

project(qrcode-service)

add_subdirectory(external/googletest)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(qrcode-service
    src/qrcode-service.cpp
    src/HttpServer_httplib.cpp
)