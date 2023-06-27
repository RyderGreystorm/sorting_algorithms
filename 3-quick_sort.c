#include "sort.h"

/**
 * swap - swaps elements in array
 * @a: pointer to first element
 * @b: pointer to second element
 */
void  swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - implements the lomuto partition algorithm
 * @low: index at lower bound
 * @array: array containing elements
 * @high: upper bound index
 * Return: position of the pivot element
 */

int partition(int array[], int low, int high)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[high]);
			print_array(array, high + 1);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * quick_sort_init - sorts the array
 * @array: array contining the elments to be sorted
 * @low: lower bound
 * @high: hihger bound
 */

void quick_sort_init(int array[], int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high);
		quick_sort_init(array, low, pi - 1);
		quick_sort_init(array, pi + 1, high);
	}
}
/**
 * quick_sort - sorts elements in an array using
 * the quick sort algorithm
 * @array: aray containing elements to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
		return;
	quick_sort_init(array, 0, size - 1);

}
