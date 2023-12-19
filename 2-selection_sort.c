#include "sort.h"

/**
 * selection_sort - function to sort array
 * @array: pointer to list
 * @size: size
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, tmp;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
		}
	}
}
