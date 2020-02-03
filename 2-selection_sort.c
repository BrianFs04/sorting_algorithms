#include "sort.h"
/**
 *selection_sort - Selection sort
 *@array: Pointer to the array
 *@size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t tmp, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
		else
		{
			continue;
		}
	}
}
