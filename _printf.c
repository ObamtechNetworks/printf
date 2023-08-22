#include "main.h"

/**
 * _printf - (Produces output according to a format)
 * @format: The format string
 * Return: Number of bytes
 */

int _printf(const char *format, ...)
{
	int len = 0; /* declare and init len to keep track of bytes output */
	va_list ab; /*create variable of type va_list */
	char *charac, *start; /* Pointer var to keep track of each char in format */

	va_start(ab, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (charac = (char *)format; *charac; charac++)
	{
		if (*charac != '%')
		{
			len += _putchar(*charac);
			continue;
		}
		start = charac;
		charac++;

		if (get_fmt_handler(charac))
			len += get_fmt(charac, ab);
		else
			len += print_start_fin(start, charac);
	}
	va_end(ab);
	return (len);
}
