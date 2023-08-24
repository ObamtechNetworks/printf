#include "main.h"
/**
 * print_octal - prints octal values
 * @ab: the argument to convert to octal mode
 * Return: the length of the printed digits
 */
int print_octal(va_list ab)
{
	unsigned int numb = va_arg(ab, unsigned int);
	unsigned int divisor = 8, temp = numb;
	int len = 0, i = 0, count_chars = 0;
	char memo[32];/*fixed size of an octal*/

	/*when number is 0*/
	if (numb == 0)
	{
		_putchar('0');
		return (1); /*length*/
	}

	/*get length of number*/
	while (temp > 0)
	{
		temp = temp / divisor;/*base 8*/
		len++;
	}
	/*convert octal to character str*/
	while (len > 0)
	{
		memo[len - 1] = (numb % divisor) + '0';
		numb /= divisor;
		len--;
	}
	while (memo[i] >= '\0')
	{
		_putchar(memo[i]);
		i++;
		count_chars++;
	}
	return (count_chars);
}
