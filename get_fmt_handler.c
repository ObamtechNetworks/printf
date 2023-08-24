#include "main.h"
/**
 * get_fmt_handler - gets the equivalent format handler function
 * @str: the char specifier to detect its matching function
 * Return: returns the length of the argunments printed
 */
int (*get_fmt_handler(char *str))(va_list)
{
	check_format specifier_arr[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"u", print_uint},
		{"o", print_octal},
		{"x", print_hex_low},
		{"X", print_hex_high},
		{"b", print_binary},
		{NULL, NULL}
	};

	int i = 0;

	while (specifier_arr[i].specifier)
	{
		if (*str == specifier_arr[i].specifier[0])
		{
			return (specifier_arr[i].format_handler);
		}
		i++;
	}
	return (NULL);
}

/**
 * get_fmt - Searches for the format function
 * @s: format string
 * @ab: Argument Pointer
 * Return: Number of bytes
 */

int get_fmt(char *s, va_list ab)
{
	int (*f)(va_list) = get_fmt_handler(s);

	if (f)
		return ((f(ab)));
	return (-1);
}
