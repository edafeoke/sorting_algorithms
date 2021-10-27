#include "sort.h"

/**
 * swap - swap two index of an array
 * @array: array
 * @a: first index
 * @b: second index
 */
void swap(int *array, size_t a, size_t b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

/**
 * quick_sort - a function that sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	size_t i, j;
	int pivot;

	if (array == NULL)
		return;
	pivot = array[size - 1];

	for (i = 0; i < size; i++)
	{
		if (array[i] > pivot)
		{
			for (j = i; j < size; j++)
			{
				if (array[j] < pivot)
				{
					swap(array, i, j);
					print_array(array, size);
					i++;
				}
			}
		}
	}
}
