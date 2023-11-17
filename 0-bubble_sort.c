#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble
 * sort algorithm
 * @array: array to sort
 * @size: size of array
 * Return: null
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp;
	bool isSorting;

	for (i = 1; i < size; i++)
	{
		isSorting = false;
		for (j = 0; j < (size - i); j++)
		{
			temp = array[j];
			if (temp > array[j + 1])
			{
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				isSorting = true;
			}
		}
		if (!isSorting)
			break;
	}
}
