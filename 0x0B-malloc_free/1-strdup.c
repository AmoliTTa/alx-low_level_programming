#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *c;
	int i, x;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		c[x] = str[x];
	return (c);
}
