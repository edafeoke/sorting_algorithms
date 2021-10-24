#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: list of integers
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp;

	if (!array)
		return;
	for (i = size; i > 0; i--)
	{
		for (j = 0; j < (i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
