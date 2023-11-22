#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending
 * order using the selection sort algorithm
 *
 * @array: array param to sort
 * @size: the size of @array
 */
void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i = 0, j, k;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		for (j = size - 1, k = i + 1; j > i; j--)
		{
			if (array[j] < array[k])
				k = j;
		}

		if (array[i] > array[k])
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
