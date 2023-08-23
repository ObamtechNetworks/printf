#include "main.h"
/**
 * print_hex - prints hexadecimal values
 * @ab: the argument to convert to hexadecimal mode
 * Returns: the length of the printed digits
 */
int print_hex(va_list ab)
{
	return (print_int_base(ab, 16));
}
