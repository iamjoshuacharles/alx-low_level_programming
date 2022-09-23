#include "main.h"

/**
* main - Entry point
*
* _putchar - Writes the character c to stdout
*
* Return: on success 1
* on error, -1 is returned, and error is set appropriately.
*/

int main(void)
{

	char ch[] = "_putchar";
	int i = 0;
	char c;

	while (i <= 8)
	{
		c = ch[i];
		_putchar(c);
		i++;

	}

		_putchar('\n');
		return (0);
}
