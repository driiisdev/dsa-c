#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:- "List (a.k.a array)" as abstract data type
 * 
 * - store a given number of elements of a given data-type
 * - write / modify element at a position
 * - read element at a position 
 * 
 * 1) add - write element at an index < T inversly n "o(n)">
 * 2) access - read element at an index <constant time "o(1)">
 * 3) insert - modify element at an index < T inversly n "o(n)">
 * 4) remove - remove element at an index < T inversly n "o(n)">
 * 
 * NB: When array is full, a new larger array is created, copying the elements in the previous array into the new array. Then, free the memory of the previous array. The size of the new array is usually 2x the size of the previous array. Thus, the implementaion of list is not efficient as it result to memory wastage n high cost. Hence, "Linked List" is better.
 * return: (0)
*/
int main ()
{
    return (0);
}