#include "search_algos.h"
/**
 * exponential_search - search for a number in a exponential pattern
 * @array: the input
 * @size: the size of the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int exponential_search(int *array, size_t size, int value)
{
	int f, h;

	if (array == NULL)
		return (-1);
	if (*(array) == value)
		return (0);

	h = size - 1;
	f = 1;
	while (f <= h)
	{
		if (*(array + f) >= value)
			return (helperexp(array, f / 2, f, value));
		printf("Value checked array[%d] = [%d]\n", f, *(array + f));
		f *= 2;
	}
	return (helperexp(array, f / 2, h, value));
}
/**
 * helperexp - search for a number in a exponential pattern
 * @array: the input
 * @s: the beginning
 * @e: the end
 * @value: value to seaach
 * Return: index of the value, or -1 when the values is not present
 */
int helperexp(int *array, int f, int h, int value)
{
	int a, b;

	printf("Value found between indexes [%i] and [%i]\n", f, h);
	while (f <= h)
	{
		printf("Searching in array: ");
		for (b = f; b < h; b++)
		{
			printf("%i, ", *(array + b));
		}
		printf("%i\n", *(array + b));
		a = (f + h) / 2;
		if (value > *(array + a))
			f = a + 1;
		else if (value < *(array + a))
			h = a - 1;
		else
			return (a);
	}
	return (-1);
}
