#include "sort.h"

/**
 * selection_sort -   sorts an array of integers in ascending order usig
 * the Selection sort algorithm
 * @array: list to sort
 * @size: size for the list
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int curr, id;
	bool isSorting;

	for (i = 0; i < size - 1; i++)
	{
		id = i;
		isSorting = false;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[id])
			{
				id = j;
				isSorting = true;
			}
		}
		if (isSorting)
		{
			curr = array[i];
			array[i] = array[id];
			array[id] = curr;
			print_array(array, size);
		}
	}
}
