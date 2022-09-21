#include <stdio.h>

/**
* main - A program that prints three digits combination
*
* Return: Always 0
*/

int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 6; num1++)

	{
		for (num2 = num1 + 1; num2 < 7; num2++)

		{
			for (num3 = num2 + 1; num3 < 8; num3++)

			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');

				if (num1 == 5 && num2 == 6 && num3 == 7)
					continue;

				putchar(',');
				putchar(' ');
			}

		}

	}

	putchar('\n');

	return (0);
}
