#include "main.h"

/**
 * print_char - prints a character
 * @ab: the argument to print
 * Return: Retunrs the total number of character
 */
int print_char(va_list ab)
{
	char c = va_arg(ab, int);

	return (_putchar(c));
}
/**
 * print_string - prints a string
 * @ab: the argumetnt list to print
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
 * print_percent - prints percentage
 * @ab: the argument list to print
 * Return: nothing
 */
int print_percent(va_list ab)
{
	(void)ab;

	return (_putchar('%'));
}
