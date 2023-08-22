#include "main.h"

/**
 * print_char - prints a character
 * @ab: the argument to print
 * Return: Retunrs the total number of character
 */
int print_char(va_list ab)
{
	int len = 0, c = va_arg(ab, int);

	len += _putchar(c);

	return (len);
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
		len += _putchar(48);
		return (len);
	}

	if (num == INT_MIN)
	{
		char *int_min = "-214783648";
		int i;

		for (i = 0; *int_min; i++)
			len += _putchar(int_min[i]);

		return (len);
	}

	if (num < 0)
	{
		num = num * sign;
		len += _putchar('-');
	}
	divisor = 1;
	while (divisor <= num / 10)
		divisor *= 10;
	while (divisor > 0)
	{
		digit = '0' + (num / divisor);
		_putchar(digit);
		num %= divisor;
		divisor /= 10;
		len++;
	}

	return (len);
}

