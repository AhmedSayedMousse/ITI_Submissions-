cmake_minimum_required(VERSION 3.23)
project(Banking_System_graduation C)

set(CMAKE_C_STANDARD 99)

add_executable(Banking_System_graduation main.c BankAccount.c BankAccount.h Admin.c Admin.h Customer.c Customer.h)
