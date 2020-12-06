cmake_minimum_required(VERSION 3.17)
project(compounddatatypes C)

set(CMAKE_C_STANDARD 11)

add_executable(compounddatatypes main.c q1.h)

add_executable(q1 q1.c)

# Question 2 was just updating on question 1
# and noting down any observations, if the array
# max size is larger then the arrays actual value
# it just copies 0.

add_executable(q4-2 q4-2.c)

# Doing question 5 from part two of the tutorial sheet
add_executable(q6-2 q6-2.c)