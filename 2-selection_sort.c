#include "sort.h"
/**
 * selection_sort - Selection sort
 * @array: Pointer to the array
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	int pos;
	size_t i, j, min;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		pos = array[i];
		array[i] = array[min];
		array[min] = pos;
		print_array(array, size);
	}
}
