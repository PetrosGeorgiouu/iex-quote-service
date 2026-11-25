cmake_minimum_required(VERSION 3.20)

project(iex_quote_service LANGUAGES CXX)

add_executable(quote-service src/main.cpp)

target_compile_features(quote-service PRIVATE cxx_std_20)