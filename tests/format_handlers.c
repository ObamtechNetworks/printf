#include "main.h"

/**
 * print_char - prints a character
 * @args: the argument to print
 * Return: Retunrs the total number of character
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	
	return (_putchar(c));
}
/**
 * print_string - prints a string
 * @args: the argumetnt list to print
 * Return: Returns the total number of strings
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}
	return (count);
}
/**
 * print_percent - prints percentage
 * Return: nothing
 */
int print_percent(va_list args)
{
	(void)args;

	return (_putchar('%'));
}
/**
 * print_newline - prints newline
 * Return: nothing
 */
int print_newline(va_list args)
{
	(void)args;
	return(_putchar('\n'));
}
/**
 * print_tab - prints tabs
 * Return: nothing
 */
int print_tab(va_list args)
{
	(void)args;
	return (_putchar('\t'));
}
