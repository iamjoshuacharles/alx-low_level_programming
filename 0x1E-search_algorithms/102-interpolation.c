#include "search_algos.h"
/**
 * interpolation_search - search for a number in an interpolaion pattern
 * @array: the input
 * @size:  size of the input
 * @value: value to seaach
 * Return: index of the value, or -1 when the values is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	int g, h, a;

	if (array == NULL)
		return (-1);
	h = size - 1;
	g = 0;
	while (g <= h)
	{
		if (g == h)
		{
			if (*(array + g) == value)
				return (g);
			return (-1);
		}
		a = g + (((double)(h - g) / (array[h] - *(array + g)))
				* (value - *(array + g)));
		if (a > h)
		{
			printf("Value checked array[%i] is out of range\n", a);
			break;
		}
		printf("Value checked array[%i] = [%i]\n", a, *(array + a));
		if (*(array + a) == value)
			return (a);
		if (*(array + a) < value)
			g = a + 1;
		else
			h = a - 1;
	}
	return (-1);
}
