#include "sort.h"
/**
 *bubble_sort - implementation of bubble sort
 *@array: array of integers to sort
 *@size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int big;
	size_t i, n;

	if (size < 2)
		print_array(array, size);

	for (n = 0; n < size; n++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				big = array[i];
				array[i] = array[i + 1];
				array[i + 1] = big;
				print_array(array, size);
			}
		}
	}
}
