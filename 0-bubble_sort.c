#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers using the
 * bubble sort algorithm
 *
 * @array: array of integers param
 * @size: size of the @array
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i = 0, j;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
