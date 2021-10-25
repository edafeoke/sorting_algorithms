#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, store, flag = 0;
	int temp;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		store = i;
		temp = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[store] > array[j])
			{
				store = j;
				flag = 1;
			}
		}
		if (flag)
		{
			array[i] = array[store];
			array[store] = temp;
			print_array(array, size);
		}
		flag = 0;
	}
}
