#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * selection_sort - function to selection sort an array
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	int tmp = 0; 
  size_t i, j, min;

  if (array == NULL)
    return;

	for (i = 0; i < size - 1; i++)
  {
	min = i;
	for (j = i + 1; j < size; j++)
    {
	      if (array[j] < array[min])
        {
		      min = j;
        }
    }
  if (min != i)
  {
	tmp = array[i];
	array[i] = array[min];
	array[min] = tmp;
	print_array(array, size);
  }
  }
}
