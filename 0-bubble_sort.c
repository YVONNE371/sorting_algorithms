#include "sort.h"

/**
 * bubble_sort - bubble sorting in an ascending order
 * @array: array header
 * @size: array size
 *
 * Return: null
 */
void bubble_sort(int *array, size_t size)
{
	int x = 0, temp = 0, max = 0, swapped = 0;

	if (!array || size < 2)
		return;

	max = size - 1;

	for (; x < max; ++x)
	{
		if (array[x] > array[x + 1])
		{
			temp = array[x];
			array[x] = array[x + 1];
			array[x + 1] = temp;
			swapped = 1;
			print_array(array, size);
		}

		if (swapped == 1 && x == max - 1)
			x = -1, swapped = 0, --max;
	}
}
