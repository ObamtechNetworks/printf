#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

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
int print_uint(va_list ab);
int print_hex_low(va_list ab);
int print_hex_high(va_list ab);
int print_octal(va_list ab);
int print_binary(va_list ab);

/* _putchar.c module */
int _putchar(char c);

/* print_uint */
int print_uint(va_list ab);

/*base conversion helper*/

/* print_start_finish.c module*/
int print_start_fin(char *start, char *stop);

/* _printf.c module */
int _printf(const char *format, ...);

#endif /* MAIN_H */
