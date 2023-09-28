#include "sort.h"
/**
 * swap - swaps two integers
 * @x: interger 1
 * @y: integer 2
 */
void swap(int *x, int *y)
{
	int S = *x;
	*x = *y;
	*y = S;
}
/**
 * lomuto_partition - devide array
 * @array: array
 * @size: size of array
 * @el1: element 1
 * @el2: element 2
 * Return: index partitioned
 */

int lomuto_partition(int *array, size_t size, int el1, int el2)
{
	int part = array[el2];
	int a = el1;
	int b;

	for (b = el1; b < el2; b++)
	{
		if (array[b] <= part)
		{
			swap(&array[a], &array[b]);
			if (a != b)
				print_array(array, size);
			a++;
		}
	}
	swap(&array[a], &array[el2]);
	if (a != b)
		print_array(array, size);
	return (a);
}
/**
 * sortpart - sortts array by parts
 * @array: array
 * @el1: element 1
 * @el2: element 2
 * @size: size
 * Return: nothing
 */

void sortpart(int *array, int el1, int el2, size_t size)
{
	int sort;

	if (el1 < el2)
	{
		sort = lomuto_partition(array, el1, el2, size);
		sortpart(array, el1, sort - 1, size);
		sortpart(array, sort + 1, el2, size);
	}
}
/**
 * quick_sort - sorts in ascending order
 * @array: array
 * @size: size
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	sortpart(array, 0, size - 1, size);
}
