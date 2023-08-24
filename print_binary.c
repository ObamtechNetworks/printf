#include "main.h"
/**
 * print_binary - prints binary values
 * @ab: the argument to convert to octal mode
 * Return: the length of the printed digits
 */
int print_binary(va_list ab)
{
	unsigned int digit = va_arg(ab, unsigned int);
	unsigned int base2 = 1;
	unsigned int temp = digit;
	int len = 0;

	/*check for edge cases*/

	/*get highest place value in binary representation*/
	while (temp > 1)
	{
		base2 *= 2;
		temp /= 2;
	}

	/*print binary representation*/
	while (base2 > 0)
	{/*bitwise comparison*/
		if (digit & base2)
			_putchar('1');
		else
			_putchar('0');
		base2 /= 2;
		len++;
	}
	return (len);
}
