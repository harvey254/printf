#ifndef _PRINTF
#define _PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - printf
 * @parameter: operator
 * @f: function pointer
 */
typedef struct print
{
	char *parameter;
	int (*f)(va_list);
} print_type;
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_percent(va_list args);
int _print_int(va_list args);
int _print_decimal(va_list args);
int _print_reverse(va_list args);
int _print_rot13(va_list args);
int _print_unsigned(va_list args);
int _print_octal(va_list args);
int _print_binary(va_list args);
int _print_hex_l(va_list args);
int _print_hex_u(va_list args);
char *convert(unsigned int num, int base);
int (*get_print(char c))(va_list args);

#endif
