#include <stdio.h>

/**
 *main- this is the entry point
 *Return: as zero
 */



int main(void)

{

	char a;

	for (a = 'a'; a <= 'z'; a++)

	{

		if (a == 'q' || a == 'e')

		{

			continue;

		}

		putchar(a);

	}

	putchar('\n');

	return (0);

}

