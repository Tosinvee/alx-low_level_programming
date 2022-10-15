#include <stdio.h>

/**
 *main - begins the program
 *Return: comes out always as zero
 */

int main(void)

{

	char a;

	for (a = 'a'; a <= 'z'; a++)

		putchar(a);

	for (a = 'A'; a <= 'Z'; a++)

		putchar(a);

	putchar('\n');

	return (0);

}
