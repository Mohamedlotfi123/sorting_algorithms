#include "sort.h"
/**
 * bubble_sort - sorts array of integers using bubble sort algorithm
 * @array: the array of integers.
 * @size: number of element in the array.
 *
 * Return: Void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array((const int *)array, size);
			}
		}
	}
}
