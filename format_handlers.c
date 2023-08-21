#include "main.h"

/**
 * print_char - prints a character
 * @args: the argument to print
 * Return: Retunrs the total number of character
 */
int print_char(va_list ab)
{
	char c = va_arg(ab, int);
	
	return (_putchar(c));
}
/**
 * print_string - prints a string
 * @args: the argumetnt list to print
 * Return: Returns the total number of strings
 */
int print_string(va_list ab)
{
	char *str = va_arg(ab, char *);
	int count = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}
	return (count);
}
/**
 * print_percent - this percentage
 * Return: nothing
 */
int print_percent(va_list ab)
{
	(void)b;

	return (_putchar('%'));
}
