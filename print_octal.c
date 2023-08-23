#include "main.h"
/**
 * print_octal - prints octal values
 * @ab: the argument to convert to octal mode
 * Returns: the length of the printed digits
 */
int print_octal(va_list ab)
{
	return (print_int_base(ab, 8));
}
