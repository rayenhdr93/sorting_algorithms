#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array of integers
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int x;
	size_t i, j, min;

	for (j = 0; j < size; j++)
	{
		min = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[min])
				min = i;
		}
		if (min != j)
		{
			x = array[min];
			array[min] = array[j];
			array[j] = x;
			print_array(array, size);
		}
	}
}
