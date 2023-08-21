#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct formats - Struct template
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
int get_func(char *s, va_list ab);

/* format_handler.c module */
int print_percent_sign(va_list);
int print_character(va_list ab);
int print_string(va_list ab);
int print_integer(va_list ab);

/* _putchar.c module */
int _putchar(char c);

/* _printf.c module */
int _printf(const char *format, ...);

#endif /* MAIN_H */
