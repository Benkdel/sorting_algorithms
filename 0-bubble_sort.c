#include "sort.h"

/**
 * bubble_sort - sorts and array of integers
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int status = 0, index = 0;
	int temp = 0;

	while (1)
	{
		if ((index + 1) > size)
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