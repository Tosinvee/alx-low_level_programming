#include <stdio.h>

/**
 * main - problem  that prints an array of two element = 98
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int a[5];
	int *p;


	 a[2] = 1024;
	 p = &n;
	 /**
	  * write your ine of code here
	  * Remember
	  * you are not allowed to use .
	  * you are not allowed to modify p
	  * you are to use only one statement
	  * you are not allowed to code anything else than thid line of code
	  */
	 *(p + 5) = 98;
	 /* ...so that this prints 98\n */
	 printf("a[2] = %d\n", a[2]);
	return (0);
}
