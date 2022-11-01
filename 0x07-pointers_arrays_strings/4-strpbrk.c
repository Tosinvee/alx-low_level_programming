#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 * Return: the string since the first found accepted character
 */

char *_strpbrk(char *s, char *accept)

{
	int a = 0, b;
	{
		b = 0;

		while (s[a])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;

		}

		a++;
	}

	return ('\0');
}


