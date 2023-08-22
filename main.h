#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct formats - Struct template for format specifiers and functions
 *
 * @specifier: format name
 * @format_handler: function pointer
 *
 * Description: Provides a template of two struct members where
 * access to a format name gives access to it's corresponding function.
 */

typedef struct formats
{
	char *specifier;
	int (*format_handler)(va_list);
} check_format;

/* get_fmt_handler.c module */
int (*get_fmt_handler(char *s))(va_list ab);
int get_fmt(char *s, va_list ab);

/* format_handler.c module */
int print_percent(va_list);
int print_char(va_list ab);
int print_string(va_list ab);
int print_integer(va_list ab);

/* _putchar.c module */
int _putchar(char c);

/* _strlen.c module */
unsigned int _strlen(const char *str);

/* _printf.c module */
int _printf(const char *format, ...);

#endif /* MAIN_H */
