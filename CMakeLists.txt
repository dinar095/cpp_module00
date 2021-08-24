cmake_minimum_required(VERSION 3.19)
project(day00)

set(CMAKE_CXX_STANDARD 11)

add_executable(day00 ex00/megaphone.cpp ex01/phonebook.cpp)
add_executable(phonebook ex01/phonebook.cpp ex01/ClassContact.cpp)