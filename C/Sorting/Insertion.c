#include <stdio.h>
#include <stdlib.h>

// Print function of arrays
void printArray(int* array, int size)
{
printf("\nElements: ");

for (int i = 0; i < size; i++)
{
printf("%d", array[i]);

// Control the commas and the EOL
if(i != size-1)
printf(", ");
else
printf("\n");	// Go to the next line
}

}

int* shiftedArray(int element, int index, int size, int *array)
{
int* list = malloc(sizeof(int) * size);

// Set the index-first elements in the list
for (int i = 0; i < index; i++)
list[i] = array[i];

// Place the element in the index-position
list[index] = element;

//Fill up the rest of the list
for (int i = index; i < size; i++)
list[i+1] = array[i];

return list;
}

int main ()
{
int list[] = {18, 26, 3, 14, 7, 6, 5};
int size = 7;
int sublistSize = 1;
int* sublist = malloc(sizeof(int) * size);
int currentElement;

// Hello message
printf("Hello, user. \nThis program is illustrates sorting a list using the insertion method.\n");

// We need to start by taking the first element of the list and insert it into the sublist
sublist[0] = list[0];
printf("\nInserted the first element into the sublist.\n");
printArray(sublist, 1);

for (int i = 1; i < size; i++)
{
// Need to increase the size of the sublist
printf("Increasing the sublist's size %d.", sublistSize + 1);
sublistSize += 1;

// Set the currentElement
currentElement = list[i];
sublist[sublistSize - 1] = currentElement;

// Insert the currentElement into the sublist in the right position
for (int j = 0; j < sublistSize; j++)
{
if (currentElement < sublist[j])
{
sublist = shiftedArray(currentElement, j, size, sublist);
break;
} // if
} // 2nd for

// Check the new list
printArray(sublist, size);

} // 1st for

// Free up space
free(sublist);

return 0;
}
