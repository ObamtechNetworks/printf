#include "main.h"
/**
 * print_uint - prints unsigned integers
 * @ab: the argument to print
 * Return: length of the integers
 */
int print_uint(va_list ab)
{
	unsigned int numb = va_arg(ab, unsigned int);
	unsigned int divisor = 10, temp = numb;
	int len = 0, i, printed_chars = 0;
	char *buffer;
	/*case for zeors*/
	if (numb == 0)
	{
		_putchar('0');
		return (1); /*length of zero value*/
	}
	/* get the length of the numbers */
	while (temp > 0)
	{
		temp = temp / 10;
		len++;
	}
	/*create a space in memory to handle even large numbers*/
	buffer = (char *)malloc(sizeof(char) * (len + 1));/*1 byte for null*/
	/*handle malloc error*/
	if (buffer == NULL)
		return (-1);
	buffer[len] = '\0'; /*add the null terminating byte*/
	/*fill the buffer with numbers in reverse order*/
	len--; /*adjust back to last number before null*/
	while (len >= 0)
	{
		buffer[len] = (numb % divisor) + '0';/*get last digit*/
		numb /= divisor;/*get first digit*/
		len--;
	}
	/*print the string (converted numbers)*/
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
		printed_chars++;
	}
	free(buffer);/*free allocated memory*/
	return (printed_chars);/*number of digits printed*/
}
