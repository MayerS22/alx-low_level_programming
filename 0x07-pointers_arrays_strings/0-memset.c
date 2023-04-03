#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (X = 0; X < n; X++)
	{
		s[X] = b;
	}
	return (s);
}
