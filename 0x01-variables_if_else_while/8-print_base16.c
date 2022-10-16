#include <stdio.h>

/**
 *main - the beginning point
 *Return: always zero
 */

int main(void)

{

	int b;

	char sh;

	for (b = 32; b < 42; b++)

	{

		putchar(b);

	}

	for (sh = 'a'; sh <= 'f'; sh++)

	{

		putchar(sh);

	}

	putchar('\n');

	return (0);

}
