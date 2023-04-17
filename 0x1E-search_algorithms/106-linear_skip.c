#include "search_algos.h"
/**
 * linear_skip - search for a number in a linear skiping way
 * @list: the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *b, *c;

	if (list == NULL)
		return (NULL);
	c = list;
	while (c != NULL)
	{
		b = c;
		if (c->express)
			c = c->express;
		else
		{
			for (; c->next;)
				c = c->next;
			break;
		}
		printf("Value checked at index [%li] = [%i]\n", c->index, c->n);
		if (c->n >= value)
			return (linearSearchSkip(b, c, value));
	}
	return (linearSearchSkip(b, c, value));
}
/**
 * linearSearchSkip - search for a number in a linear again way
 * @s: the input
 * @e: the size
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
skiplist_t *linearSearchSkip(skiplist_t *b, skiplist_t *c, int value)
{
	printf("Value found between indexes [%li] and [%li]\n",
			b->index, c->index);
	for (; b != c->next;)
	{
		printf("Value checked at index [%li] = [%i]\n",
				b->index, b->n);
		if (b->n == value)
			return (b);
		b = b->next;
	}
	return (NULL);
}
