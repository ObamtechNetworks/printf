#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct formats - a data structure containing specifier & ptr tofunctions
 * @specifier: the character specifier to find
 * format_handler - a pointer to the function that handles the given format
 * @str: the argument to check
 * @va_list: the list of arguments to receive
 * Description: This structure is needed to map each given specifier
 * to the function that handles them
 */
typedef struct formats
{
	char specifier;
	int (*format_handler)(va_list);
} check_format;

int (*get_fmt_handler(char str))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list);
int print_int(va_list args);
int print_tab(va_list args);
int print_newline(va_list args);
int print_int(va_list args);
int print_newline(va_list args);
int print_tab(va_list args);

#endif /*MAIN_H */
