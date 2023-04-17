#include "search_algos.h"
/**
 * advanced_binary - search for a number in a binary way
 * @array: the input
 * @size: the size of the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (helperBinary(array, 0, size - 1, value));
}
/**
 * helperBinary - search for a number in a binary way
 * @array: the input
 * @s: the begining
 * @e: the end
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int helperBinary(int *array, int s, int e, int value)
{
	int w, i;

	printf("Searching in array: ");
	for (i = s; i < e; i++)
	{
		printf("%i, ", *(array + i));
	}
	printf("%i\n", *(array + i));
	w = ((e - s) / 2) + s;
	if (*(array + w) == value && *(array + (w - 1)) != value)
		return (w);
	if (s == e)
		return (-1);
	if (*(array + w) >= value)
		return (helperBinary(array, s, w, value));
	if (*(array + w) < value)
		return (helperBinary(array, w + 1, e, value));
	return (-1);
}
