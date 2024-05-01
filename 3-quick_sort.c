#include "sort.h"
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
}
