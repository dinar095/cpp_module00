cmake_minimum_required(VERSION 3.16)
project(day00)

set(CMAKE_CXX_STANDARD 98)

add_executable(day00 ex00/megaphone.cpp ex02/sand.cpp)
add_executable(sand01 ex01/sand.cpp)
add_executable(sand02 ex02/sand.cpp ex02/Account.cpp)
add_executable(phonebook ex01/ClassContact.cpp ex01/main.cpp ex01/Phonebook.cpp ex01/Phonebook.h)
