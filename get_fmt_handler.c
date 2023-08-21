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
		{NULL, NULL}
	};
	int i = 0;
	int size = sizeof(specifier_arr) / sizeof(specifier_arr[0]);
	/* loop through the array struct and map individual functions */
	while (i < size)
	{
		/*check comparsion of given argument if exists in arr struct*/
		if (specifier_arr[i].specifier[0] == *str)
		{
			/* call or return the equivalent function pointer*/
			return (specifier_arr[i].format_handler);
		}
		i++; /*for iterating if first instance didn't match */
	}
	/*if no match is found, return NULL*/
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
	return (0);
}
