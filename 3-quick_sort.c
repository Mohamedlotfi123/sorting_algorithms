#include "sort.h"
/**
 * array_size - calculate the number of element of the array
 * @array: array of integers.
 *
 * Return: size of the array
 */
int array_size(int *array)
{
	int i = 0;

	while (array[i])
	{
		i++;
	}
	return (i);
}
/**
 * lomuto - partition function
 * @array: array of integers
 * @low: index to start sorting from
 * @high: index to stop sorting at
 *
 * Return: Void
 */
void lomuto(int *array, int low, int high)
{
	int pivot_value = array[high - 1], i, swap_marker = low, tmp = 0;
	int size = array_size(array);

	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot_value)
		{
			tmp = array[swap_marker];
			array[swap_marker] = array[i];
			array[i] = tmp;
			if (i != swap_marker)
				print_array(array, size);
			swap_marker += 1;
		}
		printf("%d\n", swap_marker);
	}
	if (low < high)
	{
		lomuto(array, low, swap_marker - 1);
		lomuto(array, swap_marker - 1, high);
	}
}
/**
 * quick_sort - function that sorts an array of integers in asecnding order using
 *			the Quick sort algorithm.
 * @array: array of integers.
 * @size: number of element in the list.
 *
 * Return: Void.
 */
void quick_sort(int *array, size_t size)
{
	/*
	int swap_marker = 0, tmp = 0, pivot_value = array[size - 1];
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] <= pivot_value)
		{
			tmp = array[swap_marker];
			array[swap_marker] = array[i];
			array[i] = tmp;
			if ((int)i != swap_marker)
				print_array(array, size);
			swap_marker += 1;
		}
	}
	*/
	lomuto(array, 0, (int)size);
}
