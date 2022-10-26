#include "math.h"

/**
 * swap_int- starting point
 * @a: pointer
 * @b: pointer
 * Return: always zero
 */

void swap_int(int *a, int *b)

{
	int bof;

	bof = *a;
	*a = *b;
	*b = bof;

}
