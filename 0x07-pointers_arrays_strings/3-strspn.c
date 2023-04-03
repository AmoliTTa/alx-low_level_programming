#include "main.h"
/**
 * _strsp -  gets the length of a prefix substring
 * @s: initial segment
 * @accept: substring
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	unsigned int c = 0;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				c++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
