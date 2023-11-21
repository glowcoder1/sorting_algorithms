#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: array to sort
 * @size: size of array
 */

void shell_sort(int *array, size_t size)
{
	int swap;
	unsigned int gap = 1, i, j;

	if (array == NULL || size < 2)
		return;

	while (gap < size / 3)
		gap = (gap * 3) + 1;

	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i; j >= gap && array[j] < array[j - gap];
			     j -= gap)
			{
				swap = array[j];
				array[j] = array[j - gap];
				array[j - gap] = swap;
			}
		}
		gap = gap / 3;
		print_array(array, size);
	}
}
