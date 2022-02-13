#include "sort.h"

/**
 * bubble_sort - sorts and array of integers
 * @array: array of integers
 * @size: size of the array
 * Return: none - void function
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int status = 0, index = 0;
	int temp = 0;

	if (size < 2)
		return;
	while (1)
	{
		if ((index + 1) > (unsigned int)size)
		{
			if (status == index)
				break;
			index = 0;
			status = 0;
		}
		if (array[index + 1] < array[index])
		{
			temp = array[index + 1];
			array[index + 1] = array[index];
			array[index] = temp;
			status = 0;
			print_array(array, size);
		}
		index++;
		status++;
	}
}
