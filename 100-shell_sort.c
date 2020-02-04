#include "sort.h"
/**
 *shell_sort - algortih for shell sort with Knuth sequence
 *@array: pointer to array
 *@size: size of array
 */
void shell_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, h = 0;

	if (size < 2)
		return;

	while (h <= size / 3)
	{
		h = h * 3 + 1;
	}

	while (h > 0)
	{
		for (i = h; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= h && array[j - h] > tmp; j -= h)
			{
				array[j] = array[j - h];
			}
			array[j] = tmp;
		}
		print_array(array, size);
		h /= 3;
	}
}
