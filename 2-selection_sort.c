#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts an array ascending order using Selection sort
 * @array: pointer to the array of integers
 * @size: size of array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	size_t min;
	size_t temp;

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
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}

}
