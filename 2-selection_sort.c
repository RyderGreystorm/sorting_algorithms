#include "sort.h"
/**
 * swap - Swaps elements in an array
 * @a: first argument which is a pointer
 * @b: second argument which is also a pointer
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - performs sorting using the seletion
 * sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		swap(&array[min], &array[i]);
		print_array(array, size);
	}
}
