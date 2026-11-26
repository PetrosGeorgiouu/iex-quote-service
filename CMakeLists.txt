cmake_minimum_required(VERSION 3.20)

project(iex_quote_service LANGUAGES CXX)

find_package(Boost CONFIG REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(Threads REQUIRED)

add_executable(quote-service src/main.cpp)

target_compile_features(quote-service PRIVATE cxx_std_20)

target_link_libraries(quote-service PRIVATE
    Boost::headers
    OpenSSL::SSL
    OpenSSL::Crypto
    Threads::Threads
)