#include "main.h"

/**
 * print_start_fin - prints a series of characters
 * @start: starting point
 * @stop: end point
 * Return: Number of bytes
 */

int print_start_fin(char *start, char *stop)
{
	int len = 0;

	while (start <= stop)
	{
		len += _putchar(*start);
		start++;
	}

	return (len);
}
