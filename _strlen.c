#include <stdio.h>

/**
 * _strlen - calculates the length of a string
 * @str: pointer to the stirng to calculate length
 * Return: length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}
