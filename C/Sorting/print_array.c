#include<stdio.h>
#include<stdlib.h>

/*
 * This file conatins the function for printing an array.
 */


void print_array(int* array, int length)
{
printf("\nArray: ");

for (int i = 0; i < length; i++)
{
printf("%d", array[i]);

if(i != length - 1)
printf(", ");

} // for

// printf("\n");
}
