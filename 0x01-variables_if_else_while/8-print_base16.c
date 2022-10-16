#include <stdio.h>

/**
 *main - the beginning point
 *Return: always zero
 */

int main(void)

{

	int b;

	char sh;

	for (b = 48; b < 58; b++)

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
