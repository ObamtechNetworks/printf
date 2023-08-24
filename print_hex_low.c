#include "main.h"
/**
 * print_hex_low - prints hexadecimal values in lower mode (x)
 * @ab: the argument to convert to hex lower mode
 * Return: the length of the printed digits
 */
int print_hex_low(va_list ab)
{
	unsigned int numb = va_arg(ab, int);
	unsigned int divisor = 16, temp = numb;
	int len = 0, i = 0, char_total = 0;
	const char hex_low[] = "0123456789abcdef";
	char *hex_string;

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}
	/*find length of hex value*/
	for (; temp > 0; len++)
		temp /= divisor;
	/*allocate space in memory for string*/
	hex_string = (char *)malloc(sizeof(char) * len);
	if (hex_string == NULL)
		return (0);
	/*fill in the hex_string base on hex values*/
	for (i = len - 1; i >= 0; i--)
	{
		hex_string[i] = hex_low[numb % divisor];/*gets last val*/
		numb /= divisor;/*get first value*/
	}
	/*print hex strings and total char length*/
	for (i = 0; i < len; i++)
	{
		_putchar(hex_string[i]);
		char_total++;
	}
	/*free the heap*/
	free(hex_string);
	return (len);
}
