#include "sort.h"

/**
 * quick_sort -   sorts an array of integers in ascending order using the quick
 * sort algorithm
 * @array: array to sort
 * @size: size for the list
 */


void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	if (array == NULL || size < 2)
		return;

	quick_sorter(array, low, high, size);
}

/**
 * quick_sorter - quick sorting algo with lumito partiton
 * @array: array to be sorted
 * @low: low index
 * @high: high index
 * @size: size of array
 * Return: void
 */


void quick_sorter(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lumito_partition(array, low, high, size);
		quick_sorter(array, low, pivot - 1, size);
		quick_sorter(array, pivot + 1, high, size);
	}
}


/**
 * lumito_partition - lumiton partition
 * @array: array to sort
 * @low: low index
 * @high: high index
 * @size: size of array
 * Return: (int) pivot index, j
 */

int lumito_partition(int *array, int low, int high, size_t size)
{
	int i, j = low, pivot = array[high], temp;

	for (i = low; i < high; i++)
	{
		if (array[i] < pivot)
		{
			if (array[i] != array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;

				print_array(array, size);
			}
			j++;
		}
	}

	if (array[high] != array[j])
	{
		array[high] = array[j];
		array[j] = pivot;
		print_array(array, size);
	}

	return (j);
}
