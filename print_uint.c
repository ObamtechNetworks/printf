#include "main.h"
/**
 * print_uint - prints unsigned integers
 * @ab: the argument to print
 * Return: length of the integers
 */
int print_uint(va_list ab)
{
	unsigned int numb = va_arg(ab, unsigned int);
	unsigned int divisor = 10;
	unsigned int temp = numb;
	int numbers = 0;

	for (; temp > 0; numbers++)
	{
		temp = temp / 10;
		divisor = divisor * 10;
	}

	/*print unsigned integer*/
	while (divisor > 1)
	{
		divisor /=  10;
		_putchar((numb / divisor) % 10 + '0');
	}

	return (numbers);/*number of digits printed*/
}
