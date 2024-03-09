#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of ints to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int m, n;
	int tmp;

	if (size < 2)
		return;

	for (m = 0; m < size; m++)
	{
		for (n = 0; n < size - m - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				tmp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
