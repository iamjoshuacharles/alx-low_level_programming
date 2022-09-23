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

	char ch[10] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
