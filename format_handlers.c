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

	if (str == NULL)
		str = "(null)";
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

/**
 * print_integer - prints an integer
 * @ab: Argument Pointer
 * Return: Number of bytes
 */

int print_integer(va_list ab)
{
	int num = va_arg(ab, int);
	int len = 0;
	int divisor, sign = -1;
	char digit;

	if (num == 0)
	{
		len += write(1, 0, 1);
		return (len);
	}

	if (num == INT_MIN)
	{
		len += write(1, "-214783648", 11);
		return (len);
	}

	if (num < 0)
	{
		len += write(1, "-", 1);
		num = num * sign;
	}
	divisor = 1;
	while (divisor <= num / 10)
		divisor *= 10;
	while (divisor > 0)
	{
		digit = '0' + (num / divisor);
		write(1, &digit, 1);
		num %= divisor;
		divisor /= 10;
		len++;
	}

	return (len);
}

