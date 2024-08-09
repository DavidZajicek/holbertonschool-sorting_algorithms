#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - swaps two integers
 * @a: the first number
 * @b: the second number
 */
void swap(int *a, int *b)
{
	size_t temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * lomuto_partition - ..
 * @array: pointer to the array
 * @lb: lower bound
 * @ub: upper bound 
 */
void lomuto_partition(int *array, int low, int high)
{
	size_t pivot, start, end;

	pivot = array[low];
	start = low + 1;
	end = hight;

	while (start <= end)
	{
	       while (start <= end && array[start] <= pivot)
	       {
		       start++;
	       }
	       while (start <= end && array[end] > pivot)
	       {
		       end--;
	       }
	       if (start < end)
	       {
		       swap(&array[start], &array[end]);
	       }
	}
	swap(&array[low], &array[end]);
	return (end);
}
/**
 * quick_sort - sorts an array using Quick Sort
 * @array: pointer to the array
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

}
