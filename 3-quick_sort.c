#include "sort.h"

/**
 * partition - function that partition an array of int
 * and swap the value
 * @arr: array to partition
 * @low: beggining of the array
 * @high: end of the array
 * @size: size
 * Return: returns the nwes index oh the value
 */

int partition(int *arr, int low, int high, size_t size)
{
	int j, i;
	int pivot = arr[high];

	i = low - 1;

	for (j = low; j <= high; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(arr, i, j);
		}
	}
	swap(arr, high, i + 1);
	print_array(arr, size);
	return (i + 1);
}

/**
 * swap - function that swap value
 * @arr: array
 * @i: pointer to the first value
 * @j: pointer to the second value
 * Return: nothing void
 */

void swap(int *arr, int i, int j)
{
	int tmp;

	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

/**
 * quick_sorting - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: pointer to the array to sort
 * @low: start of the array
 * @high: end of the array
 * @size: size of the array
 * Return: nothing void
 */

void quick_sorting(int *array, size_t size, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quick_sorting(array, size, low, pi - 1);
		quick_sorting(array, size, pi + 1, high);
	}


}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: pointer to the array to sort
 * @size: size of the array
 * Return: nothing void
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sorting(array, size, 0, size - 1);
}

