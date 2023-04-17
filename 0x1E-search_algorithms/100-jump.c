#include "search_algos.h"
/**
 * jump_search - searching for a number in a jump pattern
 * @array: input
 * @size: size of the input
 * @value: value to seaach
 * Return: index of the value, or -1 when the values is absent
 */
int jump_search(int *array, size_t size, int value)
{
	int a, b, c;
	int step = sqrt(size);

	if (array == NULL)
		return (-1);
	for (a = 0; a < (int)size; a += step)
	{
		if (*(array + a) >= value)
		{
			b = a - step;
			c = a;
			return (helper(array, b, c, size, value));
		}
		printf("Value checked array[%i] = [%i]\n", a, *(array + a));
		if (*(array + a) == value)
			return (a);
	}
	return (helper(array, a - step, a, size, value));
}
/**
 * helper - helper to jump
 * @array: input array
 * @s: the beginning
 * @e: eing index
 * @size: the size of array
 * @value: the value to search for
 * Return: the index of the value, or -1 when the values is absent
 */
int helper(int *array, int b, int c, int size, int value)
{
	printf("Value found between indexes [%i] and [%i]\n",
			b, c);
	if (c >= size)
		c = size - 1;
	while (b <= c)
	{
		printf("Value checked array[%i] = [%i]\n",
				b, *(array + b));
		if (*(array + b) == value)
			return (b);
		b++;
	}
	return (-1);
}
