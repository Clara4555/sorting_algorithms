#include "sort.h"


/**
* swapValues - Swap the values of two integers.
*@value1: Pointer to the first integer value.
*@value2: Pointer to the second integer value.
*/
void swapValues(int *value1, int *value2)
{
	int temporary;

	temporary = *value1;
	*value1 = *value2;
	*value2 = temporary;
}


/**
 *shell_sort - function that sorts an array of integers in ascending
 *order using the Shell sort algorithm, using the Knuth sequence
 *@array: array
 *@size: size
 */
void shell_sort(int *array, size_t size)
{
	size_t index, a, b;

	if (array == NULL || size < 2)
		return;

	for (index = 1; index < (size / 3);)
		index = index * 3 + 1;

	for (; index >= 1; index /= 3)
	{
		for (a = index; a < size; a++)
		{
			b = a;
			while (b >= index && array[b - index] > array[b])
			{
				swapValues(array + b, array + (b - index));
				b -= index;
			}
		}
		print_array(array, size);
	}
}
