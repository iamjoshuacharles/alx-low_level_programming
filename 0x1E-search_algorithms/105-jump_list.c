 #include "search_algos.h"
/**
 * jump_list - search for a number in a jump again way
 * @list: the input
 * @size: the size
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int b, c, bt;
	listint_t *actual, *p;

	if (list == NULL)
		return (NULL);
	b = 0;
	c = size - 1;
	bt = sqrt(size);
	actual = list;
	while (b < c)
	{
		b += bt;
		p = actual;
		while (actual->next && (b != (int)actual->index))
			actual = actual->next;
		printf("Value checked at index [%li] = [%i]\n", actual->index, actual->n);
		if (actual->n >= value)
			return (linearSearch(p, actual, value));
	}
	return (linearSearch(p, actual, value));
}
/**
 * linearSearch - search for a number in a linearSearch way
 * @s: the input
 * @e: the begining
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
listint_t *linearSearch(listint_t *b, listint_t *c, int value)
{
	printf("Value found between indexes [%li] and [%li]\n",
			b->index, c->index);
	while (b != c->next)
	{
		printf("Value checked at index [%li] = [%i]\n",
				b->index, b->n);
		if (b->n == value)
			return (b);
		b = b->next;
	}
	return (NULL);
}
