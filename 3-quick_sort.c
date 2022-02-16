#include "sort.h"
/**
 * partition - hi
 * @array: hi
 * @first: hi
 * @last: hi
 * @size: hi
 * Return: hi
 */
int partition(int *array, int first, int last, size_t size)
{
	int pivot = array[last], x = 0;
	int i = (first - 1), j;

	for (j = first; j < last; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
			x = array[i];
			array[i] = array[j];
			array[j] = x;
			print_array(array, size);
			}
		}
	}
	if (i + 1 != last)
	{
		x = array[i + 1];
		array[i + 1] = array[last];
		array[last] = x;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quickSort - bubble sort
 * @array: array of integers
 * @first: hi
 * @last: hi
 * @size: size of array
 */
void quickSort(int *array, int first, int last, size_t size)
{
	int pi;

	if (first < last)
	{
		pi = partition(array, first, last, size);
		quickSort(array, first, pi - 1, size);
		quickSort(array, pi + 1, last, size);
	}
}
/**
 * quick_sort - bubble sort
 * @array: array of integers
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 1)
		return;
	quickSort(array, 0, size - 1, size);
}
