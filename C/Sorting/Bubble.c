#include<stdlib.h>
#include<stdio.h>
#include "main.h"

/*
 * This program is an example of the Bubble Sort method.
 *
 * The method sorts a pair of elements at a time with iteration of n-1.
 */

// The declarations of methods to be used. Full implementation will be found below

int* sortPair(int* pair);

int main(int arg, char** args)
{
int listCopy[] = {2, 9, 5, 4, 8, 1};
int length = sizeof(listCopy)/sizeof(int);
int* list = malloc(sizeof(int) * length);
int nestedIteration = length - 1;
int* pair = malloc(sizeof(int) * 2);

// Copy the listCopy into list
for (int i = 0; i < length; i++)
list[i] = listCopy[i];

for (int i = 0; i < length - 1; i++)
{
printf("Iteration #%d", i + 1);

for (int j = 0; j < nestedIteration; j++)
{
pair[0] = list[j];
pair[1] = list[j + 1];
pair = sortPair(pair);
list[j] = pair[0];
list[j+1] = pair[1];

print_array(list, length);
} // nested for

// Adjust the nestedIteration
nestedIteration -= 1;
printf("\n\n");

} // for

return 0;
}

int* sortPair(int* pair)
{
int* sortedPair = malloc(sizeof(int) * 2);

if (pair[0] > pair[1])
{
sortedPair[0] = pair[1];
sortedPair[1] = pair[0];

return sortedPair;
}
else
return pair;
}
