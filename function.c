#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _print_char - prints the character c to stdout
 * @args: char argument
 *
 * Return: number of characters
 */

int _print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * _print_string -  prints a string
 * @args: pointer to string
 *
 * Return: 1
 */

int _print_string(va_list args)
{
	int i, count = 0;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * _print_percent - Prints percentage
 * @args: string argument
 *
 * Return: percentage
 */
int _print_percent(va_list args)
{
	char *p;

	p = "%";

	if (va_arg(args, int) == *p)
		return (*p);

	return (*p);
}
/**
 * _print_int - Prints an integer
 * @args: pointer
 *
 * Return: Number of digits
 */

int _print_int(va_list args)
{
	unsigned int abs, aux, count_num;
	int count = 0;
	int n = va_arg(args, int);

	if (n < 0)
	{
		abs = (n * -1);
		count += _putchar('-');
	}
	else
		abs = n;

	count_num = 1;
	aux = abs;

	while (aux > 9)
	{
		aux /= 10;
		count_num *= 10;
	}
	while (count_num >= 1)
	{
		count += _putchar(((abs / count_num) % 10) + '0');
		count_num /= 10;
	}
	return (count);
}
/**
 * _print_decimal - prints decimal
 * @args: decimal argument
 *
 * Return: decimal
 */
int _print_decimal(va_list args)
{
	return (_print_int(args));
}
