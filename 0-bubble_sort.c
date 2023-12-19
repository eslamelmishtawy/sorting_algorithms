#include "sort.h"

/**
 * bubble_sort - function to sort array
 * @array: pointer to the array will be sorted
 * @size: size of the array
 */


void bubble_sort(int *array, size_t size)
{
	int tmp, swap = 0;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
			break;
	}
}
