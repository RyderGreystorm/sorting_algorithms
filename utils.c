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
