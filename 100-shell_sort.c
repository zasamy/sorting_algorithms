#include "sort.h"
/**
 * shell_sort - sorting array with shell sort algorithm
 * @array: array
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	size_t ar = 1, a, b;
	int shell;

	if (size == 0 || size == 1)
		return;
	while (ar < size)
		ar = ar * 3 + 1;
	ar = (ar - 1) / 3;
	while (ar > 0)
	{
		a = ar;
		while (a < size)
		{
			shell = array[a];
			for (b = a; b >= ar && array[b - ar] > shell; b -= ar)
			{
				array[b] = array[b - ar];
			}
			array[b] = shell;
			a++;
		}
		print_array(array, size);
		ar = (ar - 1) / 3;
	}
}
