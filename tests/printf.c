#include "main.h"
/**
 * _printf - a custom printf function that does similar like printf
 * @format: the format string to receive
 * Return: the length of string printed
 */

int _printf(const char *format, ...)
{/* declare local variables */
	const char *str = format;
	int length = 0;
	int (*format_handler)(va_list);
	/* start variable arguments macro */
	va_list args;
	/** begin to retrieve arguments list */
	va_start(args, format);
	/* loop through the format string to call the several functions*/
	while (*str != '\0' && str != NULL)
	{
		if (*str == '%')
		{
			str++; /*move to the next character*/
			/*call the get_fmt_handler_function for comparison check*/
			format_handler = get_fmt_handler(*str);
			if (format_handler != NULL)
			{
				length += format_handler(args); /*gets length*/
				str++; /*move to next character*/
			}
		} /*implementation for new lines etc */
		else if (*str == '\\')
		{
			str++;
			format_handler = get_fmt_handler(*str);
			if (format_handler != NULL)
			{
				length += format_handler(args);
				str++;
			}
			else
			{/*print backslash*/
				_putchar('\\');
				length++;
			}
		}
		else
		{/*if no match then print surrounding characters */
			_putchar(*str);
			length++;
			str++;
		}
	}
	va_end(args);
	return (length);
}
