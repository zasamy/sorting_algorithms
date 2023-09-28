#include "sort.h"
/**
 * selection_sort - ascend array with select sort algorithm
 * @array: array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t a, less, b = 0;
	int selection = 0;

	if (size == 0 || size == 1)
		return;
	while (b < size)
	{
		less = b;
		a = b + 1;
		while (a < size)
		{
			if (array[a] < array[less])
				less = a;
			a++;
		}
		if (b != less)
		{
			selection = array[b];
			array[b] = array[less];
			array[less] = selection;
			print_array(array, size);
		}
		b++;
	}
}
