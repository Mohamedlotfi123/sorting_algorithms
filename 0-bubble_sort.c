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
	int tmp = 0, num_of_swap;

	for (i = 0; i < size - 1; i++)
	{
		num_of_swap = 0;
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array((const int *)array, size);
				num_of_swap = 1;
			}
		}
		if (num_of_swap == 0)
			break;
	}
}
