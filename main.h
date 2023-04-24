#ifndef _PRINTF
#define _PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - printf
 * @valid: operator
 * @f: function pointer
 */
typedef struct print
{
	char *valid;
	int (*f)(va_list);
} print_type;
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_percent(va_list args);
int _print_int(va_list args);
int _print_decimal(va_list args);
int (*get_print(char c))(va_list args);

#endif
