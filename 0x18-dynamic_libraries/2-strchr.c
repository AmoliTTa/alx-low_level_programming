#include "main.h"
/**
 * *_strchr - searches the 1st occurrence of character c
 * @s: String to search in
 * @c: character to search
 *
 * Return: pointer to the first occurrence of c or 0 if not found
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
