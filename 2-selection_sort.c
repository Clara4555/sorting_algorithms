#include "sort.h"

/**
 * swapInteger - Interchange the positions of two integers in an array.
 * @first: The first integer to swap.
 * @second: The second integer to swap.
 */

void swapInteger(int *first, int *second)
{
	int temporary;

	temporary = *first;
	*first = *second;
	*second = temporary;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int *current_min;
	size_t b, a;

	if (array == NULL || size < 2)
		return;

	for (b = 0; b < size - 1; b++)
	{
		current_min = array + b;
		for (a = b + 1; a < size; a++)
			current_min = (array[a] < *current_min) ? (array + a) : current_min;

		if ((array + b) != current_min)
		{
			swapInteger(array + b, current_min);
			print_array(array, size);
		}
	}
}
