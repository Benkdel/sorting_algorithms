#include "sort.h"

/**
 * selection_sort - sort by selecting smallest member
 * each time
 * @array: array of integers
 * @size: size of the array
 * Return: none - void function
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, index = 0;
	int tmp = 0;

	for (i = 0; i < size; i++)
	{
		index = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}

		if (index != i)
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;
			print_array(array, size);
		}
	}
}
