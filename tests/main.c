#include "main.h"

/**
 * main - tests codes for printf
 * Return: 0
 */

int main(void)
{
	int len;
	int len2;

	int len3;
	int len4;
	char *str = "MICHAEL";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len, len2);
	
	len3 = _printf("My name is %s\n", str);
	_printf("Len3: %d\n", len3);
	printf("Len3: %d\n", len3);
	len4 = printf("My name is %s\n", str);
	_printf("Len4: %d\n", len4);
	printf("Len4: %d\n", len4);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
       	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("This is a newline\n");
	_printf("newline\n");
	_printf("\n");
	_printf("A regular text\n");
	return (0);
}
