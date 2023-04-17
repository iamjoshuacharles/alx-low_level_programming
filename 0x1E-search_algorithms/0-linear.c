#include "search_algos.h"
/**
 * linear_search - searching for a number in a linear way
 * @array: the input
 * @size: the size of the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int linear_search(int *array, size_t size, int value)
{
	int a;

	if (array == NULL)
		return (-1);
	for (a = 0; a < (int)size; a++)
	{
		printf("Value checked array[%i] = [%i]\n", a, *(array + a));
		if (*(array + a) == value)
			return (a);
	}
	return (-1);
}
