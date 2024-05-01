#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order
 *			using the Selection sort algorithm
 * @array: array of integer
 * @size: size of the array
 *
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp = 0, index = 0;

	for (i = 0; i < size; i++)
	{
		tmp = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (tmp > array[j])
			{
				tmp = array[j];
				index = j;
			}
		}
		if (tmp != array[i])
		{
			array[index] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
