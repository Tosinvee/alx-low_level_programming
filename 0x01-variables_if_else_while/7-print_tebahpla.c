#include <stdio.h>

/**
 *main - print the reverse lowercase alphabet
 *Return: zero
 */

int main(void)

{

	char a;

	for (a = 'z'; a >= 'a'; a--)

		putchar(a);

	putchar('\n');

	return (0);

}
