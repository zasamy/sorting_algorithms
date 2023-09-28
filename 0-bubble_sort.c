#include "sort.h"
/**
 * bubble_sort - sorts array in asending order
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int a = 0, b = 0, s = size, bubble = 0;

	if (size == 0 || size == 1)
		return;
	while (a < s)
	{
		bubble = 0;
		if (array[a] > array[a + 1])
		{
			b = array[a];
			array[a] = array[a + 1];
			array[a + 1] = b;
			bubble = 1;
			print_array(array, size);
		}
		if (a == s - 2)
		{
			if (bubble == 0)
				break;
			s--;
			a = -1;
		}
		a++;
	}
}
