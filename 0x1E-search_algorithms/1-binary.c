#include "search_algos.h"
/**
 * binary_search - search for a number in a binary way
 * @array: the input
 * @size: the size of the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int binary_search(int *array, size_t size, int value)
{
	int start, mid, end, a;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (a = start; a < end; a++)
		{
			printf("%d, ", *(array + a));
		}
	    printf("%d\n", *(array + a));
		mid = (start + end) / 2;
		if (value > *(array + mid))
			start = mid + 1;
		else if (value < *(array + mid))
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
