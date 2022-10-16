#include <stdio.h>

/**
 * main - act as the beginning point
 * Return: Always 0 (Success)
 */

int main(void)

{

	int b;

	for (b = 48; b < 58; b++)

	{

		putchar(b);

		if (b != 57)

		{

			putchar(',');

			putchar(' ');

		}

	}

	putchar('\n');

	return (0);

}
