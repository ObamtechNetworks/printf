#include "main.h"
/**
 * print_int_base - prints values of integer base on given base
 * @ab: argument to print
 * @base: the base to print or convert to
 * Return: the total length of the number printed
 */

int print_int_base(va_list ab, int base)
{
	int num = va_arg(ab, int);
	int len = 0, divisor;
	const char *digits = "0123456789ABCDEF";
	char *int_min, *int_max;
	int i, j;
	
	if (num == INT_MIN)
	{
		int_min = "-2147483648";
		for (i = 0; int_min[i] != '\0'; i++)
			len += _putchar(int_min[i]);
		return (len);
	}
	if (num > INT_MAX)
	{
		int_max = "2147483648";
		for (j = 0; int_max[j] != '\0'; j++)
			len += _putchar(int_max[j]);
		return (len);
	}



	if (num < 0)
	{
		_putchar('-');
		num = -num;
		len++;
	}

	if (num == 0)
	{
		_putchar('0');
		len++;
		return (len);
	}

	divisor = 1;
	while (num / divisor >= base)
		divisor *= base;

	while (divisor != 0)
	{
		_putchar(digits[num / divisor]);
		num %= divisor;
		divisor /= base;
		len++;
	}
	return (len);
}
