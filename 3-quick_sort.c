#include "sort.h"
/**
 * 
 * 
 */
int partition(int *array, int fisrt, int last)
{
	int pivot = array[last], x = 0;
	int i = (fisrt - 1), j;

	for (j = fisrt; j < last; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
			x = array[i];
			array[i] = array[j];
			array[j] = x;
			print_array(array, 10);
			}
		}
	}
	if (i + 1 != last)
	{
		x = array[i + 1];
		array[i + 1] = array[last];
		array[last] = x;
		print_array(array, 10);
	}
	return (i + 1);
}
/**
 * quickSort - bubble sort
 * @array: array of integers
 * @size: size of array
 */
void quickSort(int *array, int fisrt, int last)
{
	int pi;
	if (fisrt < last)
	{
		pi = partition(array, fisrt, last);
		quickSort(array, fisrt, pi - 1);
		quickSort(array, pi + 1, last);
	}
}
/**
 * quick_sort - bubble sort
 * @array: array of integers
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1);
}
