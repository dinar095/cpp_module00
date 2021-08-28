cmake_minimum_required(VERSION 3.16)
project(day00)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/megaphone.cpp)
add_executable(ex01 ex01/ClassContact.cpp ex01/main.cpp ex01/Phonebook.cpp ex01/Phonebook.h)
add_executable(ex02 ex02/Account.cpp ex02/tests.cpp)