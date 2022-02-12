#include "sort.h"
/**
 * bubble_sort - bubble sort
 * @array: array of integers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int x = 1, j;
	size_t i;

	while (x > 0)
	{
		x = 0;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				j = array[i];
				array[i] = array[i + 1];
				array[i + 1] = j;
				x += 1;
				print_array(array, size);
			}
		}
	}
}
