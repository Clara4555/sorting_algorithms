#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * swapValues - Swaps the values of two integers.
 * @value1: Pointer to the first integer value.
 * @value2: Pointer to the second integer value.
 */
void swapValues(int *value1, int *value2)
{
	int temporaryValue;

	temporaryValue = *value1;
	*value1 = *value2;
	*value2 = temporaryValue;
}


/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, length = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (a = 0; a < length - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				swapValues(array + a, array + a + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		length--;
	}
}
