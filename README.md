# Data Structure and Algorithm in C

# Data structure is a way to store and organize data in a computer, so that it can be used efficiently

# Data Structure concepts:
# 1) Mathematical / logical models or Abstract data-types
# 2) Implementation

# Abstract Data Types (ADTs):- define data and operations but no implementation.

# dsa based on:
# 1- logical view
# 2- operations
# 3- cost of operations
# 4- implementation

# "List (a.k.a array)" as abstract data type
# - store a given number of elements of a given data-type
# - write / modify element at a position
# - read element at a position 

# NB: When array is full, a new larger array is created, copying the elements in the previous array into the new array. Then, free the memory of the previous array. The size of the new array is usually 2x the size of the previous array. Thus, the implementaion of list is not efficient as it result to memory wastage n high cost. Hence, "Linked List" is better.